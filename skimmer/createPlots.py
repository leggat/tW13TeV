#The point of this script is to assemble the plots created in the skimmer program into stack plots and comparison plots (i.e. where they're all scaled to 1.)

from ROOT import *

from setTDRStyle import setTDRStyle
import sys

inDir = sys.argv[1]
outDir = sys.argv[2]

doData = False

if len(sys.argv) > 3: doData = True

gROOT.SetBatch()

samples = ["tW_top","tW_antitop","tChan","sChan","ZZ","zPlusJetsLowMass","zPlusJetsHighMass","WZ","WW","wPlusJets","ttbar","qcd700_1000","qcd500_700","qcd300_500","qcd200_300","qcd2000_inf","qcd1500_2000","qcd100_200","qcd1000_1500"]
hists = ["tW","tChan","sChan","VV","ttbar","wPlusJets","zPlusJets","qcd"]

histoGramPerSample = {"tW_top":"tW","tW_antitop":"tW","sChan":"sChan","tChan":"tChan","ZZ":"VV","zPlusJetsLowMass":"zPlusJets","zPlusJetsHighMass":"zPlusJets","WZ":"VV","WW":"VV","wPlusJets":"wPlusJets","ttbar":"ttbar","qcd700_1000":"qcd","qcd500_700":"qcd","qcd300_500":"qcd","qcd200_300":"qcd","qcd2000_inf":"qcd","qcd1500_2000":"qcd","qcd100_200":"qcd","qcd1000_1500":"qcd"}
colourPerSample = {"tW_top":kGreen+2,"tW_antitop":kGreen+2,"tChan":kYellow,"zPlusJetsLowMass":kBlue,"zPlusJetsHighMass":kBlue,"WZ":kPink,"WW":kPink,"ZZ":kPink,"wPlusJets":kTeal,"ttbar":kRed,"qcd700_1000":kGray,"qcd500_700":kGray,"qcd300_500":kGray,"qcd200_300":kGray,"qcd2000_inf":kGray,"qcd1500_2000":kGray,"qcd100_200":kGray,"qcd1000_1500":kGray,"sChan":kOrange,"VV":kPink,"qcd":kGray,"tW":kGreen+2,"zPlusJets":kBlue}

reducedHists = ["tW","ttbar","zPlusJets"]

inFiles = {}

plotNames = []

for sample in samples:
    inFiles[sample] = TFile(inDir+sample+"_plots.root","READ")
    
if doData: inFiles['data'] = TFile(inDir+"diMuon_plots.root","READ")

for plotName in inFiles["tW_top"].GetListOfKeys():

    if not plotName.GetName().split("_")[0] in plotNames: plotNames.append( plotName.GetName().split("_")[0] )
    
    leggy = TLegend(0.7,0.7,0.94,0.94)
    leggy.SetFillStyle(1001)
    leggy.SetBorderSize(1)
    leggy.SetFillColor(kWhite)

    histMap = {}

    for sample in samples:
        if histoGramPerSample[sample] in histMap.keys():
            histMap[histoGramPerSample[sample]].Add(inFiles[sample].Get(plotName.GetName().split("_")[0]+"_"+sample+"_"+plotName.GetName().split("_")[-1]))
        else:
            histMap[histoGramPerSample[sample]] = inFiles[sample].Get(plotName.GetName().split("_")[0]+"_"+sample+"_"+plotName.GetName().split("_")[-1])

    mcstack = THStack(plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1],plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1])

    for histName in hists:
        leggy.AddEntry(histMap[histName],histName,"f")
        histMap[histName].SetFillColor(colourPerSample[histName])
        histMap[histName].SetLineColor(kBlack)
        histMap[histName].SetLineWidth(1)
        mcstack.Add(histMap[histName])


#    for sample in hists:
#        tempHist = inFiles[sample].Get(plotName.GetName().split("_")[0]+"_"+sample+"_"+plotName.GetName().split("_")[-1]).Clone(histoGramPerSample[sample])
##        print plotName.GetName().split("_")[0]+"_"+sample+"_"+plotName.GetName().split("_")[-1]
#        leggy.AddEntry(tempHist,sample,"f")
#        tempHist.SetFillColor(colourPerSample[sample])
#        tempHist.SetLineColor(kBlack)
#        tempHist.SetLineWidth(1)
#        mcstack.Add(tempHist)
    canvy = TCanvas(plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1],plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1])
    canvy.cd()
    mcstack.Draw("")

    maxi = mcstack.GetMaximum()

    if doData:
        dataHist = inFiles['data'].Get(plotName.GetName().split("_")[0]+"_diMuon_"+plotName.GetName().split("_")[-1])
        dataHist.SetMarkerStyle(20)
        dataHist.SetMarkerSize(1.2)
        dataHist.SetMarkerColor(kBlack)
        leggy.AddEntry(dataHist,"Data","p")
        dataHist.Draw("e x0, same")
        if dataHist.GetMaximum() > maxi: maxi = dataHist.GetMaximum()

    mcstack.SetMaximum(maxi*1.3)

    leggy.Draw()

    canvy.SaveAs(outDir+plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+".png")

    canvy.SetLogy()

    canvy.SaveAs(outDir+plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"_log.png")

    compCanvy = TCanvas(plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"comp",plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"comp")
    compCanvy.cd()


#    hists.reverse()
    histMax = 0.
    for histName in hists:
        histMap[histName].SetFillColor(0)
        histMap[histName].SetLineWidth(2)
        histMap[histName].SetLineColor(colourPerSample[histName])
        if histMap[histName].Integral() > 0.:
            histMap[histName].Scale(1./histMap[histName].Integral())
        histMap[histName].Draw("same")
        if histMap[histName].GetMaximum() > histMax: histMax = histMap[histName].GetMaximum()

    histMap["tW"].SetMaximum(histMax * 1.3)
    leggy.Draw()

    compCanvy.SaveAs(outDir+plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"comp.png")

    reducedCanvy =  TCanvas(plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"reducedComp",plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"reducedComp")
    reducedCanvy.cd()

    reducedLeggy = TLegend(0.7,0.7,0.94,0.94)

    histMax = 0.
    for hist in reducedHists:
        histMap[hist].Draw("same")
        if histMap[hist].GetMaximum() > histMax: histMax = histMap[hist].GetMaximum()
        reducedLeggy.AddEntry(histMap[hist],hist,'f')

    histMap["tW"].SetMaximum(histMax * 1.3)
    reducedLeggy.Draw()

    reducedCanvy.SaveAs(outDir+plotName.GetName().split("_")[0]+plotName.GetName().split("_")[-1]+"reducedComp.png")
    
    

stages = ["lepSel","jetSel","bTag","fullSel"]

latexFile = open(outDir+"combinedLatexFile.tex","w")
latexFile.write("\\documentclass{beamer}\n\\usetheme{Warsaw}\n\n\\usepackage{graphicx}\n\\useoutertheme{infolines}\n\\setbeamertemplate{headline}{}\n\n\\begin{document}\n\n")

for plot in plotNames:
    for log in ["","_log","comp","reducedComp"]:
        post = log
        if log == "_log": post = " log"
        latexFile.write("\\frame{\n\\frametitle{"+plot+post+"}\n")
        nLines = 0
        for stage in stages:
            latexFile.write("\\includegraphics[width=0.45\\textwidth]{"+plot+stage+log+".png}")
            nLines +=1
            if nLines % 2 == 0: latexFile.write("\\\\")
            latexFile.write("\n")
        latexFile.write("}\n")

latexFile.write("\\end{document}")
#latexFile.Close()
