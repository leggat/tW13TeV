//This code is for skimming over the massive sets of data that are on the IHEP T2 or whatever. Getting a local small skim or something.
#include <iostream>
#include <string>
#include <vector>
#include "tWEvent.h"
#include "cutClass.h"
#include <getopt.h>
#include <unistd.h>
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

  bool makeCutFlow = false;

  while ((opt = getopt(argc,argv,"hs"))!=-1){
    switch (opt) {
    case 'h':
      show_usage(argv[0]);
      return 0;
      break;
    case 's':
      makeCutFlow = true;
      break;
    default:
      std::cerr << "Who knows" << std::endl;
      break;
    }
  }

  
  //Firstly we will need to read in some config stuff about the dataset I guess.
  //That will go here later on, but for now I'm happy to just get it skimming anything so... I dunno, scrappy code for now! Yay!

  //Set up the cut class
  Cuts * cutObj = new Cuts();

  //Some stuff for synchronsation will go in here.
  TH1F* cutFlow = NULL;
  if (makeCutFlow){
    cutFlow = new TH1F("cutFlowTable","cutFlowTable",9,0,9);
    cutObj->setCutFlowHistogram(cutFlow);
    
  }

  //Loop over the datasets
  //TODO change this to not just loop over one file!
  for (int datasetInd = 0; datasetInd < 1; datasetInd++){
    //The name should maybe be customisable?
    TChain * datasetChain = new TChain("TNT/BOOM");
    
    //there will be a loop here to add all of the files to the chain. Now we're just doing one to test this whole thing works.
    datasetChain->Add("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/crab_Full2202_ST/160222_223524/0000/OutTree_1.root");
    
    tWEvent * event = new tWEvent(datasetChain);

    int numberOfEntries = datasetChain->GetEntries();
    
    //Begin loop over all events
    int numberSelected = 0;
    for ( int evtInd = 0; evtInd < numberOfEntries; evtInd++){
      if (evtInd % 500 < 0.01) std::cerr << evtInd << " (" << 100*float(evtInd)/numberOfEntries << "%) Selected: " << numberSelected << " \r";
      event->GetEntry(evtInd);
      //Make the cuts!
      if (!cutObj->makeCuts(event)) continue;
      numberSelected++;
    } //Close loop over all events

    if (makeCutFlow){
      for (int cfInd = 1; cfInd < cutFlow->GetXaxis()->GetNbins()+1; cfInd++){
	std::cout << cfInd << " : " << cutFlow->GetBinContent(cfInd) << std::endl;
      }
    }

  } // Close dataset loop

} // end main
