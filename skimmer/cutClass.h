
#include "tWEvent.h"
#include <vector> 
#include <iostream>
#include "TH1.h"

class Cuts{

  //Cut variables initialisation here

  //Muon cut
  float muonPtCut_;
  float muonEtaCut_;
  float muonRelIsoCut_;
  //loose muon cuts
  float muonLoosePt_;
  float muonLooseEta_;
  float muonLooseRelIso_;

  unsigned int nMuonsTight_; //This is the number of tight muons to select
  unsigned int nMuonsLoose_; //Number of loose muons to select

  //Electron cuts!
  //Tight! Empty for now, as there are very little electron guidelines thus far for run 2.
  
  //Loose!
  float eleLoosePt_;
  float eleLooseEta_;

  unsigned int nEleTight_;
  unsigned int nEleLoose_;

  //jet variables
  float jetPtCut_;
  float jetEtaCut_;

  unsigned int nJets_;

  float bTagCut_;
  unsigned int nBJets_;

  //Cut flow related variables go here
  bool doCutFlow_;
  TH1F* cutFlowTable_;

  //Cut related private methods
  bool makePVCuts(tWEvent*);
  bool makeTriggerSelection(tWEvent*);
  bool makeLeptonCuts(tWEvent*);
  bool makeElectronCuts(tWEvent*);
  bool makeMuonCuts(tWEvent*);
  bool makeJetCuts(tWEvent*);
  bool makeBCuts(tWEvent*);
  std::vector<int> getTightMuons(tWEvent*);
  std::vector<int> getLooseMuons(tWEvent*);
  std::vector<int> getTightElectrons(tWEvent*);
  std::vector<int> getLooseElectrons(tWEvent*);
  std::vector<int> getJets(tWEvent*);
  std::vector<int> getBJets(tWEvent*);

 public:
  Cuts();
  bool makeCuts(tWEvent*);
  
  //Setters go here
  void setCutFlowHistogram(TH1F* hist){cutFlowTable_ = hist; doCutFlow_ = true;};

  //Set up how many leptons to select here. this is so that the main program can set this.
  void setNTightMuon(int nmuons){nMuonsTight_ = nmuons;};
    
};
