//A class that creates, fills and then saves the plots we want.

#include "plots.h"
#include <cmath>

Plots::Plots(std::string confName, std::string postfix ){

  libconfig::Config config;
  try {
    config.readFile(confName.c_str());
  }
  catch ( const libconfig::FileIOException &exep){
    std::cerr << "Error opening plot configuration file" << std::endl;
    return;
  }
  catch (const libconfig::ParseException &e){
    std::cerr << "Parse error at " << e.getFile() << ":" << e.getLine() << " - " << e.getError() << std::endl;
    return;
  }
  
  libconfig::Setting &root = config.getRoot();

  libconfig::Setting& plots = root["plots"];

  std::string name, xAxisLabel;
  float xMinT,xMaxT;
  int nBinsT;
  for (int i = 0; i < plots.getLength(); i++){
    const libconfig::Setting &pSet = plots[i];
    pSet.lookupValue("name",name);
    pSet.lookupValue("xAxisLabel",xAxisLabel);
    pSet.lookupValue("xMax",xMaxT);
    pSet.lookupValue("xMin",xMinT);
    pSet.lookupValue("nBins",nBinsT);
    plotsVec.push_back(plot());
    plotsVec[i].name = name;
    plotsVec[i].xAxisLabel = xAxisLabel;
    plotsVec[i].hist = new TH1F((plotsVec[i].name + postfix).c_str(), (plotsVec[i].name + postfix).c_str(), nBinsT,xMinT,xMaxT);
  }

}//End constructor

Plots::~Plots(){
  for (unsigned int i = 0; i < plotsVec.size(); i++){
    delete plotsVec[i].hist;
  }
}
//end destructor

void Plots::fillAllPlots(tWEvent* event, float weight, int cutStage){
  for (unsigned int i = 0; i < plotsVec.size(); i++){
    if (plotsVec[i].name == "lep1Pt"){
      plotsVec[i].hist->Fill(event->lepton1.Pt(),weight);
    }
    if (plotsVec[i].name == "jet1Pt"){
      plotsVec[i].hist->Fill(event->lepton1.Pt(),weight);
    }
  }
}
