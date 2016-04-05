#A script that will combine plots that have had to be made separately in ttbar, zplusjets, data and everything else because of some dumb reason with repeated terminated processes.
from ROOT import *

from setTDRStyle import setTDRStyle

gROOT.SetBatch()

plots = ["dileptonMass","lep1Pt","lep1Eta","lep1Phi","lep1RelIso","lep2Pt","lep2Eta","lep2Phi","lep2RelIso","nJets","jet1Pt","jet1Eta", "jet1Tag","nBJets","met","metPx","metPy","metPz","metPhi"]
stages = ["lepSel","jetSel","bTag","fullSel"]
#plots = ["lep1Pt"]
#stages = ["lepSel"]

gStyle.SetOptTitle(0)
gStyle.SetPalette(1)
gStyle.SetCanvasBorderMode(0)
gStyle.SetCanvasColor(kWhite)
gStyle.SetCanvasDefH(600)
gStyle.SetCanvasDefW(600)
gStyle.SetLabelFont(18,"")

setTDRStyle()
#gStyle.SetTitleXOffset(1.2) 
gStyle.SetTitleYOffset(1.2)

cmsTextFont = 61
extraTextFont = 52
cmsText = "CMS"
extraText = "Preliminary"

latex = TLatex()
latex.SetNDC()
latex.SetTextAlign(31)

latex2 = TLatex()
latex2.SetNDC()
latex2.SetTextAlign(31)
latex2.SetTextSize(0.04)

text2 = TLatex(0.45,0.98,"#mu#mu channel")
text2.SetNDC()
text2.SetTextAlign(13)
text2.SetX(0.18)
text2.SetY(0.92)
text2.SetTextFont(42)
text2.SetTextSize(0.0610687)


for plot in plots:
    for stage in stages:
        print plot+stage
        in1 = TFile("plots/noZJets/"+plot+stage+".root","READ")
        in3 = TFile("plots/zPlusJets/"+plot+stage+".root","READ")
        in4 = TFile("plots/zLowMass/"+plot+stage+".root","READ")
        in2 = TFile("plots/ttbar/"+plot+stage+".root","READ")
        datFile = TFile("plots/diMuon/"+plot+stage+".root","READ")
        outFile = TFile("plots/combined/"+plot+stage+".root","RECREATE")
        outStack = 0
        outStack = THStack(plot+stage,plot+stage)
        
        xAxisTitle = ""

        for fileN in [in1,in3,in2,in4]:
            canvy = fileN.Get(plot+stage)
            for prim in canvy.GetListOfPrimitives():
                if prim.ClassName() == "THStack":
                    if xAxisTitle == "":
                        xAxisTitle = prim.GetXaxis().GetTitle()
                    for hist in prim.GetHists():
                        outStack.Add(hist)

            fileN.Close()

        dataCanv = datFile.Get(plot+stage)
        datHist = 0
        for prim in dataCanv.GetListOfPrimitives():
            if prim.ClassName() == "TH1F":
                datHist = prim

        outCanvas = TCanvas(plot+stage,plot+stage,1000,800)
        outCanvas.SetBottomMargin(0.3)
        outCanvas.cd()
        SetOwnership(outStack,False)
        
        leggy = TLegend(0.8,0.6,0.95,0.90)
        leggy.SetFillStyle(1001)
        leggy.SetBorderSize(1) 
        leggy.SetFillColor(0)
        leggy.SetLineColor(0)
        leggy.SetShadowColor(0)

        leggy.AddEntry(datHist,"Data","ep")

        if outStack.GetMaximum() > datHist.GetMaximum(): outStack.SetMaximum(outStack.GetMaximum() * 1.2)
        else: outStack.SetMaximum(datHist.GetMaximum() * 1.2)

        outStack.Draw()
        outStack.GetXaxis().SetLabelSize(0.0)

        sumHistMC = 0.
        sumHistMC = TH1F(outStack.GetHistogram().Clone(plot+stage+"totMC"))
        for stackHist in outStack.GetHists():
            leggy.AddEntry(stackHist,stackHist.GetName().split("_")[0].split(plot)[1],"f")
            sumHistMC.Add(stackHist)

        datHist.Draw("epsame")

        leggy.Draw()

        latex.SetTextSize(0.04)
        latex.SetTextFont(cmsTextFont)
        latex.DrawLatex(0.23, 0.95, cmsText )

        latex.SetTextFont(extraTextFont)
        latex.SetTextSize(0.04*0.76)
        latex.DrawLatex(0.35, 0.95 , extraText )

        latex2.DrawLatex(0.95, 0.95, "2.5 fb^{-1} (13 TeV)")

        text2.Draw()

        ratioCanvy = 0
        ratioCanvy = TPad(plot+stage+"ratio",plot+stage+"ratio",0.0,0.0,1.0,1.0)
        SetOwnership(ratioCanvy,False)
        ratioCanvy.SetTopMargin(0.7)
        ratioCanvy.SetFillColor(0)
        ratioCanvy.SetFillStyle(0)
        ratioCanvy.SetGridy(1)
        ratioCanvy.Draw()
        ratioCanvy.cd(0)

        sumData = datHist.Clone(plot+stage+"ratio")
#        SetOwnership(sumData,True)
        sumData.Divide(sumHistMC)

        sumData.SetMinimum(0.0)
        sumData.SetMaximum(2.0)
        sumData.GetXaxis().SetTitleOffset(1.2)
        sumData.GetXaxis().SetLabelSize(0.04)
        sumData.GetYaxis().SetNdivisions(6)
        sumData.GetYaxis().SetTitleSize(0.03)

        sumData.Draw("E1X0")

        outCanvas.SaveAs("plots/combined/"+plot+stage+".png")
        outCanvas.Write()

        outCanvas.SetLogy()
        outCanvas.SaveAs("plots/combined/"+plot+stage+"_log.png")

        datFile.Close()

        del outStack
#        del sumData
        del sumHistMC
        del ratioCanvy 

        continue

        ratioCanvy.cd(0)

        ratioCanvy.cd()

        sumData.Draw("E1X0")
        sumData.GetXaxis().SetTitle(xAxisTitle)


        outFile.Close()

        del sumData
        del ratioCanvy
        del outStack
