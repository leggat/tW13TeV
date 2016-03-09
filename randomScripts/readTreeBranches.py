from ROOT import *

infile = TFile("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/crab_Full2202_DY/160222_223837/0000/OutTree_1.root","READ")

inDir = infile.Get("TNT")
inTree = inDir.Get("BOOM")

for i in inTree.GetListOfBranches():
    print i.GetName()

for i in range((inTree.GetEntries())):
    inTree.GetEntry(i)
    print len(inTree.patElectron_pt),
    for j in range(len(inTree.patElectron_pt)):
        print inTree.patElectron_pt[j],
    
    for k in range(
    print
