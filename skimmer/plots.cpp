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
    plotsVec[i].hist = new TH1F((plotsVec[i].name +"_" + postfix).c_str(), (plotsVec[i].name +"_" + postfix).c_str(), nBinsT,xMinT,xMaxT);
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
    if (plotsVec[i].name == "lep1Eta"){
      plotsVec[i].hist->Fill(event->lepton1.Eta(),weight);
    }
    if (plotsVec[i].name == "lep1Phi"){
      plotsVec[i].hist->Fill(event->lepton1.Phi(),weight);
    }
    if (plotsVec[i].name == "lep1RelIso"){
      plotsVec[i].hist->Fill(event->lepton1RelIso,weight);
    }
    if (plotsVec[i].name == "lep2Pt"){
      plotsVec[i].hist->Fill(event->lepton2.Pt(),weight);
    }
    if (plotsVec[i].name == "lep2Eta"){
      plotsVec[i].hist->Fill(event->lepton2.Eta(),weight);
    }
    if (plotsVec[i].name == "lep2Phi"){
      plotsVec[i].hist->Fill(event->lepton2.Phi(),weight);
    }
    if (plotsVec[i].name == "lep2RelIso"){
      plotsVec[i].hist->Fill(event->lepton2RelIso,weight);
    }
    if (plotsVec[i].name == "nJets" && cutStage > 0){
      plotsVec[i].hist->Fill(event->jetIndex.size(),weight);
    }
    if (plotsVec[i].name == "jet1Pt" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_pt->at(event->jetIndex[0]),weight);
    }
    if (plotsVec[i].name == "jet1Eta" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_eta->at(event->jetIndex[0]),weight);
    }
    if (plotsVec[i].name == "jet1Tag" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags->at(event->jetIndex[0]),weight);
    }
    if (plotsVec[i].name == "jet2Pt" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_pt->at(event->jetIndex[1]),weight);
    }
    if (plotsVec[i].name == "jet2Eta" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_eta->at(event->jetIndex[1]),weight);
    }
    if (plotsVec[i].name == "jet2Tag" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags->at(event->jetIndex[1]),weight);
    }
    if (plotsVec[i].name == "jet3Pt" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_pt->at(event->jetIndex[2]),weight);
    }
    if (plotsVec[i].name == "jet3Eta" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_eta->at(event->jetIndex[2]),weight);
    }
    if (plotsVec[i].name == "jet3Tag" && cutStage > 0 && event->jetIndex.size() > 0){
      plotsVec[i].hist->Fill(event->Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags->at(event->jetIndex[2]),weight);
    }
    if (plotsVec[i].name == "nBJets" && cutStage > 1){
      plotsVec[i].hist->Fill(event->bTagIndex.size(),weight);
    }
    if (plotsVec[i].name == "met"){
      plotsVec[i].hist->Fill(event->Met_type1PF_pt,weight);
    }
    if (plotsVec[i].name == "metPx"){
      plotsVec[i].hist->Fill(event->Met_type1PF_px,weight);
    }
    if (plotsVec[i].name == "metPy"){
      plotsVec[i].hist->Fill(event->Met_type1PF_py,weight);
    }
    if (plotsVec[i].name == "metPz"){
      plotsVec[i].hist->Fill(event->Met_type1PF_pz,weight);
    }
    if (plotsVec[i].name == "metPhi"){
      plotsVec[i].hist->Fill(event->Met_type1PF_phi,weight);
    }
    if (plotsVec[i].name == "dileptonMass"){
      plotsVec[i].hist->Fill((event->lepton1+event->lepton2).M(),weight);
    }
  }
}


//Put all of the plots we've generated into a single file.
void Plots::saveHists(TFile * saveFile){
  saveFile->cd();
  for (unsigned int i = 0; i < plotsVec.size(); i++){
    plotsVec[i].hist->Write();
  }
}
