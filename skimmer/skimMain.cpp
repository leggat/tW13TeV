//This code is for skimming over the massive sets of data that are on the IHEP T2 or whatever. Getting a local small skim or something.
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "tWEvent.h"
#include "cutClass.h"
#include <getopt.h>
#include <unistd.h>
#include <libconfig.h++>
#include "config_parser.h"
#include "TH1.h"

void show_usage(std::string name){
  std::cerr << "Usage: " << name << " <options(s)>"
	    << "Options:\n"
	    <<"\t-h,--help\tShow this message\n"
	    << "\t-s\t--synch\tInitialise and use a synch cut flow.\n"
	    << "\t-c\tCONF\tDataset config file\n"
	    << "\t-m\tCUTSTAGE\tMake a skimmed tree at a defined point in the cuts.\n\t\t\t0 - Post lepton selection 1 - Post jet selection. 2 - Final event selecction I guess\n"
	    << "\t-f\t\tOnly run over one file in each dataset. This is to speed up testing and so forth.\n"
	    << std::endl;
}

int main(int argc, char* argv[]){

  //Parse command line arguments here!
  int opt;
  int cutStage = -1;
  std::vector<std::string> cutStageNameVec = {"lepSel","jetSel","fullSel"};
  char * configFile = NULL;

  //The integrated luminosity of the data being used. 
  //At some point this should become a sum of lumis of the data being used, but for now it is hard-coded because I'm not looking at data yet. Or something.
  float integratedLuminosity = 2500;

  bool oneFileOnly = false;

  bool makeCutFlow = false;
  std::vector<std::string> cutFlowStringList = 
    {"nEvents         ",
     "Trigger         ",
     "PV              ",
     "Tight muons     ",
     "Loose muon veto ",
     "Electron veto   ",
     "Charge selection",
     "Lepton mass     ",
     "Jets            ",
     "B tags          ",
     "MET             "}; 

  while ((opt = getopt(argc,argv,"hsc:m:f"))!=-1){
    switch (opt) {
    case 'h':
      show_usage(argv[0]);
      return 0;
      break;
    case 's':
      makeCutFlow = true;
      break;
    case 'c':
      configFile = optarg;
      break;
    case 'm':
      cutStage = atoi(optarg);
      break;
    case 'f':
      oneFileOnly = true;
      break;
    case '?':
      if (optopt == 'c')
	fprintf(stderr, "Option -%c requires an argument. \n", optopt);
      return 0;
    default:
      std::cerr << "Who knows" << std::endl;
      break;
    }
  }

  if (!(cutStage == 0 || cutStage == -1 || cutStage == 1 || cutStage == 2)){
    std::cout << "Must be between -1 and 2! Exiting!" << std::endl;
    return 0;
  }
  std::cout << "using config file: " << configFile <<std::endl;

  //Firstly we will need to read in some config stuff about the dataset I guess.
  //That will go here later on, but for now I'm happy to just get it skimming anything so... I dunno, scrappy code for now! Yay!
  //Read in a dataset config file
  std::vector<Dataset> * datasets = new  std::vector<Dataset>();
  Parser::parse_datasets(configFile, datasets);

  if (datasets->size() == 0){
    std::cout << "Please use a dataset config file with -c argument. Exiting..." << std::endl;
    return 0.;
  }

  //Set up the cut class
  Cuts * cutObj = new Cuts();

  //Some stuff for synchronsation will go in here.
  std::map<std::string,TH1F*> cutFlow;
  //TH1F* cutFlow = NULL;
  if (makeCutFlow){
    for (auto const & dataset : *datasets){
      cutFlow[dataset.getName()] = new TH1F(("cutFlowTable"+dataset.getName()).c_str(),("cutFlowTable"+dataset.getName()).c_str(),cutFlowStringList.size(),0,cutFlowStringList.size());
    }
  }

  //Loop over the datasets
  //TODO change this to not just loop over one file!
  for (auto const & dataset : *datasets){

    std::cout << "Processing dataset " << dataset.getName();
    //Do some initialisations of stuff on a per-database basis here.
    //First update the cut flow table if we're doing that.
    if (makeCutFlow) cutObj->setCutFlowHistogram(cutFlow[dataset.getName()]);
    
    //Next update the datasetweight in cut obj (this is important for filling histograms and the like).
    if (dataset.isMC()){
      std::cout << " which contains " << dataset.getTotalEvents() << " events and a cross section of " << dataset.getCrossSection() << " giving a dataset weight of " << integratedLuminosity * dataset.getCrossSection()/dataset.getTotalEvents() << std::endl;
      cutObj->setDatasetWeight(integratedLuminosity * dataset.getCrossSection()/dataset.getTotalEvents());
    }
    else cutObj->setDatasetWeight(1.);
    

    //The name should maybe be customisable?
    TChain * datasetChain = new TChain("TNT/BOOM");
    
    //there will be a loop here to add all of the files to the chain. Now we're just doing one to test this whole thing works.
    if (oneFileOnly) datasetChain->Add((dataset.getFolderName()+"OutTree_1.root").c_str());
    else datasetChain->Add((dataset.getFolderName()+"OutTree_*.root").c_str());
      // datasetChain->Add("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/crab_Full2202_ST/160222_223524/0000/OutTree_1.root");
    
    //If we're making a skim (which is, nominally, the point of this script, though it's probably just gonna become my eventual analysis script) then make the skimming file here.
    TTree * cloneTree;
    if (cutStage > -1){
      cloneTree = datasetChain->CloneTree(0);
      cutObj->setSkimTree(cutStage,cloneTree);
    }

    tWEvent * event = new tWEvent(datasetChain);

    int numberOfEntries = datasetChain->GetEntries();
    
    std::cout << " containing " << numberOfEntries << " entries." << std::endl;

    //Begin loop over all events
    int numberSelected = 0;
    for ( int evtInd = 0; evtInd < numberOfEntries; evtInd++){
      if (evtInd % 500 < 0.01) std::cerr << evtInd << " (" << 100*float(evtInd)/numberOfEntries << "%) Selected: " << numberSelected << " \r";
      event->GetEntry(evtInd);
      //Make the cuts!
      if (!cutObj->makeCuts(event)) continue;
      numberSelected++;
    } //Close loop over all events
    std::cout << std::endl; //Add in a line break after the status bar thing.

    //Save the clone trees here
    if (cutStage > -1){
      TFile cloneFile(("skims/"+dataset.getName()+cutStageNameVec[cutStage]+".root").c_str(),"RECREATE");
      cloneFile.cd();
      cloneTree->Write();
      cloneFile.Write();
      cloneFile.Close();
    }

    if (makeCutFlow){
      std::cout << "Cut flow for " << dataset.getName() << std::endl;
      for (int cfInd = 1; cfInd < cutFlow[dataset.getName()]->GetXaxis()->GetNbins()+1; cfInd++){
	std::cout << cutFlowStringList[cfInd-1] << " : " << cutFlow[dataset.getName()]->GetBinContent(cfInd) << std::endl;
      }
      
    }

  } // Close dataset loop

} // end main
