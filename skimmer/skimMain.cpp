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
	    << std::endl;
}

int main(int argc, char* argv[]){

  //Parse command line arguments here!
  int opt;

  char * configFile = NULL;

  bool makeCutFlow = false;

  while ((opt = getopt(argc,argv,"hsc:"))!=-1){
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
    default:
      std::cerr << "Who knows" << std::endl;
      break;
    }
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
      cutFlow[dataset.getName()] = new TH1F(("cutFlowTable"+dataset.getName()).c_str(),("cutFlowTable"+dataset.getName()).c_str(),9,0,9);
    }
  }

  //Loop over the datasets
  //TODO change this to not just loop over one file!
  for (auto const & dataset : *datasets){
    if (makeCutFlow) cutObj->setCutFlowHistogram(cutFlow[dataset.getName()]);
    std::cout << "Processing dataset " << dataset.getName();
    //The name should maybe be customisable?
    TChain * datasetChain = new TChain("TNT/BOOM");
    
    //there will be a loop here to add all of the files to the chain. Now we're just doing one to test this whole thing works.
    datasetChain->Add((dataset.getFolderName()+"*.root").c_str());
    //    datasetChain->Add("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/crab_Full2202_ST/160222_223524/0000/OutTree_1.root");
    
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

    if (makeCutFlow){
      for (auto const & dSet: *datasets){
	std::cout << "Cut flow for " << dataset.getName() << std::endl;
	for (int cfInd = 1; cfInd < cutFlow[dSet.getName()]->GetXaxis()->GetNbins()+1; cfInd++){
	  std::cout << cfInd << " : " << cutFlow[dSet.getName()]->GetBinContent(cfInd) << std::endl;
	}
      }
    }

  } // Close dataset loop

} // end main
