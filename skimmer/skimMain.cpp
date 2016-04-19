//This code is for skimming over the massive sets of data that are on the IHEP T2 or whatever. Getting a local small skim or something.
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sys/stat.h>
#include <sys/types.h>
#include "tWEvent.h"
#include "cutClass.h"
#include <getopt.h>
#include <unistd.h>
#include <libconfig.h++>
#include "config_parser.h"
#include "histogramPlotter.h"
#include "plots.h"
#include "TH1.h"
#include <sys/stat.h>


int getStartFile(std::string name,std::string stage){
  //
  struct stat buffer;
  int i = 0;
  for (i = 0; i < 50; i++){
    if (stat(("skims/"+name+stage+std::to_string(i)+".root").c_str(), &buffer) != 0) break;
  }
  return i * 50 + 1;
}

bool addFilesToChain(TChain * chain, std::string folderName, int startFile, int nFiles){
  chain->Reset();
  for (int i = startFile; i <= startFile+49; i++){
    if (i > nFiles) break;
    chain->Add((folderName+"OutTree_"+std::to_string(i)+".root").c_str());
    
  }
  return true;
}

void show_usage(std::string name){
  std::cerr << "Usage: " << name << " <options(s)>"
	    << "Options:\n"
 	    <<"\t-h,--help\tShow this message\n"
	    << "\t-s\t--synch\tInitialise and use a synch cut flow.\n"
	    << "\t-d\tDATASETCONF\tDataset config file\n"
	    << "\t-m\tCUTSTAGE\tMake a skimmed tree at a defined point in the cuts.\n\t\t\t0 - Post lepton selection 1 - Post jet selection. 2 - Final event selecction I guess\n"
	    << "\t-f\t\tOnly run over one file in each dataset. This is to speed up testing and so forth.\n"
	    << "\t-p\tPLOTCONF\tPlot config file. Leave blank for no plots.\n"
	    << "\t-o\tPLOTOUTDIR\tThe directory the plots will be written to. Defaults to plots/\n"
	    << "\t-u\tCUTSTAGE\tRun the skimmer over previously made skims. Arguments are the same as for the making."
	    << "\t-a\t\tSkip previously finished skims. This is because it keeps crashing for no obvious reason."
	    << "\t-c\tCHANNEL\tThe channel to be run over. 0 (default) is di-muon, 1 is single muon. Others to come probably.\n"
	    << "\t-b\tBEGINFILE\tThe file to begin running on. Useful for parallelising processing.\n"
	    << "\t-e\tENDFILE\tThe file to end on. Defaults to nFiles if larger than the number of files.\n"
	    << std::endl;
}

int main(int argc, char* argv[]){

  //Parse command line arguments here!
  int opt;
  int cutStage = -1;
  int skimToUse = -1;
  std::vector<std::string> cutStageNameVec = {"lepSel","jetSel","bTag","fullSel"};
  char * configFile = NULL;
  char * plotConf = NULL;
  bool skipPreviousSkims = false;
  const char * plotOutDir = "plots/";
  int channel = 0;

  int beginFileNumber = -1;
  int endFileNumber = -1;

  std::string skimFolder = "";


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

  while ((opt = getopt(argc,argv,"hsd:m:fp:o:u:ac:b:e:"))!=-1){
    switch (opt) {
    case 'h':
      show_usage(argv[0]);
      return 0;
      break;
    case 's':
      makeCutFlow = true;
      break;
    case 'd':
      configFile = optarg;
      break;
    case 'm':
      cutStage = atoi(optarg);
      break;
    case 'f':
      oneFileOnly = true;
      break;
    case 'p':
      plotConf = optarg;
      break;
    case 'o':
      plotOutDir = optarg;
      break;
    case 'u':
      skimToUse = atoi(optarg);
      break;
    case 'a':
      skipPreviousSkims = true;
      break;
    case 'c':
      channel = atoi(optarg);
      break;
    case 'b':
      beginFileNumber = atoi(optarg);
      break;
    case 'e':
      endFileNumber = atoi(optarg);
      break;
    case '?':
      if (optopt == 'd' || optopt == 'p' || optopt == 'o' || optopt == 'u' || optopt == 'c' || optopt == 'b' || optopt == 'e')
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
  std::vector<std::string> * plotsToFill = new std::vector<std::string>();
  std::vector<std::string> legOrder = {};
  std::vector<std::string> plotOrder = {};
  Parser::parse_datasets(configFile, datasets, plotsToFill, &legOrder, &plotOrder);

  if (datasets->size() == 0){
    std::cout << "Please use a dataset config file with -c argument. Exiting..." << std::endl;
    return 0.;
  }

  //Set up the cut class
  Cuts * cutObj = new Cuts();

  //Change stuff in the cut class depending on what channel we're doing
  switch (channel){
  case 0:
    cutObj->setNTightMuon(2);
    cutObj->setNTightEles(0);
    cutObj->setNJets(1);
    cutObj->setNBJets(1);
    cutObj->isLepJets(false);    
    skimFolder = "skims/";
    break;
  case 1:
    cutObj->setNTightMuon(1);
    cutObj->setNTightEles(0);
    cutObj->setNJets(3);
    cutObj->setNBJets(1);
    cutObj->isLepJets(true);
    skimFolder = "skims/singMuon/"; //Hopefully it won't later be annoying that I made these hardcoded.
    break;
  default:
    std::cout << "This is not an acceptable channel! Sort your life out!" << std::endl;
    return 0;
  }

  //Some stuff for synchronsation will go in here.
  std::map<std::string,TH1F*> cutFlow;
  //TH1F* cutFlow = NULL;
  if (makeCutFlow){
    for (auto const & dataset : *datasets){
      if (cutFlow.find(dataset.getName()) == cutFlow.end()){
	cutFlow[dataset.getName()] = new TH1F(("cutFlowTable"+dataset.getName()).c_str(),("cutFlowTable"+dataset.getName()).c_str(),cutFlowStringList.size(),0,cutFlowStringList.size());
      }
    }
  }

  //Make the histograms here. It is important to do this before the main dataset loop because some datasets fill the same histrograms (i.e. single top etc).
  //When I end up running over multiple channels or systematics, this will likely need to be expanded.
  std::map<std::string,std::map<std::string,Plots*> > plotMap;
  std::map<std::string,datasetInfo> datasetInfos;
  if (plotConf){
    for (auto const & dataset: *datasets){
      if (plotMap.find(dataset.getName()) ==  plotMap.end()){
	datasetInfos[dataset.getName()] = datasetInfo();
	datasetInfos[dataset.getName()].colour = dataset.getColour();
	datasetInfos[dataset.getName()].legLabel = dataset.getLegName();
	datasetInfos[dataset.getName()].legType = 'f';
	plotMap[dataset.getName()] = std::map<std::string,Plots*> ();
	for (auto const & stageName : cutStageNameVec){
	  plotMap[dataset.getName()][stageName] = new Plots(plotConf,dataset.getName()+"_"+stageName);
	}
      }
    }
  }

  //Loop over the datasets
  //TODO change this to not just loop over one file!
  for (auto const & dataset : *datasets){

    std::cout << "Processing dataset " << dataset.getName();
    //Do some initialisations of stuff on a per-database basis here.
    //First update the cut flow table if we're doing that.
    if (makeCutFlow) cutObj->setCutFlowHistogram(cutFlow[dataset.getName()]);
    
    //Next set up the plots that we want to fill if we're making plots.
    if (plotConf) cutObj->setPlots(plotMap[dataset.getName()]);

    //Next update the datasetweight in cut obj (this is important for filling histograms and the like).
    if (dataset.isMC()){
      std::cout << " which contains " << dataset.getTotalEvents() << " events and a cross section of " << dataset.getCrossSection() << " giving a dataset weight of " << integratedLuminosity * dataset.getCrossSection()/dataset.getTotalEvents() << std::endl;
      cutObj->setDatasetWeight(integratedLuminosity * dataset.getCrossSection()/dataset.getTotalEvents());
    }
    else {
      cutObj->setDatasetWeight(1.);
      std::cout << " which is data" << std::endl;
    }
    
    //The name should maybe be customisable?
    TChain * datasetChain = new TChain("TNT/BOOM");

    int startFile = 1;
    if (skipPreviousSkims) startFile = getStartFile(dataset.getName(),cutStageNameVec[cutStage]);

    //there will be a loop here to add all of the files to the chain. Now we're just doing one to test this whole thing works.
    if (skimToUse < 0){
      if (oneFileOnly) datasetChain->Add((dataset.getFolderName()+"OutTree_1.root").c_str());
      else addFilesToChain(datasetChain,dataset.getFolderName(),startFile,dataset.getnFiles());
    }
    else {
      delete datasetChain;
      datasetChain = new TChain("BOOM");
      if (oneFileOnly) datasetChain->Add((skimFolder+dataset.getName()+"/skimTree1.root").c_str());
      else datasetChain->Add((skimFolder+dataset.getName()+"/skimTree*.root").c_str());
    }
      // datasetChain->Add("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/crab_Full2202_ST/160222_223524/0000/OutTree_1.root");

    tWEvent * event = new tWEvent(datasetChain);
    
    
    //If we're making a skim (which is, nominally, the point of this script, though it's probably just gonna become my eventual analysis script) then make the skimming file here.
    TTree * cloneTree;
    if (cutStage > -1){
      cloneTree = datasetChain->CloneTree(0);
      cutObj->setSkimTree(cutStage,cloneTree);
    }

    //This variable is used for saving the tree part way through production if the number of selected events exceeds a certain amount.
    int nSkimFiles = (startFile - 1) / 50.;

    //Begin loop over all events
    int numberSelected = 0;

    //This is now how this is going down. Firstly we work out how many files we're adding.
    //    if (beginFileNumber > 0) 

    do{
      int numberOfEntries = datasetChain->GetEntries();
      std::cout << "Tree to be processed contains " << numberOfEntries << " entries." << std::endl;

      int maxFiles = dataset.getnFiles();
      int upperFile = maxFiles;
      if (skimToUse < 0 && startFile + 49 < maxFiles) upperFile = startFile+49;
      std::cout << std::endl << "Processing files " << startFile << "-" << upperFile << std::endl;
      for ( int evtInd = 0; evtInd < numberOfEntries; evtInd++){
	if (evtInd % 5000 < 0.01) {
	  if (cutStage > -1) std::cout << evtInd << " (" << 100*float(evtInd)/numberOfEntries << "%) Selected: " << numberSelected << " and number in clone tree: " << cloneTree->GetEntries() << " \r";
	  else  std::cout << evtInd << " (" << 100*float(evtInd)/numberOfEntries << "%) Selected: " << numberSelected << " \r";
	  std::cout.flush();
	}
	//Gonna see if the output tree being too big is the reason it's being terminated. The other option is that it's the input tree being too big, which would be much harder to solve.
	// I originally put this after the sleection requirements which obviously does not turn out like I plan it to.
	if (cutStage > -1){
	  if (cloneTree->GetEntries() > 9999){
	    std::cout << std::endl << "Tree contains " << cloneTree->GetEntries() << " events, so we're now saving a skim. This is skim #" << nSkimFiles << std::endl;
	    TFile cloneFile(("skims/"+dataset.getName()+cutStageNameVec[cutStage]+std::to_string(nSkimFiles)+".root").c_str(),"RECREATE");
	    cloneFile.cd();
	    cloneTree->Write();
	    cloneFile.Write();
	    cloneFile.Close();
	    nSkimFiles++;
	    delete cloneTree;
	    cloneTree = datasetChain->CloneTree(0);
	    cutObj->setSkimTree(cloneTree);
	  }
	}
	
	
	event->GetEntry(evtInd);
	//Make the cuts!
	if (!cutObj->makeCuts(event)) continue;
	numberSelected++;
	
      } //Close loop over all events in that one tree.
      if (skimToUse < 0){
	//Load next tree
	startFile+=50;
	addFilesToChain(datasetChain,dataset.getFolderName(),startFile,dataset.getnFiles());
	delete event;
	event = new tWEvent(datasetChain);
      }
    }while(startFile < dataset.getnFiles() && skimToUse < 0);

    std::cout << std::endl; //Add in a line break after the status bar thing.

    //Save the clone trees here
    if (cutStage > -1){
      TFile cloneFile(("skims/"+dataset.getName()+cutStageNameVec[cutStage]+std::to_string(nSkimFiles)+".root").c_str(),"RECREATE");
      cloneFile.cd();
      cloneTree->Write();
      cloneFile.Write();
      cloneFile.Close();
    }

    if (makeCutFlow){
      std::cout << "Cut flow for " << dataset.getName() << std::endl;
      for (int cfInd = 1; cfInd < cutFlow[dataset.getName()]->GetXaxis()->GetNbins()+1; cfInd++){
	std::cout << cutFlowStringList[cfInd-1] << " : " << cutFlow[dataset.getName()]->GetBinContent(cfInd) << std::endl;
	TFile * cutFlowFile = new TFile((plotOutDir + dataset.getName() + "+cutFlow"+std::to_string(startFile) + ".root").c_str(),"RECREATE");
	cutFlowFile->cd();
	cutFlow[dataset.getName()]->Write();
	cutFlowFile->Write();
	cutFlowFile->Close();
	delete cutFlowFile;
      }
      
    }
    //output the generated historgrams into a single root file per dataset for later combination.
    if (plotConf){
      TFile * tempFile = new TFile((plotOutDir + dataset.getName() + "_plots" + std::to_string(startFile) + ".root").c_str(),"RECREATE");
      for (auto const & stageName : cutStageNameVec){
	plotMap[dataset.getName()][stageName]->saveHists(tempFile);
      }
      tempFile->Write();
      tempFile->Close();
      delete tempFile;
    }

  } // Close dataset loop

  //Make the plots if we're doing that
  HistogramPlotter plotObj = HistogramPlotter(legOrder,plotOrder,datasetInfos);
  plotObj.setLabelOne("CMS Preliminary");
  plotObj.setLabelTwo("2.5 fb^{-1} or something");
  plotObj.setPostfix("");
  plotObj.setOutputFolder(plotOutDir);
 
  if (plotConf){
    plotObj.plotHistos(plotMap,true);
  }
  if (makeCutFlow){
    plotObj.makePlot(cutFlow,"cutFlow",cutFlowStringList);
  }
  
  //delete the plots here.
  if (plotConf){
    for (const auto & datasetPlotMap : plotMap){
      for (const auto & plots : datasetPlotMap.second){
	delete plots.second;
      }
    }
  }
} // end main
