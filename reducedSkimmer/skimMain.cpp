//This code is exclusively for skimming down the large code. Right now it'll skim an event if it has two muons in it. This will, presumably, have to change once I get into single lepton stuff.
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sys/stat.h>
#include <sys/types.h>
#include "tWEvent.h"
#include <getopt.h>
#include <unistd.h>
#include <libconfig.h++>
#include "config_parser.h"


int getStartFile(std::string name, int startFile, int nFilesMax, std::string outdir){
  //
  struct stat buffer;
  int i = 0;
  for (i = startFile; i < nFilesMax; i++){
    if (stat((outdir+name+"/skimTree"+std::to_string(i)+".root").c_str(), &buffer) != 0) break;
  }
  return i;
}

void show_usage(std::string name){
  std::cerr << "Usage: " << name << " <options(s)>"
	    << "Options:\n"
 	    <<"\t-h,--help\tShow this message\n"
	    << "\t-d\tDATASETCONF\tDataset config file\n"
	    << "\t-f\t\tOnly run over one file in each dataset. This is to speed up testing and so forth.\n"
	    << "\t-a\t\tSkip previously finished skims. This is because it keeps crashing for no obvious reason.\n"
	    << "\t-b\tBEGIN\tThe file number to begin the skim on.\n"
	    << "\t-e\tEND\tThe file number to stop skimming on.\n"
	    << "\t-c\tCHANNEL\tThe channel to run over. For now 0 is dimuon and 1 is single muon. Will add more in as and when.\n"
	    << "\t-o\tOUTFOLDER\tThe folder to put the skims into.\n"
	    << std::endl;
}

int main(int argc, char* argv[]){

  char * configFile = NULL;
  bool skipPreviousSkims = false;

  bool oneFileOnly = false;

  //Number of leptons to select on. This will inevitably change and become customisable once we start doing other channels.
  int numSelMus = 2;
  int numSelEles = 0;

  int beginFileNumber = -1;
  int endFileNumber = -1;

  int channel = 0;

  std::string outDirSkim = "skims/"; 

  int opt;

  while ((opt = getopt(argc,argv,"hsd:m:fp:o:u:ab:e:c:"))!=-1){
    switch (opt) {
    case 'h':
      show_usage(argv[0]);
      return 0;
      break;
    case 'd':
      configFile = optarg;
      break;
    case 'f':
      oneFileOnly = true;
      break;
    case 'a':
      skipPreviousSkims = true;
      break;
    case 'b':
      beginFileNumber = atoi(optarg);
      break;
    case 'e':
      endFileNumber = atoi(optarg);
      break;
    case 'c':
      channel = atoi(optarg);
      break;
    case 'o':
      outDirSkim = optarg;
      break;
    case '?':
      if (optopt == 'd' || optopt == 'p' || optopt == 'o' || optopt == 'u')
	fprintf(stderr, "Option -%c requires an argument. \n", optopt);
      return 0;
    default:
      std::cerr << "Who knows" << std::endl;
      break;
    }
  }

  //Assign the number of selected leptons by the chosen channel no
  switch (channel){
  case 0:
    numSelMus = 2;
    numSelEles = 0;
    break;
  case 1:
    numSelMus = 1;
    numSelEles = 0;
    break;
  default:
    std::cout << "Not an appropriate channel number!" << std::endl;
    return 0;
    break;
  }

  std::cout << "using config file: " << configFile <<std::endl;

  //Firstly we will need to read in some config stuff about the dataset I guess.
  //That will go here later on, but for now I'm happy to just get it skimming anything so... I dunno, scrappy code for now! Yay!
  //Read in a dataset config file
  std::vector<Dataset> * datasets = new  std::vector<Dataset>();
  std::vector<std::string> * plotsToFill = new std::vector<std::string>();
  std::vector<std::string> legOrder = {};
  std::vector<std::string> plotOrder = {};
  Parser::parse_datasets(configFile, datasets, plotsToFill, &legOrder, &plotOrder);

  if (datasets->size() == 0){
    std::cout << "Please use a dataset config file with -c argument. Exiting..." << std::endl;
    return 0.;
  }

  //Loop over the datasets
  //TODO change this to not just loop over one file!
  for (auto const & dataset : *datasets){

    std::cout << "Processing dataset " << dataset.getName() << std::endl;
    //Do some initialisations of stuff on a per-database basis here.
    //First update the cut flow table if we're doing that.

    int status;
    status = mkdir((outDirSkim+dataset.getName()).c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    
    if (status == 100) std::cout << "wow.";

    //The name should maybe be customisable?
    TChain * datasetChain = new TChain("TNT/BOOM");

    int maxFiles = dataset.getnFiles() + 1;
    if (oneFileOnly) maxFiles = 2;

    int startFile = 1;
    if (beginFileNumber > 0) startFile = beginFileNumber;
    if (endFileNumber > 0 && endFileNumber + 1 < maxFiles) maxFiles = endFileNumber + 1;
    if (skipPreviousSkims) startFile = getStartFile(dataset.getName(),startFile,maxFiles,outDirSkim);

    if (startFile > dataset.getnFiles() + 1) continue;

    //    std::cout << startFile <<std::endl;
    // continue;

    for (int fileInd = startFile; fileInd < maxFiles; fileInd++){
      

      datasetChain->Reset();
      struct stat buffer;
      if (stat((dataset.getFolderName()+"OutTree_"+std::to_string(fileInd)+".root").c_str(), &buffer) != 0) continue;
      std::cout << "Doing file " << fileInd << " of " << maxFiles - 1;

      datasetChain->Add((dataset.getFolderName()+"OutTree_"+std::to_string(fileInd)+".root").c_str());
      
      tWEvent * event = new tWEvent(datasetChain);
      
      TTree* cloneTree = datasetChain->CloneTree(0);

      int treeEntries = datasetChain->GetEntries();
      
      std::cout << " containing " << treeEntries << " entries." << std::endl;

      int selectedEvents = 0;
      
      for (int evtInd = 0; evtInd < treeEntries; evtInd++){
	event->GetEntry(evtInd);
	if (evtInd % 500 < 0.01) std::cout << evtInd << " (" << 100*float(evtInd)/treeEntries << "%) Selected: " << selectedEvents << " \r";

	//In this code simple muon and electron selections will be applied in order to build the new tree.
	int numMus = 0;
	for (unsigned int i = 0; i < event->Muon_pt->size(); i++){
	  //	  std::cout << event->Muon_pt->at(i) << " " << fabs(event->Muon_eta->at(i)) << " " << event->Muon_relIsoDeltaBetaR04->at(i);
	  if (!(event->Muon_isGlobal->at(i) && event->Muon_isTrackerMuon->at(i))) continue;
	  if (event->Muon_pt->at(i) < 20.) continue;
	  if (fabs(event->Muon_eta->at(i)) > 2.4) continue;
	  if (event->Muon_relIsoDeltaBetaR04->at(i) > 0.25) continue;
	  if (!event->Muon_tight->at(i)) continue;
	  numMus++;
	}

	if (numMus != numSelMus) continue;

	int numEles = 0;
	for (unsigned int i = 0; i < event->patElectron_pt->size(); i++){
	  if (event->patElectron_pt->at(i) < 20.) continue;
	  if (fabs(event->patElectron_eta->at(i)) > 2.5) continue;
	  if (!event->patElectron_isPassVeto->at(i)) continue;
	  numEles++;
	}
	if (numEles != numSelEles) continue;

	selectedEvents++;
	cloneTree->Fill();

      }
      
      std::cout << std::endl << "A total of " << selectedEvents << " were skimmed." << std::endl;
      std::cout << (outDirSkim+dataset.getName() + "/skimTree"+std::to_string(fileInd)+".root").c_str() << std::endl;
      TFile outFile((outDirSkim+dataset.getName() + "/skimTree"+std::to_string(fileInd)+".root").c_str(),"RECREATE");
      outFile.cd();
      cloneTree->Write();
      outFile.Write();
      outFile.Close();

      //If we're only doing one file, make a prediction of how many events will be skimmed across the dataset.
      if (oneFileOnly){
	int expectedEvents = selectedEvents * dataset.getnFiles();
	float datasetSF = (2300. * dataset.getCrossSection())/dataset.getTotalEvents();
	std::cout << "Based on one file, we expect to grab " << expectedEvents << " events for " << dataset.getName() << " reweighted is " << datasetSF * expectedEvents << " events" << std::endl;
      }

      delete cloneTree;

      delete event;
    }
  }
} // end main
