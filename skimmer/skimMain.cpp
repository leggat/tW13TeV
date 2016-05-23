//This code is for skimming over the massive sets of data that are on the IHEP T2 or whatever. Getting a local small skim or something.
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
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
#include <thread>
#include "TThread.h"
#include <mutex>

std::mutex mu;

//Define a load of global variables here.
typedef struct threadArg threadArg;

struct threadArg{
  int threadId;
  Dataset dataset;
};

static const std::vector<std::string> cutStageNameVec = {"lepSel","jetSel","bTag","fullSel"};
bool makeCutFlow = false;
const std::vector<std::string> cutFlowStringList = 
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
std::string skimFolder = "";
bool oneFileOnly = false;
const char * plotOutDir = "plots/";
bool skipPreviousSkims = false;
bool skipPreviousPlots = false;
std::string skimOutDir = "skims/";
char * plotConf = NULL;
int skimToUse = -1;
float integratedLuminosity = 2300.;

int channel = 0;

int cutStage = -1;

int nFilesPerThread = 100;

int nThreadIncr = 5;

bool addFilesToChain(TChain * chain, std::string folderName, std::string fileName, int startFile, int nFiles){
  chain->Reset();
  int j = 0;
  for (int i = startFile; i < startFile+nFilesPerThread; i++){
    if (i > nFiles) break;
    //By checking the stat of the file we make sure that we don't include files that don't actually exist.
    struct stat buffer;
    //    std::cout << folderName+fileName+std::to_string(i)+".root" << std::endl;
    if (stat((folderName+fileName+std::to_string(i)+".root").c_str(), &buffer) != 0) continue;
    chain->Add((folderName+fileName+std::to_string(i)+".root").c_str());
    j++;
  }
  std::cout << "Added " << j << " files to the chain" << std::endl;
  return true;
}

//It seems that I'm vastly changing the theme of this script, and now it's a multithreaded plot making script.
//actually scrap that. This is a multithreaded selection. It can still make the small skims in here, or make plots
//if that's what we're doing. I may change the input method for this script though. Or maybe not, who knows.
void threadedSelection(void * ptr){

  TThread thread;
  thread.Initialize(); 

  threadArg* args = (threadArg*) ptr;
  
  Dataset dataset = args->dataset;

  int threadID = args->threadId;

  TChain * datasetChain;
  
  //Before we start running this, check whether we can skim things and not do it.
  if (skipPreviousSkims && cutStage > -1){
    struct stat buffer;
    if (stat((skimOutDir + dataset.getName()+cutStageNameVec[cutStage]+std::to_string(threadID) + ".root").c_str(), &buffer) == 0) return;
  }
  if (skipPreviousPlots && plotConf){
    struct stat buffer;
    std::cout << (plotOutDir + dataset.getName() + "_plots" + std::to_string(threadID) + ".root") << std::endl;
    if (stat((plotOutDir + dataset.getName() + "_plots" + std::to_string(threadID) + ".root").c_str(), & buffer) == 0) return;
  }

  Cuts * cutObj = new Cuts();

  cutObj->setCutChannel(channel);

  int startFile = threadID * nFilesPerThread + 1;

  mu.lock();
  if (skimToUse < 0){
    datasetChain = new TChain("TNT/BOOM");
    if (oneFileOnly) datasetChain->Add((dataset.getFolderName()+"OutTree_"+std::to_string(startFile)+".root").c_str());
    else addFilesToChain(datasetChain,dataset.getFolderName(),"OutTree_",startFile,dataset.getnFiles());
  }
  else { 
    datasetChain = new TChain("BOOM");
    if (oneFileOnly) datasetChain->Add((skimFolder+dataset.getName()+"/skimTree"+std::to_string(startFile)+".root").c_str());
    else addFilesToChain(datasetChain,skimFolder+dataset.getName(),"/skimTree",startFile,dataset.getnFiles());
  }

  std::map<std::string,Plots*> datasetPlots;
  TH1F* cutFlow = NULL;

  if (makeCutFlow){
    cutFlow = new TH1F(("cutFlowTable"+dataset.getName()+std::to_string(threadID)).c_str(),("cutFlowTable"+dataset.getName()+std::to_string(threadID)).c_str(),cutFlowStringList.size(),0,cutFlowStringList.size());
    cutObj->setCutFlowHistogram(cutFlow);
  }

  if (plotConf){
    for (auto const & stageName : cutStageNameVec){
      datasetPlots[stageName] = new Plots(plotConf,dataset.getName()+"_"+stageName + std::to_string(threadID));
    }
    cutObj->setPlots(datasetPlots);
  }

  //If we're doing skimming, make the clone tree here
  TTree * cloneTree;
  if (cutStage > -1){
    cloneTree = datasetChain->CloneTree(0);
    cutObj->setSkimTree(cutStage,cloneTree);
  }

  //Make the event object
  tWEvent * event = new tWEvent(datasetChain);

  mu.unlock();

  //Next update the datasetweight in cut obj (this is important for filling histograms and the like).
  if (dataset.isMC()){
    std::cout << " which contains " << dataset.getTotalEvents() << " events and a cross section of " << dataset.getCrossSection() << " giving a dataset weight of " << integratedLuminosity * dataset.getCrossSection()/dataset.getTotalEvents() << std::endl;
    cutObj->setDatasetWeight(integratedLuminosity * dataset.getCrossSection()/dataset.getTotalEvents());
    }
  else {
    cutObj->setDatasetWeight(1.);
    std::cout << " which is data" << std::endl;
  }

  std::cout << "number of entries";
  int numberOfEntries = datasetChain->GetEntries();

  std::cout << numberOfEntries <<std::endl;

  int numberSelected = 0;

  //Loop over all the events in the chain
  for (int evtInd = 0; evtInd < numberOfEntries; evtInd++){
    if (evtInd % 5000 < 0.01) {
      if (cutStage > -1) std::cout << evtInd << " (" << 100*float(evtInd)/numberOfEntries << "%) Selected: " << numberSelected << " and number in clone tree: " << cloneTree->GetEntries() << " \r";
      else  std::cout << evtInd << " (" << 100*float(evtInd)/numberOfEntries << "%) Selected: " << numberSelected << " \r";
      std::cout.flush();
    }
    
    event->GetEntry(evtInd);

    //Make the cuts!
    if (!cutObj->makeCuts(event)) continue;
    numberSelected++;
  }//end event loop

  mu.lock();


  //Save and delete all the things at the end of the thread.
  if (cutStage > -1){
    TFile cloneFile((skimOutDir + dataset.getName()+cutStageNameVec[cutStage]+std::to_string(threadID) + ".root").c_str(),"RECREATE");
    cloneFile.cd();
    cloneTree->Write();
    cloneFile.Write();
    cloneFile.Close();
    delete cloneTree;
  }

  if (makeCutFlow){
    TFile * cutFlowFile = new TFile((plotOutDir + dataset.getName() + "_cutFlow"+std::to_string(threadID) + ".root").c_str(),"RECREATE");
    cutFlowFile->cd();
    cutFlow->Write();
    cutFlowFile->Write();
    cutFlowFile->Close();
    delete cutFlowFile;
    delete cutFlow;
  }

  if (plotConf){
    TFile * tempFile = new TFile((plotOutDir + dataset.getName() + "_plots" + std::to_string(threadID) + ".root").c_str(),"RECREATE");
    for (auto const & stageName : cutStageNameVec){
      datasetPlots[stageName]->saveHists(tempFile);
      delete datasetPlots[stageName];
    }
    tempFile->Write();
    tempFile->Close();
    delete tempFile;
  }


  delete cutObj;
  delete event;
  delete datasetChain;
  mu.unlock();
}
		   

int getStartFile(std::string name,std::string stage){
  //
  struct stat buffer;
  int i = 0;
  for (i = 0; i < 50; i++){
    if (stat(("skims/"+name+stage+std::to_string(i)+".root").c_str(), &buffer) != 0) break;
  }
  return i * 50 + 1;
}

void show_usage(std::string name){
  std::cerr << "Usage: " << name << " <options(s)>"
	    << "Options:\n"
 	    <<"\t-h\t--help\t\tShow this message\n"
	    << "\t-s\t--synch\t\tInitialise and use a synch cut flow.\n"
	    << "\t-d\tDATASETCONF\tDataset config file\n"
	    << "\t-m\tCUTSTAGE\tMake a skimmed tree at a defined point in the cuts.\n\t\t\t\t0 - Post lepton selection 1 - Post jet selection. 2 - Final event selecction I guess\n"
	    << "\t-f\t\t\tOnly run over one file in each dataset. This is to speed up testing and so forth.\n"
	    << "\t-p\tPLOTCONF\tPlot config file. Leave blank for no plots.\n"
	    << "\t-o\tPLOTOUTDIR\tThe directory the plots will be written to. Defaults to plots/\n"
	    << "\t-u\tCUTSTAGE\tRun the skimmer over previously made skims. Arguments are the same as for the making.\n"
	    << "\t-a\t\t\tSkip previously finished skims. This is because it keeps crashing for no obvious reason.\n"
	    << "\t-c\tCHANNEL\t\tThe channel to be run over. 0 (default) is di-muon, 1 is single muon. Others to come probably.\n"
	    << "\t-b\tBEGINFILE\tThe file to begin running on. Useful for parallelising processing.\n"
	    << "\t-e\tENDFILE\t\tThe file to end on. Defaults to nFiles if larger than the number of files.\n"
	    << "\t-y\t\t\tSkips a thread if the plot file has already been created. This is, again, to deal with the random termination problems I've been encountering.\n"
	    << "\t-t\tNTHREADS\tNumber of theads to run concurrently.\n"
	    << "\t-b\tNFILESPERTHREAD\tNumber of files to put in each thread.\n"
	    << std::endl;
}

int main(int argc, char* argv[]){


  //Parse command line arguments here!
  int opt;
    char * configFile = NULL;

  //The integrated luminosity of the data being used. 
  //At some point this should become a sum of lumis of the data being used, but for now it is hard-coded because I'm not looking at data yet. Or something.

  while ((opt = getopt(argc,argv,"hsd:m:fp:o:u:ac:yt:b:"))!=-1){
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
    case 'b':
      nFilesPerThread = atoi(optarg);
      break;
    case 't':
      nThreadIncr = atoi(optarg);
      break;
    case 'c':
      channel = atoi(optarg);
      break;
    case 'y':
      skipPreviousPlots = true;
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

  //Change stuff in the cut class depending on what channel we're doing
  switch (channel){
  case 0:
    skimFolder = "skims/";
    break;
  case 1:
    skimFolder = "skims/singMuon/"; //Hopefully it won't later be annoying that I made these hardcoded.
    break;
  default:
    std::cout << "This is not an acceptable channel! Sort your life out!" << std::endl;
    return 0;
  }

 
  //Make the histograms here. It is important to do this before the main dataset loop because some datasets fill the same histrograms (i.e. single top etc).
  //When I end up running over multiple channels or systematics, this will likely need to be expanded.
  std::map<std::string,datasetInfo> datasetInfos;
  if (plotConf){
    for (auto const & dataset: *datasets){
      datasetInfos[dataset.getName()] = datasetInfo();
      datasetInfos[dataset.getName()].colour = dataset.getColour();
      datasetInfos[dataset.getName()].legLabel = dataset.getLegName();
      datasetInfos[dataset.getName()].legType = 'f';
    }
  }

  //Loop over the datasets
  //TODO change this to not just loop over one file!
  for (auto const & dataset : *datasets){

    std::cout << "Processing dataset " << dataset.getName();
    //Do some initialisations of stuff on a per-dataset basis here.
    
    //calculated how many threads we're going to run.
    int nThreads = std::ceil(dataset.getnFiles() / (float)nFilesPerThread);

    //    TThread* t[nThreads];
    std::thread t[nThreads];

    std::cout << nThreads << " number of threads" << std::endl;

    //For some reason now it seg faults for more than 10 threads, so we'll limit the number of active threads to 10.
    int beginThread = 0;
    int endThread = nThreads;
    if (nThreads > nThreadIncr) endThread = nThreadIncr;
    
    bool notFinished = true;

    do {
      if (endThread == nThreads) notFinished = false;
      //Now launch them! Isn't this exciting.
      for (int threadInd = beginThread; threadInd < endThread; threadInd++) {
      
      

	threadArg * args = new threadArg {threadInd, dataset};
	//      args[threadInd].threadId = threadInd;
	//args[threadInd].dataset = dataset;


	//      t[threadInd] = new TThread(std::to_string(threadInd).c_str(),threadedSelection,(void*)&tempArgs);
	t[threadInd] = std::thread(threadedSelection,(void*)args);
	//      t[threadInd].join();
	//t[threadInd]->Run();

      }

      for (int threadInd = beginThread; threadInd < endThread; threadInd++) {
	//      t[threadInd]->Join();
	t[threadInd].join();
      }
      beginThread += nThreadIncr;
      endThread += nThreadIncr;
      if (endThread > nThreads) endThread = nThreads;
    } while (notFinished);


    //    for (int threadInd = 0; threadInd < nThreads; threadInd++) {
    //  t[threadInd]->Delete();
    // }

    //    for (int threadInd = 0; threadInd < nThreads; threadInd++) {
    // delete t[threadInd];
    //

    std::cout << std::endl;

  } // Close dataset loop
  
  //This doesn't make sense anymore. Don't want to delete it though ,coz it might be useful.
  /*
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
  }*/
} // end main
