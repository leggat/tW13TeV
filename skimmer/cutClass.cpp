#include "cutClass.h"
#include <vector>
#include <math.h>

Cuts::Cuts():
  //Do any initialisations here

  //Initialise muon cuts
  muonPtCut_(20.),
  muonEtaCut_(2.4),
  muonRelIsoCut_(0.25),

  //Loose muon cuts
  muonLoosePt_(10.),
  muonLooseEta_(2.5),
  muonLooseRelIso_(0.25),
  
  //Number of muons to select
  nMuonsTight_(2),
  nMuonsLoose_(2), //The number of loose muons to select. Probably should be the same as tight muons.

  //Loose ele initialisation
  eleLoosePt_(20.),
  eleLooseEta_(2.5),
  
  nEleTight_(0),
  nEleLoose_(0),

  //Initialise jet cuts here
  jetPtCut_(50.),
  jetEtaCut_(4.7),

  nJets_(1),

  //b-jet variables
  bTagCut_(0.935),

  nBJets_(1),

  skimStage_(-1),
  skimTree_(NULL),

  //Set the datasetWeight. Defaults to one, the weight we want for data.
  datasetWeight_(1.),
  eventWeight_(1.), //Setting this up here because I'm gonna need it at some point and it would be annoying to go back and put it everywhere.

  //initialise cut flow things here. Don't do cutflows by default.
  doCutFlow_(false),
  cutFlowTable_(NULL),
  cfInd_(0.) //Used to track which bin in the cut flow we should be filling. This makes it so that if I add in extra places to check cut flow numbers I won't have to go through hard coding each bin number.
{
  //Will put in a load of definitions heres.
}

//The main cut method. This can be called once on an event of tWEvent class 
bool Cuts::makeCuts(tWEvent* event){

  if (doCutFlow_) {
    cfInd_ = 0.;
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_); //Fill cut flow table with pre-selection info
    cfInd_++;
  }

  //Make trigger selection
  if (!makeTriggerSelection(event)) return false;

  if (doCutFlow_){
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);
    cfInd_++;
  }

  //Make primary vertex selections
  if (!makePVCuts(event)) return false;

  if (doCutFlow_){
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_); //Post trigger selection
    cfInd_++;
  }

  //Make lepton cuts
  if (!makeLeptonCuts(event)) return false;

  //If skim stage is post lepton selection, fill the tree here.
  if (skimStage_ == 0) skimTree_->Fill();
  
  if (!makeJetCuts(event)) return false;
  
  if(skimStage_ == 1) skimTree_->Fill(); //Fill clone tree if this is the stage we want.
  if (doCutFlow_){
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);
    cfInd_++;
  }
  
  if (!makeBCuts(event)) return false;

  if (doCutFlow_){
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);
    cfInd_++;
  }

  if (!makeMETCuts(event)) return false; //Currently placeholder.

  if (skimStage_ == 2) skimTree_->Fill(); //Fill clone tree if selection stage is set to after everything.

  if (doCutFlow_) {
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);
    cfInd_++;
  }

  return true;

}
//end makeCuts()

//Any PV cuts are applied here. Pretty sure these are all done at ntuple level, but never mind.
bool Cuts::makePVCuts(tWEvent * event){
  
  bool foundPV = false;
  for (unsigned int i = 0; i < event->pvertex_ndof->size(); i++){
    if (event->pvertex_ndof->at(i) < 4.) continue;
    if (fabs(event->pvertex_z->at(i)) > 24.) continue;
    if ( event->pvertex_dxy->at(i) > 2.) continue;
    foundPV = true;
  }

  return foundPV;
}
//end makePVCuts()

//Make trigger cuts here
bool Cuts::makeTriggerSelection(tWEvent * event){
  //  std::cout << event->HLT_IsoMu18 << std::endl;
  //  if (!event->HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ) return false;
  if (!event->HLT_IsoMu18 && !event->HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ) return false;
  //  if (event->H
  return true;
}
//end trigger cuts

//Make any lepton cuts within this method
bool Cuts::makeLeptonCuts(tWEvent * event){

  if (!makeMuonCuts(event)) return false;
  if (!makeElectronCuts(event)) return false;

  //If dilepton channel, check leptons are opposite sign
  if (nMuonsTight_ + nEleTight_ == 2){
    if ( nMuonsTight_ == 1) {
      if (event->Muon_charge->at(event->muonIndexTight[0]) * event->patElectron_charge->at(event->electronIndexTight[0]) > 0.) return false;
    }
    else if (nMuonsTight_ ==2) {
      if (event->Muon_charge->at(event->muonIndexTight[0]) * event->Muon_charge->at(event->muonIndexTight[1]) > 0.) return false;
    }
    else{
      if (event->patElectron_charge->at(event->electronIndexTight[0]) * event->patElectron_charge->at(event->electronIndexTight[1]) > 0.) return false; 
    }
  }

  //Here is where any lepton mass cuts should go.

  if (doCutFlow_) {
    cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);
    cfInd_++;
  }

  return true;

}
//end makeLeptonCuts()

//make muon cuts
bool Cuts::makeMuonCuts(tWEvent * event){
  event->muonIndexTight = getTightMuons(event);
  event->muonIndexLoose = getLooseMuons(event);
  if (event->muonIndexTight.size() != nMuonsTight_) return false;
  if (doCutFlow_) {cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);cfInd_++;}
  if (event->muonIndexLoose.size() != nMuonsLoose_) return false;
  if (doCutFlow_) {cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_);cfInd_++;}
  return true;
}

//Get a list of the indices of tight muons in the event
std::vector<int> Cuts::getTightMuons(tWEvent* event){
  
  std::vector<int> muonInd;

  //Loop over muon candidates and add those that pass requirement into the list.
  for (unsigned int i = 0; i < event->Muon_pt->size(); i++){
    if (!(event->Muon_isGlobal->at(i) && event->Muon_isTrackerMuon->at(i))) continue;
    if (event->Muon_pt->at(i) < muonPtCut_) continue;
    if (fabs(event->Muon_eta->at(i)) > muonEtaCut_) continue;
    if (event->Muon_relIsoDeltaBetaR04->at(i) > muonRelIsoCut_) continue;
    if (!event->Muon_tight->at(i)) continue;
    muonInd.push_back(i);
  }
  return muonInd;
}
//end get tight muons

//Get a list of the index of loose muons.
std::vector<int> Cuts::getLooseMuons(tWEvent* event){
  
  std::vector<int> muonInd;

  for (unsigned int i = 0; i < event->Muon_pt->size(); i++){
    if (!(event->Muon_isGlobal->at(i) || event->Muon_isTrackerMuon->at(i))) continue;
    if (event->Muon_pt->at(i) < muonLoosePt_) continue;
    if (fabs(event->Muon_eta->at(i)) > muonLooseEta_) continue;
    if (!event->Muon_loose->at(i)) continue;
    muonInd.push_back(i);
  }
  return muonInd;
}

//do any electron related cuts in this method
bool Cuts::makeElectronCuts(tWEvent* event){
  //Put these back in when there are electron selections to be made.
  //event->electronIndexTight = getTightElectrons(event);
  //if (event->electronIndexTight.size() != nEleTight_) return false;
  event->electronIndexLoose = getLooseElectrons(event);
  if (event->electronIndexLoose.size() != nEleLoose_) return false;
  if (doCutFlow_){ cutFlowTable_->Fill(cfInd_,datasetWeight_*eventWeight_); cfInd_++;}
  return true;

}

//Get a list of tight electrons. For now this does nothing and isn't actually called anywhere.
std::vector<int> Cuts::getTightElectrons(tWEvent* event){
  std::vector<int> eleInd;
  return eleInd;
}
//End get tight electrons

std::vector<int> Cuts::getLooseElectrons(tWEvent* event){
  std::vector<int> eleInd;
  for (unsigned int i = 0; i < event->patElectron_pt->size(); i++){
    if (event->patElectron_pt->at(i) < eleLoosePt_) continue;
    if (fabs(event->patElectron_eta->at(i)) > eleLooseEta_) continue;
    if (!event->patElectron_isPassVeto->at(i)) continue;
    eleInd.push_back(i);
  }
  return eleInd;
}

//Make jet cuts here
bool Cuts::makeJetCuts(tWEvent* event){
  event->jetIndex = getJets(event);
  if (event->jetIndex.size() != nJets_) return false;
  return true;
}

//Return a list of the index of selected jets
std::vector<int> Cuts::getJets(tWEvent* event){
  std::vector<int> jetInd;

  for (unsigned int i = 0; i < event->Jet_pt->size(); i++){
    if (event->Jet_pt->at(i) < jetPtCut_) continue;
    if (fabs(event->Jet_eta->at(i)) > jetEtaCut_) continue;
    //Do jet ID.
    if (!((fabs(event->Jet_eta->at(i)) < 3.) && (event->Jet_neutralHadEnergyFraction->at(i) < 0.99 && event->Jet_neutralEmEnergyFraction->at(i) < 0.99 && event->Jet_numberOfConstituents->at(i) > 1))) continue;
    if (!((fabs(event->Jet_eta->at(i)) < 2.4) && (event->Jet_chargedHadronEnergyFraction->at(i) > 0. && event->Jet_chargedMultiplicity->at(i) > 0. && event->Jet_chargedEmEnergyFraction->at(i) < 0.99))) continue;
    if ((fabs(event->Jet_eta->at(i)) > 3.) && !(event->Jet_neutralEmEnergyFraction->at(i) < 0.9 && (event->Jet_numberOfConstituents->at(i) - event->Jet_chargedMultiplicity->at(i)) > 10)) continue;
    jetInd.push_back(i);
  }

  return jetInd;
}

//Let's do some b-jet cuts!
bool Cuts::makeBCuts(tWEvent* event){
  event->bTagIndex = getBJets(event);
  if (event->bTagIndex.size() != nBJets_) return false;
  return true;
}

//return a list of the indices of the b jets.
std::vector<int> Cuts::getBJets(tWEvent* event){
  std::vector<int> bJetInds;
  for (unsigned int i = 0; i < event->jetIndex.size(); i++){
    if (event->Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags->at(event->jetIndex[i]) < bTagCut_) continue;
    bJetInds.push_back(event->jetIndex[i]);
  }
  return bJetInds;
}

//Placeholder for now. No cuts applied.
bool Cuts::makeMETCuts(tWEvent*){
  return true;
}
