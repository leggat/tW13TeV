#A script that runs the reduced skimmer in parallel. This is to try and not process a dataset in sensible amounts of time without it breaking.

import subprocess
import sys

nFiles = int(sys.argv[1])

conf = sys.argv[2]

for i in range(1,nFiles,100):
    print "/publicfs/cms/user/duncanleg/scripts/tW13TeV/reducedSkimmer/skimmer -d "+conf+" -b "+str(i)+" -e "+str(i+99) + " 2>logs/errorData"+str(i)
    subprocess.Popen("/publicfs/cms/user/duncanleg/scripts/tW13TeV/reducedSkimmer/skimmer -d "+conf+" -b "+str(i)+" -e "+str(i+99) + " 2>logs/errorData"+str(i),shell=True)

#print "/publicfs/cms/user/duncanleg/scripts/tW13TeV/skimmer/tWAnal -d configs/diMuon.cfg -b "+str(finalIt) +" -e "+str(nFiles) + " 2>logs/errorData"+str(finalIt)
