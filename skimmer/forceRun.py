#A script that is designed to force through the data running program. Because fuck whatever reason is making it abort.

import subprocess
import time
import sys

outDir = sys.argv[1]

keepRunning = True

subprocess.call("mkdir "+outDir,shell=True)
logOut = outDir.split("/")[-1]
subprocess.call("mkdir logs/"+logOut,shell=True)

runData = True
runMC = True

while runData or runMC:
    if runData:
        processData = subprocess.Popen("/publicfs/cms/user/duncanleg/scripts/tW13TeV/skimmer/tWAnal -d configs/singMuon.cfg -c -u 0 -y -p configs/lepJetPlots.cfg -o "+outDir+" -c 1 -t 3 -b 1 2>logs/"+logOut+"/dataError",shell=True)
        runData = False
    if runMC:
        processMC = subprocess.Popen("/publicfs/cms/user/duncanleg/scripts/tW13TeV/skimmer/tWAnal -d configs/mcDatasets.cfg -c -u 0 -y -p configs/lepJetPlots.cfg -o "+outDir+" -c 1 2>logs/"+logOut+"/mcError",shell=True)
        runMC = False

    while processData.returncode == None and processData.returncode == None:
        processData.poll()
        processMC.poll()
        time.sleep(30)

    if processMC.returncode == 0:
        runMC = False
    elif not processMC.returncode == None:
        runMC = True
    if processData.returncode == 0:
        runData = False
    elif not processData.returncode == None:
        runData = True
        
print
print "Finished correctly I guess!"
