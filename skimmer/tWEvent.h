//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Mar  9 21:42:36 2016 by ROOT version 5.34/18
// from TTree BOOM/BOOM
// found on file: /publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/crab_Full2202_DY/160222_223837/0000/OutTree_1.root
//////////////////////////////////////////////////////////

#ifndef tWEvent_h
#define tWEvent_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class tWEvent {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   std::vector<double>  *Gen_pt;
   std::vector<double>  *Gen_eta;
   std::vector<double>  *Gen_phi;
   std::vector<double>  *Gen_p;
   std::vector<double>  *Gen_energy;
   std::vector<double>  *Gen_charge;
   std::vector<double>  *Gen_vx;
   std::vector<double>  *Gen_vy;
   std::vector<double>  *Gen_vz;
   std::vector<double>  *Gen_status;
   std::vector<double>  *Gen_pdg_id;
   std::vector<double>  *Gen_motherpdg_id;
   std::vector<double>  *Gen_numDaught;
   std::vector<double>  *Gen_numMother;
   std::vector<int>     *Gen_BmotherIndex;
   std::vector<int>     *Gen_BmotherIndices;
   std::vector<int>     *Gen_BdaughtIndices;
   Int_t           HiggsDecay;
   Int_t           ttHFCategory;
   Int_t           EVENT_event;
   Int_t           EVENT_run;
   Int_t           EVENT_lumiBlock;
   Double_t        EVENT_genWeight;
   Double_t        EVENT_rhopog;
   Double_t        EVENT_rhotth;
   Double_t        EVENT_fixedGridRhoFastjetCentral;
   Double_t        EVENT_fixedGridRhoFastjetCentralChargedPileUp;
   Double_t        EVENT_fixedGridRhoFastjetCentralNeutral;
   Int_t           Flag_HBHENoiseFilter;
   Int_t           Flag_HBHENoiseIsoFilter;
   Int_t           Flag_CSCTightHaloFilter;
   Int_t           Flag_CSCTightHaloTrkMuUnvetoFilter;
   Int_t           Flag_CSCTightHalo2015Filter;
   Int_t           Flag_HcalStripHaloFilter;
   Int_t           Flag_hcalLaserEventFilter;
   Int_t           Flag_EcalDeadCellTriggerPrimitiveFilter;
   Int_t           Flag_EcalDeadCellBoundaryEnergyFilter;
   Int_t           Flag_goodVertices;
   Int_t           Flag_eeBadScFilter;
   Int_t           Flag_ecalLaserCorrFilter;
   Int_t           Flag_trkPOGFilters;
   Int_t           Flag_chargedHadronTrackResolutionFilter;
   Int_t           Flag_muonBadTrackFilter;
   Int_t           Flag_trkPOG_manystripclus53X;
   Int_t           Flag_trkPOG_toomanystripclus53X;
   Int_t           Flag_trkPOG_logErrorTooManyClusters;
   Int_t           Flag_METFilters;
   Int_t           HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
   Int_t           HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;
   Int_t           HLT_IsoMu20;
   Int_t           HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_Ele105_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_Ele27_eta2p1_WP75_Gsf;
   Int_t           HLT_Ele27_WP85_Gsf;
   Int_t           HLT_Ele27_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Mu45_eta2p1;
   Int_t           HLT_Mu50;
   Int_t           HLT_IsoMu17_eta2p1;
   Int_t           HLT_IsoMu24_eta2p1;
   Int_t           HLT_IsoMu18;
   Int_t           HLT_Ele23_WPLoose_Gsf;
   Int_t           HLT_Ele23_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_IsoTkMu20;
   Int_t           HLT_DiMu9_Ele9_CaloIdL_TrackIdL;
   Int_t           HLT_Mu8_DiEle12_CaloIdL_TrackIdL;
   Int_t           HLT_TripleMu_12_10_5;
   Int_t           HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
   Int_t           HLT_DoubleEle33_CaloIdL_GsfTrkIdVL;
   Int_t           TTHbb_SL;
   Int_t           TTHbb_DL;
   Int_t           TTHLep_2Mu;
   Int_t           TTHLep_2Ele;
   Int_t           TTHLep_MuEle;
   Int_t           TTHLep_3L4L;
   Int_t           pvertex_notempty;
   Int_t           nBestVtx;
   Int_t           npuVertices;
   Double_t        trueInteractions;
   Int_t           ootnpuVertices;
   Int_t           npuVerticesm1;
   Int_t           npuVerticesp1;
   std::vector<double>  *pvertex_ndof;
   std::vector<double>  *pvertex_dxy;
   std::vector<double>  *pvertex_x;
   std::vector<double>  *pvertex_y;
   std::vector<double>  *pvertex_z;
   std::vector<double>  *pvertex_xError;
   std::vector<double>  *pvertex_yError;
   std::vector<double>  *pvertex_zError;
   std::vector<double>  *beamSpot_x0;
   std::vector<double>  *beamSpot_y0;
   std::vector<double>  *beamSpot_z0;
   std::vector<double>  *beamSpot_xWidth;
   std::vector<double>  *beamSpot_yWidth;
   std::vector<double>  *Muon_pt;
   std::vector<double>  *Muon_eta;
   std::vector<double>  *Muon_phi;
   std::vector<double>  *Muon_energy;
   std::vector<double>  *Muon_px;
   std::vector<double>  *Muon_py;
   std::vector<double>  *Muon_pz;
   std::vector<double>  *Muon_p;
   std::vector<double>  *Muon_dB;
   std::vector<double>  *Muon_pt_it;
   std::vector<double>  *Muon_ptErr_it;
   std::vector<double>  *Muon_pTErrOVpT_it;
   std::vector<double>  *Muon_pt_bt;
   std::vector<double>  *Muon_ptErr_bt;
   std::vector<double>  *Muon_pTErrOVpT_bt;
   std::vector<double>  *Muon_pt_tunePbt;
   std::vector<double>  *Muon_charge;
   std::vector<int>     *Muon_soft;
   std::vector<int>     *Muon_loose;
   std::vector<int>     *Muon_medium;
   std::vector<int>     *Muon_tight;
   std::vector<int>     *Muon_isHighPt;
   std::vector<int>     *Muon_POGisGood;
   std::vector<int>     *Muon_pdgId;
   std::vector<int>     *Muon_pf;
   std::vector<int>     *Muon_isGlobal;
   std::vector<int>     *Muon_isTrackerMuon;
   std::vector<int>     *Muon_tunePBestTrackType;
   std::vector<double>  *Muon_isoR04Charged;
   std::vector<double>  *Muon_isoR04NeutralHadron;
   std::vector<double>  *Muon_isoR04Photon;
   std::vector<double>  *Muon_isoR04PU;
   std::vector<double>  *Muon_relIsoDeltaBetaR04;
   std::vector<double>  *Muon_isoR04CharParPt;
   std::vector<double>  *Muon_isoR03Charged;
   std::vector<double>  *Muon_isoR03NeutralHadron;
   std::vector<double>  *Muon_isoR03Photon;
   std::vector<double>  *Muon_isoR03PU;
   std::vector<double>  *Muon_relIsoDeltaBetaR03;
   std::vector<double>  *Muon_isoR03CharParPt;
   std::vector<double>  *Muon_trackIso;
   std::vector<double>  *Muon_TrackerIso;
   std::vector<double>  *Muon_ecalIso;
   std::vector<double>  *Muon_hcalIso;
   std::vector<double>  *Muon_caloIso;
   std::vector<double>  *Muon_isoSum;
   std::vector<double>  *Muon_pfEcalEnergy;
   std::vector<double>  *Muon_chi2;
   std::vector<double>  *Muon_chi2LocalPosition;
   std::vector<double>  *Muon_matchedStat;
   std::vector<double>  *Muon_validHits;
   std::vector<double>  *Muon_validHitsInner;
   std::vector<double>  *Muon_TLayers;
   std::vector<double>  *Muon_ndof;
   std::vector<double>  *Muon_validFraction;
   std::vector<double>  *Muon_pixelLayersWithMeasurement;
   std::vector<double>  *Muon_qualityhighPurity;
   std::vector<double>  *Muon_trkKink;
   std::vector<double>  *Muon_segmentCompatibility;
   std::vector<double>  *Muon_dxy_pv;
   std::vector<double>  *Muon_dz_pv;
   std::vector<double>  *Muon_dz_bs;
   std::vector<double>  *Muon_dxy_bs;
   std::vector<double>  *Muon_dzError;
   std::vector<double>  *Muon_dxyError;
   std::vector<double>  *Muon_vtx;
   std::vector<double>  *Muon_vty;
   std::vector<double>  *Muon_vtz;
   std::vector<double>  *Muon_miniIsoRel;
   std::vector<double>  *Muon_miniIsoCh;
   std::vector<double>  *Muon_miniIsoNeu;
   std::vector<double>  *Muon_miniIsoPUsub;
   std::vector<double>  *Muon_jetdr;
   std::vector<double>  *Muon_jetpt;
   std::vector<double>  *Muon_jetptratio;
   std::vector<double>  *Muon_jetcsv;
   std::vector<double>  *Muon_ptrel;
   std::vector<double>  *Muon_IP3Dsig_it;
   std::vector<double>  *Muon_pvass;
   std::vector<double>  *Muon_etarel;
   std::vector<double>  *Muon_ptOVen;
   std::vector<double>  *Muon_mujet_pfJetProbabilityBJetTag;
   std::vector<double>  *Muon_mujet_pfCombinedMVABJetTags;
   std::vector<double>  *Muon_mujet_qgl;
   std::vector<double>  *Muon_mumass;
   std::vector<double>  *Muon_mujet_mass;
   std::vector<double>  *Muon_mujet_Wmass;
   std::vector<double>  *Muon_mujet_Topmass;
   std::vector<double>  *Muon_mujet_WTopmass;
   std::vector<double>  *Muon_IP3D_val;
   std::vector<double>  *Muon_IP3D_err;
   std::vector<double>  *Muon_IP3D_sig;
   std::vector<double>  *Muon_IP2D_val;
   std::vector<double>  *Muon_IP2D_err;
   std::vector<double>  *Muon_IP2D_sig;
   std::vector<double>  *Muon_sIP3D_val;
   std::vector<double>  *Muon_sIP3D_err;
   std::vector<double>  *Muon_sIP3D_sig;
   std::vector<double>  *Muon_sIP2D_val;
   std::vector<double>  *Muon_sIP2D_err;
   std::vector<double>  *Muon_sIP2D_sig;
   std::vector<double>  *Muon_IP1D_val;
   std::vector<double>  *Muon_IP1D_err;
   std::vector<double>  *Muon_IP1D_sig;
   std::vector<double>  *Muon_sIP1D_val;
   std::vector<double>  *Muon_sIP1D_err;
   std::vector<double>  *Muon_sIP1D_sig;
   std::vector<double>  *Muon_lepjetMaxIP3D_val;
   std::vector<double>  *Muon_lepjetMaxIP3D_sig;
   std::vector<double>  *Muon_lepjetMaxsIP3D_val;
   std::vector<double>  *Muon_lepjetMaxsIP3D_sig;
   std::vector<double>  *Muon_lepjetMaxIP2D_val;
   std::vector<double>  *Muon_lepjetMaxIP2D_sig;
   std::vector<double>  *Muon_lepjetMaxsIP2D_val;
   std::vector<double>  *Muon_lepjetMaxsIP2D_sig;
   std::vector<double>  *Muon_lepjetMaxIP1D_val;
   std::vector<double>  *Muon_lepjetMaxIP1D_sig;
   std::vector<double>  *Muon_lepjetMaxsIP1D_val;
   std::vector<double>  *Muon_lepjetMaxsIP1D_sig;
   std::vector<double>  *Muon_lepjetAvIP3D_val;
   std::vector<double>  *Muon_lepjetAvIP3D_sig;
   std::vector<double>  *Muon_lepjetAvsIP3D_val;
   std::vector<double>  *Muon_lepjetAvsIP3D_sig;
   std::vector<double>  *Muon_lepjetAvIP2D_val;
   std::vector<double>  *Muon_lepjetAvIP2D_sig;
   std::vector<double>  *Muon_lepjetAvsIP2D_val;
   std::vector<double>  *Muon_lepjetAvsIP2D_sig;
   std::vector<double>  *Muon_lepjetAvIP1D_val;
   std::vector<double>  *Muon_lepjetAvIP1D_sig;
   std::vector<double>  *Muon_lepjetAvsIP1D_val;
   std::vector<double>  *Muon_lepjetAvsIP1D_sig;
   std::vector<double>  *Muon_lepjetchtrks;
   std::vector<double>  *Muon_lepjetpvchtrks;
   std::vector<double>  *Muon_lepjetnonpvchtrks;
   std::vector<double>  *Muon_lepjetndaus;
   std::vector<double>  *Muon_lepjetpvchi2;
   std::vector<double>  *Muon_lepjetnumno2trk;
   std::vector<double>  *Muon_gen_pt;
   std::vector<double>  *Muon_gen_eta;
   std::vector<double>  *Muon_gen_phi;
   std::vector<double>  *Muon_gen_en;
   std::vector<int>     *Muon_gen_pdgId;
   std::vector<int>     *Muon_gen_isPromptFinalState;
   std::vector<int>     *Muon_gen_isDirectPromptTauDecayProductFinalState;
   std::vector<double>  *patElectron_pt;
   std::vector<double>  *patElectron_eta;
   std::vector<double>  *patElectron_phi;
   std::vector<double>  *patElectron_energy;
   std::vector<double>  *patElectron_px;
   std::vector<double>  *patElectron_py;
   std::vector<double>  *patElectron_pz;
   std::vector<double>  *patElectron_p;
   std::vector<double>  *patElectron_Et;
   std::vector<double>  *patElectron_SCeta;
   std::vector<double>  *patElectron_inCrack;
   std::vector<double>  *patElectron_charge;
   std::vector<int>     *patElectron_isPassVeto;
   std::vector<int>     *patElectron_isPassLoose;
   std::vector<int>     *patElectron_isPassMedium;
   std::vector<int>     *patElectron_isPassTight;
   std::vector<int>     *patElectron_isPassHEEPId;
   std::vector<int>     *patElectron_isPassMvatrig;
   std::vector<int>     *patElectron_isPassMvanontrig;
   std::vector<int>     *patElectron_isPassMvatrigwp90;
   std::vector<int>     *patElectron_isPassMvanontrigwp90;
   std::vector<int>     *patElectron_pdgId;
   std::vector<int>     *patElectron_isEcalDriven;
   std::vector<float>   *patElectron_mvaValue_nonTrig;
   std::vector<float>   *patElectron_mvaCategory_nonTrig;
   std::vector<float>   *patElectron_mvaValue_Trig;
   std::vector<float>   *patElectron_mvaCategory_Trig;
   std::vector<double>  *patElectron_isoChargedHadrons;
   std::vector<double>  *patElectron_isoNeutralHadrons;
   std::vector<double>  *patElectron_isoPhotons;
   std::vector<double>  *patElectron_isoPU;
   std::vector<double>  *patElectron_relIsoDeltaBeta;
   std::vector<double>  *patElectron_relIsoRhoEA;
   std::vector<double>  *patElectron_dr03EcalRecHitSumEt;
   std::vector<double>  *patElectron_dr03HcalDepth1TowerSumEt;
   std::vector<double>  *patElectron_isolPtTracks;
   std::vector<double>  *patElectron_ecalPFClusterIso;
   std::vector<double>  *patElectron_hcalPFClusterIso;
   std::vector<double>  *patElectron_dEtaIn;
   std::vector<double>  *patElectron_dPhiIn;
   std::vector<double>  *patElectron_full5x5_sigmaIetaIeta;
   std::vector<double>  *patElectron_full5x5_e2x5Max;
   std::vector<double>  *patElectron_full5x5_e5x5;
   std::vector<double>  *patElectron_full5x5_e1x5;
   std::vector<double>  *patElectron_hOverE;
   std::vector<double>  *patElectron_ooEmooP;
   std::vector<double>  *patElectron_passConversionVeto;
   std::vector<double>  *patElectron_expectedMissingInnerHits;
   std::vector<double>  *patElectron_gsfTrack_ndof;
   std::vector<double>  *patElectron_gsfTrack_normChi2;
   std::vector<double>  *patElectron_gsfTrack_dz_pv;
   std::vector<double>  *patElectron_gsfTrack_dxy_pv;
   std::vector<double>  *patElectron_d0;
   std::vector<double>  *patElectron_dzError;
   std::vector<double>  *patElectron_dxyError;
   std::vector<double>  *patElectron_gsfTrack_vtx;
   std::vector<double>  *patElectron_gsfTrack_vty;
   std::vector<double>  *patElectron_gsfTrack_vtz;
   std::vector<double>  *patElectron_miniIsoRel;
   std::vector<double>  *patElectron_miniIsoCh;
   std::vector<double>  *patElectron_miniIsoNeu;
   std::vector<double>  *patElectron_miniIsoPUsub;
   std::vector<double>  *patElectron_jetdr;
   std::vector<double>  *patElectron_jetpt;
   std::vector<double>  *patElectron_jetptratio;
   std::vector<double>  *patElectron_jetcsv;
   std::vector<double>  *patElectron_ptrel;
   std::vector<double>  *patElectron_IP3Dsig;
   std::vector<double>  *patElectron_eleMVASpring15NonTrig25ns;
   std::vector<double>  *patElectron_eleMVASpring15NonTrig25ns_VL;
   std::vector<double>  *patElectron_pvass;
   std::vector<double>  *patElectron_etarel;
   std::vector<double>  *patElectron_ptOVen;
   std::vector<double>  *patElectron_elejet_pfJetProbabilityBJetTag;
   std::vector<double>  *patElectron_elejet_pfCombinedMVABJetTags;
   std::vector<double>  *patElectron_elejet_qgl;
   std::vector<double>  *patElectron_elemass;
   std::vector<double>  *patElectron_elejet_mass;
   std::vector<double>  *patElectron_elejet_Wmass;
   std::vector<double>  *patElectron_elejet_Topmass;
   std::vector<double>  *patElectron_elejet_WTopmass;
   std::vector<double>  *patElectron_IP3D_val;
   std::vector<double>  *patElectron_IP3D_err;
   std::vector<double>  *patElectron_IP3D_sig;
   std::vector<double>  *patElectron_IP2D_val;
   std::vector<double>  *patElectron_IP2D_err;
   std::vector<double>  *patElectron_IP2D_sig;
   std::vector<double>  *patElectron_sIP3D_val;
   std::vector<double>  *patElectron_sIP3D_err;
   std::vector<double>  *patElectron_sIP3D_sig;
   std::vector<double>  *patElectron_sIP2D_val;
   std::vector<double>  *patElectron_sIP2D_err;
   std::vector<double>  *patElectron_sIP2D_sig;
   std::vector<double>  *patElectron_IP1D_val;
   std::vector<double>  *patElectron_IP1D_err;
   std::vector<double>  *patElectron_IP1D_sig;
   std::vector<double>  *patElectron_sIP1D_val;
   std::vector<double>  *patElectron_sIP1D_err;
   std::vector<double>  *patElectron_sIP1D_sig;
   std::vector<double>  *patElectron_lepjetMaxIP3D_val;
   std::vector<double>  *patElectron_lepjetMaxIP3D_sig;
   std::vector<double>  *patElectron_lepjetMaxsIP3D_val;
   std::vector<double>  *patElectron_lepjetMaxsIP3D_sig;
   std::vector<double>  *patElectron_lepjetMaxIP2D_val;
   std::vector<double>  *patElectron_lepjetMaxIP2D_sig;
   std::vector<double>  *patElectron_lepjetMaxsIP2D_val;
   std::vector<double>  *patElectron_lepjetMaxsIP2D_sig;
   std::vector<double>  *patElectron_lepjetMaxIP1D_val;
   std::vector<double>  *patElectron_lepjetMaxIP1D_sig;
   std::vector<double>  *patElectron_lepjetMaxsIP1D_val;
   std::vector<double>  *patElectron_lepjetMaxsIP1D_sig;
   std::vector<double>  *patElectron_lepjetAvIP3D_val;
   std::vector<double>  *patElectron_lepjetAvIP3D_sig;
   std::vector<double>  *patElectron_lepjetAvsIP3D_val;
   std::vector<double>  *patElectron_lepjetAvsIP3D_sig;
   std::vector<double>  *patElectron_lepjetAvIP2D_val;
   std::vector<double>  *patElectron_lepjetAvIP2D_sig;
   std::vector<double>  *patElectron_lepjetAvsIP2D_val;
   std::vector<double>  *patElectron_lepjetAvsIP2D_sig;
   std::vector<double>  *patElectron_lepjetAvIP1D_val;
   std::vector<double>  *patElectron_lepjetAvIP1D_sig;
   std::vector<double>  *patElectron_lepjetAvsIP1D_val;
   std::vector<double>  *patElectron_lepjetAvsIP1D_sig;
   std::vector<double>  *patElectron_lepjetchtrks;
   std::vector<double>  *patElectron_lepjetpvchtrks;
   std::vector<double>  *patElectron_lepjetnonpvchtrks;
   std::vector<double>  *patElectron_lepjetndaus;
   std::vector<double>  *patElectron_lepjetpvchi2;
   std::vector<double>  *patElectron_lepjetnumno2trk;
   std::vector<double>  *patElectron_gen_pt;
   std::vector<double>  *patElectron_gen_eta;
   std::vector<double>  *patElectron_gen_phi;
   std::vector<double>  *patElectron_gen_en;
   std::vector<int>     *patElectron_gen_pdgId;
   std::vector<int>     *patElectron_gen_isPromptFinalState;
   std::vector<int>     *patElectron_gen_isDirectPromptTauDecayProductFinalState;
   std::vector<double>  *Tau_pt;
   std::vector<double>  *Tau_eta;
   std::vector<double>  *Tau_phi;
   std::vector<double>  *Tau_energy;
   std::vector<double>  *Tau_px;
   std::vector<double>  *Tau_py;
   std::vector<double>  *Tau_pz;
   std::vector<double>  *Tau_p;
   std::vector<double>  *Tau_leadChargedCandPt;
   std::vector<double>  *Tau_leadChargedCandEta;
   std::vector<double>  *Tau_leadChargedCandPhi;
   std::vector<double>  *Tau_leadChargedCandE;
   std::vector<double>  *Tau_leadChargedCandTrack_pt;
   std::vector<double>  *Tau_leadChargedCandTrack_ptError;
   std::vector<double>  *Tau_charge;
   std::vector<double>  *Tau_leadChargedCandCharge;
   std::vector<int>     *Tau_decayModeFinding;
   std::vector<int>     *Tau_decayModeFindingNewDMs;
   std::vector<int>     *Tau_againstMuonLoose3;
   std::vector<int>     *Tau_againstMuonTight3;
   std::vector<int>     *Tau_againstElectronVLooseMVA5;
   std::vector<int>     *Tau_againstElectronLooseMVA5;
   std::vector<int>     *Tau_againstElectronMediumMVA5;
   std::vector<int>     *Tau_againstElectronTightMVA5;
   std::vector<int>     *Tau_againstElectronVTightMVA5;
   std::vector<int>     *Tau_againstElectronMVA5category;
   std::vector<double>  *Tau_againstElectronMVA5raw;
   std::vector<int>     *Tau_againstElectronVLooseMVA6;
   std::vector<int>     *Tau_againstElectronLooseMVA6;
   std::vector<int>     *Tau_againstElectronMediumMVA6;
   std::vector<int>     *Tau_againstElectronTightMVA6;
   std::vector<double>  *Tau_againstElectronMVA6raw;
   std::vector<int>     *Tau_byVLooseIsolationMVA3newDMwLT;
   std::vector<int>     *Tau_byVLooseIsolationMVA3oldDMwLT;
   std::vector<int>     *Tau_byLooseCombinedIsolationDeltaBetaCorr3Hits;
   std::vector<int>     *Tau_byLooseIsolationMVA3newDMwLT;
   std::vector<int>     *Tau_byLooseIsolationMVA3oldDMwLT;
   std::vector<int>     *Tau_byMediumCombinedIsolationDeltaBetaCorr3Hits;
   std::vector<int>     *Tau_byMediumIsolationMVA3newDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVA3oldDMwLT;
   std::vector<int>     *Tau_byTightCombinedIsolationDeltaBetaCorr3Hits;
   std::vector<int>     *Tau_byTightIsolationMVA3newDMwLT;
   std::vector<int>     *Tau_byTightIsolationMVA3oldDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVA3newDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVA3oldDMwLT;
   std::vector<int>     *Tau_byVVTightIsolationMVA3newDMwLT;
   std::vector<int>     *Tau_byVVTightIsolationMVA3oldDMwLT;
   std::vector<double>  *Tau_byCombinedIsolationDeltaBetaCorrRaw3Hits;
   std::vector<double>  *Tau_byIsolationMVA3newDMwLTraw;
   std::vector<double>  *Tau_byIsolationMVA3oldDMwLTraw;
   std::vector<double>  *Tau_chargedIsoPtSum;
   std::vector<double>  *Tau_neutralIsoPtSum;
   std::vector<double>  *Tau_puCorrPtSum;
   std::vector<int>     *Tau_byVLooseIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byLooseIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byTightIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byVLooseIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byLooseIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byTightIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03;
   std::vector<int>     *Tau_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03;
   std::vector<int>     *Tau_byTightCombinedIsolationDeltaBetaCorr3HitsdR03;
   std::vector<int>     *Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT;
   std::vector<int>     *Tau_byTightIsolationMVArun2v1DBdR03oldDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVArun2v1DBdR03oldDMwLT;
   std::vector<double>  *Tau_nProngs;
   std::vector<double>  *Tau_leadChargedCandNdof;
   std::vector<double>  *Tau_leadChargedCandChi2;
   std::vector<double>  *Tau_leadChargedCandValidHits;
   std::vector<double>  *Tau_defaultDxy;
   std::vector<double>  *Tau_defaultDxyError;
   std::vector<double>  *Tau_defaultDxySig;
   std::vector<double>  *Tau_defaultFlightLengthX;
   std::vector<double>  *Tau_defaultFlightLengthY;
   std::vector<double>  *Tau_defaultFlightLengthZ;
   std::vector<double>  *Tau_defaultFlightLengthSig;
   std::vector<double>  *Tau_default_PCAx_pv;
   std::vector<double>  *Tau_default_PCAy_pv;
   std::vector<double>  *Tau_default_PCAz_pv;
   std::vector<double>  *Tau_leadChargedCandDz_pv;
   std::vector<double>  *Tau_leadChargedCandDxy_pv;
   std::vector<double>  *Tau_leadChargedCandDz_bs;
   std::vector<double>  *Tau_leadChargedCandDxy_bs;
   std::vector<double>  *Tau_leadChargedCandDzError;
   std::vector<double>  *Tau_leadChargedCandDxyError;
   std::vector<double>  *Tau_leadChargedCandVtx;
   std::vector<double>  *Tau_leadChargedCandVty;
   std::vector<double>  *Tau_leadChargedCandVtz;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAx_bs;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAy_bs;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAz_bs;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAx_pv;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAy_pv;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAz_pv;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_00;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_01;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_02;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_11;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_12;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_22;
   std::vector<double>  *Jet_pt;
   std::vector<double>  *Jet_eta;
   std::vector<double>  *Jet_phi;
   std::vector<double>  *Jet_energy;
   std::vector<double>  *Jet_mass;
   std::vector<double>  *Jet_px;
   std::vector<double>  *Jet_py;
   std::vector<double>  *Jet_pz;
   std::vector<double>  *Jet_Uncorr_pt;
   std::vector<double>  *Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags;
   std::vector<double>  *Jet_pfCombinedMVAV2BJetTags;
   std::vector<double>  *Jet_pfJetProbabilityBJetTags;
   std::vector<double>  *Jet_pfCombinedCvsLJetTags;
   std::vector<double>  *Jet_pfCombinedCvsBJetTags;
   std::vector<double>  *Jet_pileupId;
   std::vector<double>  *Jet_isPFJet;
   std::vector<double>  *Jet_isCaloJet;
   std::vector<double>  *Jet_neutralHadEnergyFraction;
   std::vector<double>  *Jet_neutralEmEnergyFraction;
   std::vector<double>  *Jet_chargedHadronEnergyFraction;
   std::vector<double>  *Jet_chargedEmEnergyFraction;
   std::vector<double>  *Jet_muonEnergyFraction;
   std::vector<double>  *Jet_electronEnergy;
   std::vector<double>  *Jet_photonEnergy;
   std::vector<double>  *Jet_emEnergyFraction;
   std::vector<double>  *Jet_numberOfConstituents;
   std::vector<double>  *Jet_chargedMultiplicity;
   std::vector<double>  *Jet_vtxMass;
   std::vector<double>  *Jet_vtxNtracks;
   std::vector<double>  *Jet_vtx3DVal;
   std::vector<double>  *Jet_vtx3DSig;
   std::vector<double>  *Jet_JesSF;
   std::vector<double>  *Jet_JesSFup;
   std::vector<double>  *Jet_JesSFdown;
   std::vector<double>  *Jet_JerSF;
   std::vector<double>  *Jet_JerSFup;
   std::vector<double>  *Jet_JerSFdown;
   std::vector<double>  *Jet_partonFlavour;
   std::vector<double>  *Jet_hadronFlavour;
   std::vector<double>  *BoostedJet_pt;
   std::vector<double>  *BoostedJet_eta;
   std::vector<double>  *BoostedJet_phi;
   std::vector<double>  *BoostedJet_energy;
   std::vector<double>  *BoostedJet_mass;
   std::vector<double>  *BoostedJet_Uncorr_pt;
   std::vector<double>  *BoostedJet_pfJetProbabilityBJetTags;
   std::vector<double>  *BoostedJet_pfCombinedMVAV2BJetTags;
   std::vector<double>  *BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags;
   std::vector<double>  *BoostedJet_pfCombinedCvsLJetTags;
   std::vector<double>  *BoostedJet_pfCombinedCvsBJetTags;
   std::vector<double>  *BoostedJet_neutralHadEnergyFraction;
   std::vector<double>  *BoostedJet_neutralEmEmEnergyFraction;
   std::vector<double>  *BoostedJet_chargedHadronEnergyFraction;
   std::vector<double>  *BoostedJet_chargedEmEnergyFraction;
   std::vector<double>  *BoostedJet_muonEnergyFraction;
   std::vector<int>     *BoostedJet_numberOfConstituents;
   std::vector<int>     *BoostedJet_chargedMultiplicity;
   std::vector<double>  *BoostedJet_electronEnergy;
   std::vector<double>  *BoostedJet_photonEnergy;
   std::vector<double>  *BoostedJet_tau1;
   std::vector<double>  *BoostedJet_tau2;
   std::vector<double>  *BoostedJet_tau3;
   std::vector<double>  *BoostedJet_softdrop_mass;
   std::vector<double>  *BoostedJet_trimmed_mass;
   std::vector<double>  *BoostedJet_pruned_mass;
   std::vector<double>  *BoostedJet_filtered_mass;
   std::vector<double>  *BoostedJet_JesSF;
   std::vector<double>  *BoostedJet_JesSFup;
   std::vector<double>  *BoostedJet_JesSFdown;
   std::vector<double>  *BoostedJet_JerSF;
   std::vector<double>  *BoostedJet_JerSFup;
   std::vector<double>  *BoostedJet_JerSFdown;
   std::vector<double>  *TopTagging_topMass;
   std::vector<double>  *TopTagging_minMass;
   std::vector<double>  *TopTagging_wMass;
   std::vector<int>     *TopTagging_nSubJets;
   Int_t           TauJetness_ngentau;
   std::vector<double>  *TauJetness_numtau;
   std::vector<double>  *TauJetness_taupt;
   std::vector<double>  *TauJetness_taueta;
   std::vector<double>  *TauJetness_tauphi;
   std::vector<double>  *TauJetness_tauenergy;
   std::vector<double>  *TauJetness_charge;
   std::vector<double>  *TauJetness_againstMuonTight3;
   std::vector<double>  *TauJetness_againstElectronMediumMVA6;
   std::vector<double>  *TauJetness_againstElectronTightMVA6;
   std::vector<double>  *TauJetness_byTightIsolationMVArun2v1DBnewDMwLT;
   std::vector<double>  *TauJetness_byVTightIsolationMVArun2v1DBnewDMwLT;
   std::vector<double>  *TauJetness_num_pdgid_leps;
   std::vector<double>  *TauJetness_num_pdgid_eles;
   std::vector<double>  *TauJetness_num_pdgid_mus;
   std::vector<double>  *TauJetness_num_soft_leps;
   std::vector<double>  *TauJetness_num_soft_eles;
   std::vector<double>  *TauJetness_num_vetonoipnoiso_leps;
   std::vector<double>  *TauJetness_num_vetonoipnoiso_eles;
   std::vector<double>  *TauJetness_num_loosenoipnoiso_leps;
   std::vector<double>  *TauJetness_num_loosenoipnoiso_eles;
   std::vector<double>  *TauJetness_num_loose_mus;
   std::vector<double>  *TauJetness_numtautrks;
   std::vector<double>  *TauJetness_numtautrkspv;
   std::vector<double>  *TauJetness_numtautrksnopv;
   std::vector<double>  *TauJetness_npvTrkOVcollTrk;
   std::vector<double>  *TauJetness_pvTrkOVcollTrk;
   std::vector<double>  *TauJetness_npvTrkOVpvTrk;
   std::vector<double>  *TauJetness_npvPtOVcollPt;
   std::vector<double>  *TauJetness_pvPtOVcollPt;
   std::vector<double>  *TauJetness_npvPtOVpvPt;
   std::vector<double>  *TauJetness_avnum2v;
   std::vector<double>  *TauJetness_avnumno2v;
   std::vector<double>  *TauJetness_avdca3d2t;
   std::vector<double>  *TauJetness_avdca3dno2t;
   std::vector<double>  *TauJetness_avdca3d;
   std::vector<double>  *TauJetness_avdca2d2t;
   std::vector<double>  *TauJetness_avdca2dno2t;
   std::vector<double>  *TauJetness_avdca2d;
   std::vector<double>  *TauJetness_chi2;
   std::vector<double>  *TauJetness_avip3d_val;
   std::vector<double>  *TauJetness_avip3d_sig;
   std::vector<double>  *TauJetness_avsip3d_val;
   std::vector<double>  *TauJetness_avsip3d_sig;
   std::vector<double>  *TauJetness_avip2d_val;
   std::vector<double>  *TauJetness_avip2d_sig;
   std::vector<double>  *TauJetness_avsip2d_val;
   std::vector<double>  *TauJetness_avsip2d_sig;
   std::vector<double>  *TauJetness_avip1d_val;
   std::vector<double>  *TauJetness_avip1d_sig;
   std::vector<double>  *TauJetness_avsip1d_val;
   std::vector<double>  *TauJetness_avsip1d_sig;
   Int_t           BJetness_ngenbh;
   Int_t           BJetness_ngenbt;
   Int_t           BJetness_ngenb;
   Int_t           BJetness_ngenc;
   std::vector<double>  *BJetness_partonFlavour;
   std::vector<double>  *BJetness_hadronFlavour;
   std::vector<double>  *BJetness_numjet;
   std::vector<double>  *BJetness_jetpt;
   std::vector<double>  *BJetness_jeteta;
   std::vector<double>  *BJetness_jetphi;
   std::vector<double>  *BJetness_jetenergy;
   std::vector<double>  *BJetness_jetcsv;
   std::vector<double>  *BJetness_pfJetProbabilityBJetTags;
   std::vector<double>  *BJetness_pfCombinedMVAV2BJetTags;
   std::vector<double>  *BJetness_pfCombinedCvsLJetTags;
   std::vector<double>  *BJetness_pfCombinedCvsBJetTags;
   std::vector<double>  *BJetness_num_pdgid_leps;
   std::vector<double>  *BJetness_num_pdgid_eles;
   std::vector<double>  *BJetness_num_pdgid_mus;
   std::vector<double>  *BJetness_num_soft_leps;
   std::vector<double>  *BJetness_num_soft_eles;
   std::vector<double>  *BJetness_num_vetonoipnoiso_leps;
   std::vector<double>  *BJetness_num_vetonoipnoiso_eles;
   std::vector<double>  *BJetness_num_loosenoipnoiso_leps;
   std::vector<double>  *BJetness_num_loosenoipnoiso_eles;
   std::vector<double>  *BJetness_num_loose_mus;
   std::vector<double>  *BJetness_numjettrks;
   std::vector<double>  *BJetness_numjettrkspv;
   std::vector<double>  *BJetness_numjettrksnopv;
   std::vector<double>  *BJetness_npvTrkOVcollTrk;
   std::vector<double>  *BJetness_pvTrkOVcollTrk;
   std::vector<double>  *BJetness_npvTrkOVpvTrk;
   std::vector<double>  *BJetness_npvPtOVcollPt;
   std::vector<double>  *BJetness_pvPtOVcollPt;
   std::vector<double>  *BJetness_npvPtOVpvPt;
   std::vector<double>  *BJetness_avnum2v;
   std::vector<double>  *BJetness_avnumno2v;
   std::vector<double>  *BJetness_avdca3d2t;
   std::vector<double>  *BJetness_avdca3dno2t;
   std::vector<double>  *BJetness_avdca3d;
   std::vector<double>  *BJetness_avdca2d2t;
   std::vector<double>  *BJetness_avdca2dno2t;
   std::vector<double>  *BJetness_avdca2d;
   std::vector<double>  *BJetness_chi2;
   std::vector<double>  *BJetness_avip3d_val;
   std::vector<double>  *BJetness_avip3d_sig;
   std::vector<double>  *BJetness_avsip3d_val;
   std::vector<double>  *BJetness_avsip3d_sig;
   std::vector<double>  *BJetness_avip2d_val;
   std::vector<double>  *BJetness_avip2d_sig;
   std::vector<double>  *BJetness_avsip2d_val;
   std::vector<double>  *BJetness_avsip2d_sig;
   std::vector<double>  *BJetness_avip1d_val;
   std::vector<double>  *BJetness_avip1d_sig;
   std::vector<double>  *BJetness_avsip1d_val;
   std::vector<double>  *BJetness_avsip1d_sig;
   std::vector<double>  *BJetnessFV_jetcsv;
   std::vector<double>  *BJetnessFV_pfJetProbabilityBJetTags;
   std::vector<double>  *BJetnessFV_pfCombinedMVAV2BJetTags;
   std::vector<double>  *BJetnessFV_num_loosenoipnoiso_leps;
   std::vector<double>  *BJetnessFV_numjettrksnopv;
   std::vector<double>  *BJetnessFV_pvTrkOVcollTrk;
   std::vector<double>  *BJetnessFV_avip3d_val;
   std::vector<double>  *BJetnessFV_avip3d_sig;
   std::vector<double>  *BJetnessFV_avsip3d_sig;
   std::vector<double>  *BJetnessFV_avip1d_sig;
   Double_t        bWeight;
   Double_t        PUWeight;
   Double_t        Met_type1PF_pt;
   Double_t        Met_type1PF_px;
   Double_t        Met_type1PF_py;
   Double_t        Met_type1PF_pz;
   Double_t        Met_type1PF_phi;
   Double_t        Met_type1PF_sumEt;
   Double_t        Met_type1PF_shiftedPtUp;
   Double_t        Met_type1PF_shiftedPtDown;
   Double_t        Gen_type1PF_Met;

   //Here we will store the location of the selected objects of various sorts.
   std::vector<int> electronIndexTight;
   std::vector<int> electronIndexLoose;
   std::vector<int> muonIndexTight;
   std::vector<int> muonIndexLoose;
   std::vector<int> jetIndex;
   std::vector<int> bTagIndex;
   TLorentzVector lepton1;
   float lepton1RelIso;
   TLorentzVector lepton2;
   float lepton2RelIso;
   TLorentzVector bJetVec;
   TLorentzVector otherJetVec1;
   TLorentzVector otherJetVec2;
   
   // List of branches
   TBranch        *b_Gen_pt;   //!
   TBranch        *b_Gen_eta;   //!
   TBranch        *b_Gen_phi;   //!
   TBranch        *b_Gen_p;   //!
   TBranch        *b_Gen_energy;   //!
   TBranch        *b_Gen_charge;   //!
   TBranch        *b_Gen_vx;   //!
   TBranch        *b_Gen_vy;   //!
   TBranch        *b_Gen_vz;   //!
   TBranch        *b_Gen_status;   //!
   TBranch        *b_Gen_pdg_id;   //!
   TBranch        *b_Gen_motherpdg_id;   //!
   TBranch        *b_Gen_numDaught;   //!
   TBranch        *b_Gen_numMother;   //!
   TBranch        *b_Gen_BmotherIndex;   //!
   TBranch        *b_Gen_BmotherIndices;   //!
   TBranch        *b_Gen_BdaughtIndices;   //!
   TBranch        *b_HiggsDecay;   //!
   TBranch        *b_ttHFCategory;   //!
   TBranch        *b_EVENT_event;   //!
   TBranch        *b_EVENT_run;   //!
   TBranch        *b_EVENT_lumiBlock;   //!
   TBranch        *b_EVENT_genWeight;   //!
   TBranch        *b_EVENT_rhopog;   //!
   TBranch        *b_EVENT_rhotth;   //!
   TBranch        *b_EVENT_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_EVENT_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_EVENT_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Ele105_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WP75_Gsf;   //!
   TBranch        *b_HLT_Ele27_WP85_Gsf;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Mu45_eta2p1;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_IsoMu17_eta2p1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1;   //!
   TBranch        *b_HLT_IsoMu18;   //!
   TBranch        *b_HLT_Ele23_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_IsoTkMu20;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_TripleMu_12_10_5;   //!
   TBranch        *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL;   //!
   TBranch        *b_TTHbb_SL;   //!
   TBranch        *b_TTHbb_DL;   //!
   TBranch        *b_TTHLep_2Mu;   //!
   TBranch        *b_TTHLep_2Ele;   //!
   TBranch        *b_TTHLep_MuEle;   //!
   TBranch        *b_TTHLep_3L4L;   //!
   TBranch        *b_pvertex_notempty;   //!
   TBranch        *b_nBestVtx;   //!
   TBranch        *b_npuVertices;   //!
   TBranch        *b_trueInteractions;   //!
   TBranch        *b_ootnpuVertices;   //!
   TBranch        *b_npuVerticesm1;   //!
   TBranch        *b_npuVerticesp1;   //!
   TBranch        *b_pvertex_ndof;   //!
   TBranch        *b_pvertex_dxy;   //!
   TBranch        *b_pvertex_x;   //!
   TBranch        *b_pvertex_y;   //!
   TBranch        *b_pvertex_z;   //!
   TBranch        *b_pvertex_xError;   //!
   TBranch        *b_pvertex_yError;   //!
   TBranch        *b_pvertex_zError;   //!
   TBranch        *b_beamSpot_x0;   //!
   TBranch        *b_beamSpot_y0;   //!
   TBranch        *b_beamSpot_z0;   //!
   TBranch        *b_beamSpot_xWidth;   //!
   TBranch        *b_beamSpot_yWidth;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_energy;   //!
   TBranch        *b_Muon_px;   //!
   TBranch        *b_Muon_py;   //!
   TBranch        *b_Muon_pz;   //!
   TBranch        *b_Muon_p;   //!
   TBranch        *b_Muon_dB;   //!
   TBranch        *b_Muon_pt_it;   //!
   TBranch        *b_Muon_ptErr_it;   //!
   TBranch        *b_Muon_pTErrOVpT_it;   //!
   TBranch        *b_Muon_pt_bt;   //!
   TBranch        *b_Muon_ptErr_bt;   //!
   TBranch        *b_Muon_pTErrOVpT_bt;   //!
   TBranch        *b_Muon_pt_tunePbt;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_soft;   //!
   TBranch        *b_Muon_loose;   //!
   TBranch        *b_Muon_medium;   //!
   TBranch        *b_Muon_tight;   //!
   TBranch        *b_Muon_isHighPt;   //!
   TBranch        *b_Muon_POGisGood;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_pf;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isTrackerMuon;   //!
   TBranch        *b_Muon_tunePBestTrackType;   //!
   TBranch        *b_Muon_isoR04Charged;   //!
   TBranch        *b_Muon_isoR04NeutralHadron;   //!
   TBranch        *b_Muon_isoR04Photon;   //!
   TBranch        *b_Muon_isoR04PU;   //!
   TBranch        *b_Muon_relIsoDeltaBetaR04;   //!
   TBranch        *b_Muon_isoR04CharParPt;   //!
   TBranch        *b_Muon_isoR03Charged;   //!
   TBranch        *b_Muon_isoR03NeutralHadron;   //!
   TBranch        *b_Muon_isoR03Photon;   //!
   TBranch        *b_Muon_isoR03PU;   //!
   TBranch        *b_Muon_relIsoDeltaBetaR03;   //!
   TBranch        *b_Muon_isoR03CharParPt;   //!
   TBranch        *b_Muon_trackIso;   //!
   TBranch        *b_Muon_TrackerIso;   //!
   TBranch        *b_Muon_ecalIso;   //!
   TBranch        *b_Muon_hcalIso;   //!
   TBranch        *b_Muon_caloIso;   //!
   TBranch        *b_Muon_isoSum;   //!
   TBranch        *b_Muon_pfEcalEnergy;   //!
   TBranch        *b_Muon_chi2;   //!
   TBranch        *b_Muon_chi2LocalPosition;   //!
   TBranch        *b_Muon_matchedStat;   //!
   TBranch        *b_Muon_validHits;   //!
   TBranch        *b_Muon_validHitsInner;   //!
   TBranch        *b_Muon_TLayers;   //!
   TBranch        *b_Muon_ndof;   //!
   TBranch        *b_Muon_validFraction;   //!
   TBranch        *b_Muon_pixelLayersWithMeasurement;   //!
   TBranch        *b_Muon_qualityhighPurity;   //!
   TBranch        *b_Muon_trkKink;   //!
   TBranch        *b_Muon_segmentCompatibility;   //!
   TBranch        *b_Muon_dxy_pv;   //!
   TBranch        *b_Muon_dz_pv;   //!
   TBranch        *b_Muon_dz_bs;   //!
   TBranch        *b_Muon_dxy_bs;   //!
   TBranch        *b_Muon_dzError;   //!
   TBranch        *b_Muon_dxyError;   //!
   TBranch        *b_Muon_vtx;   //!
   TBranch        *b_Muon_vty;   //!
   TBranch        *b_Muon_vtz;   //!
   TBranch        *b_Muon_miniIsoRel;   //!
   TBranch        *b_Muon_miniIsoCh;   //!
   TBranch        *b_Muon_miniIsoNeu;   //!
   TBranch        *b_Muon_miniIsoPUsub;   //!
   TBranch        *b_Muon_jetdr;   //!
   TBranch        *b_Muon_jetpt;   //!
   TBranch        *b_Muon_jetptratio;   //!
   TBranch        *b_Muon_jetcsv;   //!
   TBranch        *b_Muon_ptrel;   //!
   TBranch        *b_Muon_IP3Dsig_it;   //!
   TBranch        *b_Muon_pvass;   //!
   TBranch        *b_Muon_etarel;   //!
   TBranch        *b_Muon_ptOVen;   //!
   TBranch        *b_Muon_mujet_pfJetProbabilityBJetTag;   //!
   TBranch        *b_Muon_mujet_pfCombinedMVABJetTags;   //!
   TBranch        *b_Muon_mujet_qgl;   //!
   TBranch        *b_Muon_mumass;   //!
   TBranch        *b_Muon_mujet_mass;   //!
   TBranch        *b_Muon_mujet_Wmass;   //!
   TBranch        *b_Muon_mujet_Topmass;   //!
   TBranch        *b_Muon_mujet_WTopmass;   //!
   TBranch        *b_Muon_IP3D_val;   //!
   TBranch        *b_Muon_IP3D_err;   //!
   TBranch        *b_Muon_IP3D_sig;   //!
   TBranch        *b_Muon_IP2D_val;   //!
   TBranch        *b_Muon_IP2D_err;   //!
   TBranch        *b_Muon_IP2D_sig;   //!
   TBranch        *b_Muon_sIP3D_val;   //!
   TBranch        *b_Muon_sIP3D_err;   //!
   TBranch        *b_Muon_sIP3D_sig;   //!
   TBranch        *b_Muon_sIP2D_val;   //!
   TBranch        *b_Muon_sIP2D_err;   //!
   TBranch        *b_Muon_sIP2D_sig;   //!
   TBranch        *b_Muon_IP1D_val;   //!
   TBranch        *b_Muon_IP1D_err;   //!
   TBranch        *b_Muon_IP1D_sig;   //!
   TBranch        *b_Muon_sIP1D_val;   //!
   TBranch        *b_Muon_sIP1D_err;   //!
   TBranch        *b_Muon_sIP1D_sig;   //!
   TBranch        *b_Muon_lepjetMaxIP3D_val;   //!
   TBranch        *b_Muon_lepjetMaxIP3D_sig;   //!
   TBranch        *b_Muon_lepjetMaxsIP3D_val;   //!
   TBranch        *b_Muon_lepjetMaxsIP3D_sig;   //!
   TBranch        *b_Muon_lepjetMaxIP2D_val;   //!
   TBranch        *b_Muon_lepjetMaxIP2D_sig;   //!
   TBranch        *b_Muon_lepjetMaxsIP2D_val;   //!
   TBranch        *b_Muon_lepjetMaxsIP2D_sig;   //!
   TBranch        *b_Muon_lepjetMaxIP1D_val;   //!
   TBranch        *b_Muon_lepjetMaxIP1D_sig;   //!
   TBranch        *b_Muon_lepjetMaxsIP1D_val;   //!
   TBranch        *b_Muon_lepjetMaxsIP1D_sig;   //!
   TBranch        *b_Muon_lepjetAvIP3D_val;   //!
   TBranch        *b_Muon_lepjetAvIP3D_sig;   //!
   TBranch        *b_Muon_lepjetAvsIP3D_val;   //!
   TBranch        *b_Muon_lepjetAvsIP3D_sig;   //!
   TBranch        *b_Muon_lepjetAvIP2D_val;   //!
   TBranch        *b_Muon_lepjetAvIP2D_sig;   //!
   TBranch        *b_Muon_lepjetAvsIP2D_val;   //!
   TBranch        *b_Muon_lepjetAvsIP2D_sig;   //!
   TBranch        *b_Muon_lepjetAvIP1D_val;   //!
   TBranch        *b_Muon_lepjetAvIP1D_sig;   //!
   TBranch        *b_Muon_lepjetAvsIP1D_val;   //!
   TBranch        *b_Muon_lepjetAvsIP1D_sig;   //!
   TBranch        *b_Muon_lepjetchtrks;   //!
   TBranch        *b_Muon_lepjetpvchtrks;   //!
   TBranch        *b_Muon_lepjetnonpvchtrks;   //!
   TBranch        *b_Muon_lepjetndaus;   //!
   TBranch        *b_Muon_lepjetpvchi2;   //!
   TBranch        *b_Muon_lepjetnumno2trk;   //!
   TBranch        *b_Muon_gen_pt;   //!
   TBranch        *b_Muon_gen_eta;   //!
   TBranch        *b_Muon_gen_phi;   //!
   TBranch        *b_Muon_gen_en;   //!
   TBranch        *b_Muon_gen_pdgId;   //!
   TBranch        *b_Muon_gen_isPromptFinalState;   //!
   TBranch        *b_Muon_gen_isDirectPromptTauDecayProductFinalState;   //!
   TBranch        *b_patElectron_pt;   //!
   TBranch        *b_patElectron_eta;   //!
   TBranch        *b_patElectron_phi;   //!
   TBranch        *b_patElectron_energy;   //!
   TBranch        *b_patElectron_px;   //!
   TBranch        *b_patElectron_py;   //!
   TBranch        *b_patElectron_pz;   //!
   TBranch        *b_patElectron_p;   //!
   TBranch        *b_patElectron_Et;   //!
   TBranch        *b_patElectron_SCeta;   //!
   TBranch        *b_patElectron_inCrack;   //!
   TBranch        *b_patElectron_charge;   //!
   TBranch        *b_patElectron_isPassVeto;   //!
   TBranch        *b_patElectron_isPassLoose;   //!
   TBranch        *b_patElectron_isPassMedium;   //!
   TBranch        *b_patElectron_isPassTight;   //!
   TBranch        *b_patElectron_isPassHEEPId;   //!
   TBranch        *b_patElectron_isPassMvatrig;   //!
   TBranch        *b_patElectron_isPassMvanontrig;   //!
   TBranch        *b_patElectron_isPassMvatrigwp90;   //!
   TBranch        *b_patElectron_isPassMvanontrigwp90;   //!
   TBranch        *b_patElectron_pdgId;   //!
   TBranch        *b_patElectron_isEcalDriven;   //!
   TBranch        *b_patElectron_mvaValue_nonTrig;   //!
   TBranch        *b_patElectron_mvaCategory_nonTrig;   //!
   TBranch        *b_patElectron_mvaValue_Trig;   //!
   TBranch        *b_patElectron_mvaCategory_Trig;   //!
   TBranch        *b_patElectron_isoChargedHadrons;   //!
   TBranch        *b_patElectron_isoNeutralHadrons;   //!
   TBranch        *b_patElectron_isoPhotons;   //!
   TBranch        *b_patElectron_isoPU;   //!
   TBranch        *b_patElectron_relIsoDeltaBeta;   //!
   TBranch        *b_patElectron_relIsoRhoEA;   //!
   TBranch        *b_patElectron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_patElectron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_patElectron_isolPtTracks;   //!
   TBranch        *b_patElectron_ecalPFClusterIso;   //!
   TBranch        *b_patElectron_hcalPFClusterIso;   //!
   TBranch        *b_patElectron_dEtaIn;   //!
   TBranch        *b_patElectron_dPhiIn;   //!
   TBranch        *b_patElectron_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_patElectron_full5x5_e2x5Max;   //!
   TBranch        *b_patElectron_full5x5_e5x5;   //!
   TBranch        *b_patElectron_full5x5_e1x5;   //!
   TBranch        *b_patElectron_hOverE;   //!
   TBranch        *b_patElectron_ooEmooP;   //!
   TBranch        *b_patElectron_passConversionVeto;   //!
   TBranch        *b_patElectron_expectedMissingInnerHits;   //!
   TBranch        *b_patElectron_gsfTrack_ndof;   //!
   TBranch        *b_patElectron_gsfTrack_normChi2;   //!
   TBranch        *b_patElectron_gsfTrack_dz_pv;   //!
   TBranch        *b_patElectron_gsfTrack_dxy_pv;   //!
   TBranch        *b_patElectron_d0;   //!
   TBranch        *b_patElectron_dzError;   //!
   TBranch        *b_patElectron_dxyError;   //!
   TBranch        *b_patElectron_gsfTrack_vtx;   //!
   TBranch        *b_patElectron_gsfTrack_vty;   //!
   TBranch        *b_patElectron_gsfTrack_vtz;   //!
   TBranch        *b_patElectron_miniIsoRel;   //!
   TBranch        *b_patElectron_miniIsoCh;   //!
   TBranch        *b_patElectron_miniIsoNeu;   //!
   TBranch        *b_patElectron_miniIsoPUsub;   //!
   TBranch        *b_patElectron_jetdr;   //!
   TBranch        *b_patElectron_jetpt;   //!
   TBranch        *b_patElectron_jetptratio;   //!
   TBranch        *b_patElectron_jetcsv;   //!
   TBranch        *b_patElectron_ptrel;   //!
   TBranch        *b_patElectron_IP3Dsig;   //!
   TBranch        *b_patElectron_eleMVASpring15NonTrig25ns;   //!
   TBranch        *b_patElectron_eleMVASpring15NonTrig25ns_VL;   //!
   TBranch        *b_patElectron_pvass;   //!
   TBranch        *b_patElectron_etarel;   //!
   TBranch        *b_patElectron_ptOVen;   //!
   TBranch        *b_patElectron_elejet_pfJetProbabilityBJetTag;   //!
   TBranch        *b_patElectron_elejet_pfCombinedMVABJetTags;   //!
   TBranch        *b_patElectron_elejet_qgl;   //!
   TBranch        *b_patElectron_elemass;   //!
   TBranch        *b_patElectron_elejet_mass;   //!
   TBranch        *b_patElectron_elejet_Wmass;   //!
   TBranch        *b_patElectron_elejet_Topmass;   //!
   TBranch        *b_patElectron_elejet_WTopmass;   //!
   TBranch        *b_patElectron_IP3D_val;   //!
   TBranch        *b_patElectron_IP3D_err;   //!
   TBranch        *b_patElectron_IP3D_sig;   //!
   TBranch        *b_patElectron_IP2D_val;   //!
   TBranch        *b_patElectron_IP2D_err;   //!
   TBranch        *b_patElectron_IP2D_sig;   //!
   TBranch        *b_patElectron_sIP3D_val;   //!
   TBranch        *b_patElectron_sIP3D_err;   //!
   TBranch        *b_patElectron_sIP3D_sig;   //!
   TBranch        *b_patElectron_sIP2D_val;   //!
   TBranch        *b_patElectron_sIP2D_err;   //!
   TBranch        *b_patElectron_sIP2D_sig;   //!
   TBranch        *b_patElectron_IP1D_val;   //!
   TBranch        *b_patElectron_IP1D_err;   //!
   TBranch        *b_patElectron_IP1D_sig;   //!
   TBranch        *b_patElectron_sIP1D_val;   //!
   TBranch        *b_patElectron_sIP1D_err;   //!
   TBranch        *b_patElectron_sIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxIP3D_val;   //!
   TBranch        *b_patElectron_lepjetMaxIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxsIP3D_val;   //!
   TBranch        *b_patElectron_lepjetMaxsIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxIP2D_val;   //!
   TBranch        *b_patElectron_lepjetMaxIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxsIP2D_val;   //!
   TBranch        *b_patElectron_lepjetMaxsIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxIP1D_val;   //!
   TBranch        *b_patElectron_lepjetMaxIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxsIP1D_val;   //!
   TBranch        *b_patElectron_lepjetMaxsIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetAvIP3D_val;   //!
   TBranch        *b_patElectron_lepjetAvIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetAvsIP3D_val;   //!
   TBranch        *b_patElectron_lepjetAvsIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetAvIP2D_val;   //!
   TBranch        *b_patElectron_lepjetAvIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetAvsIP2D_val;   //!
   TBranch        *b_patElectron_lepjetAvsIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetAvIP1D_val;   //!
   TBranch        *b_patElectron_lepjetAvIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetAvsIP1D_val;   //!
   TBranch        *b_patElectron_lepjetAvsIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetchtrks;   //!
   TBranch        *b_patElectron_lepjetpvchtrks;   //!
   TBranch        *b_patElectron_lepjetnonpvchtrks;   //!
   TBranch        *b_patElectron_lepjetndaus;   //!
   TBranch        *b_patElectron_lepjetpvchi2;   //!
   TBranch        *b_patElectron_lepjetnumno2trk;   //!
   TBranch        *b_patElectron_gen_pt;   //!
   TBranch        *b_patElectron_gen_eta;   //!
   TBranch        *b_patElectron_gen_phi;   //!
   TBranch        *b_patElectron_gen_en;   //!
   TBranch        *b_patElectron_gen_pdgId;   //!
   TBranch        *b_patElectron_gen_isPromptFinalState;   //!
   TBranch        *b_patElectron_gen_isDirectPromptTauDecayProductFinalState;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_energy;   //!
   TBranch        *b_Tau_px;   //!
   TBranch        *b_Tau_py;   //!
   TBranch        *b_Tau_pz;   //!
   TBranch        *b_Tau_p;   //!
   TBranch        *b_Tau_leadChargedCandPt;   //!
   TBranch        *b_Tau_leadChargedCandEta;   //!
   TBranch        *b_Tau_leadChargedCandPhi;   //!
   TBranch        *b_Tau_leadChargedCandE;   //!
   TBranch        *b_Tau_leadChargedCandTrack_pt;   //!
   TBranch        *b_Tau_leadChargedCandTrack_ptError;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_leadChargedCandCharge;   //!
   TBranch        *b_Tau_decayModeFinding;   //!
   TBranch        *b_Tau_decayModeFindingNewDMs;   //!
   TBranch        *b_Tau_againstMuonLoose3;   //!
   TBranch        *b_Tau_againstMuonTight3;   //!
   TBranch        *b_Tau_againstElectronVLooseMVA5;   //!
   TBranch        *b_Tau_againstElectronLooseMVA5;   //!
   TBranch        *b_Tau_againstElectronMediumMVA5;   //!
   TBranch        *b_Tau_againstElectronTightMVA5;   //!
   TBranch        *b_Tau_againstElectronVTightMVA5;   //!
   TBranch        *b_Tau_againstElectronMVA5category;   //!
   TBranch        *b_Tau_againstElectronMVA5raw;   //!
   TBranch        *b_Tau_againstElectronVLooseMVA6;   //!
   TBranch        *b_Tau_againstElectronLooseMVA6;   //!
   TBranch        *b_Tau_againstElectronMediumMVA6;   //!
   TBranch        *b_Tau_againstElectronTightMVA6;   //!
   TBranch        *b_Tau_againstElectronMVA6raw;   //!
   TBranch        *b_Tau_byVLooseIsolationMVA3newDMwLT;   //!
   TBranch        *b_Tau_byVLooseIsolationMVA3oldDMwLT;   //!
   TBranch        *b_Tau_byLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_Tau_byLooseIsolationMVA3newDMwLT;   //!
   TBranch        *b_Tau_byLooseIsolationMVA3oldDMwLT;   //!
   TBranch        *b_Tau_byMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_Tau_byMediumIsolationMVA3newDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVA3oldDMwLT;   //!
   TBranch        *b_Tau_byTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_Tau_byTightIsolationMVA3newDMwLT;   //!
   TBranch        *b_Tau_byTightIsolationMVA3oldDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVA3newDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVA3oldDMwLT;   //!
   TBranch        *b_Tau_byVVTightIsolationMVA3newDMwLT;   //!
   TBranch        *b_Tau_byVVTightIsolationMVA3oldDMwLT;   //!
   TBranch        *b_Tau_byCombinedIsolationDeltaBetaCorrRaw3Hits;   //!
   TBranch        *b_Tau_byIsolationMVA3newDMwLTraw;   //!
   TBranch        *b_Tau_byIsolationMVA3oldDMwLTraw;   //!
   TBranch        *b_Tau_chargedIsoPtSum;   //!
   TBranch        *b_Tau_neutralIsoPtSum;   //!
   TBranch        *b_Tau_puCorrPtSum;   //!
   TBranch        *b_Tau_byVLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byVLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03;   //!
   TBranch        *b_Tau_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03;   //!
   TBranch        *b_Tau_byTightCombinedIsolationDeltaBetaCorr3HitsdR03;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_Tau_byTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_Tau_nProngs;   //!
   TBranch        *b_Tau_leadChargedCandNdof;   //!
   TBranch        *b_Tau_leadChargedCandChi2;   //!
   TBranch        *b_Tau_leadChargedCandValidHits;   //!
   TBranch        *b_Tau_defaultDxy;   //!
   TBranch        *b_Tau_defaultDxyError;   //!
   TBranch        *b_Tau_defaultDxySig;   //!
   TBranch        *b_Tau_defaultFlightLengthX;   //!
   TBranch        *b_Tau_defaultFlightLengthY;   //!
   TBranch        *b_Tau_defaultFlightLengthZ;   //!
   TBranch        *b_Tau_defaultFlightLengthSig;   //!
   TBranch        *b_Tau_default_PCAx_pv;   //!
   TBranch        *b_Tau_default_PCAy_pv;   //!
   TBranch        *b_Tau_default_PCAz_pv;   //!
   TBranch        *b_Tau_leadChargedCandDz_pv;   //!
   TBranch        *b_Tau_leadChargedCandDxy_pv;   //!
   TBranch        *b_Tau_leadChargedCandDz_bs;   //!
   TBranch        *b_Tau_leadChargedCandDxy_bs;   //!
   TBranch        *b_Tau_leadChargedCandDzError;   //!
   TBranch        *b_Tau_leadChargedCandDxyError;   //!
   TBranch        *b_Tau_leadChargedCandVtx;   //!
   TBranch        *b_Tau_leadChargedCandVty;   //!
   TBranch        *b_Tau_leadChargedCandVtz;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAx_bs;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAy_bs;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAz_bs;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAx_pv;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAy_pv;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAz_pv;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_00;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_01;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_02;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_11;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_12;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_22;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_energy;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_px;   //!
   TBranch        *b_Jet_py;   //!
   TBranch        *b_Jet_pz;   //!
   TBranch        *b_Jet_Uncorr_pt;   //!
   TBranch        *b_Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags;   //!
   TBranch        *b_Jet_pfCombinedMVAV2BJetTags;   //!
   TBranch        *b_Jet_pfJetProbabilityBJetTags;   //!
   TBranch        *b_Jet_pfCombinedCvsLJetTags;   //!
   TBranch        *b_Jet_pfCombinedCvsBJetTags;   //!
   TBranch        *b_Jet_pileupId;   //!
   TBranch        *b_Jet_isPFJet;   //!
   TBranch        *b_Jet_isCaloJet;   //!
   TBranch        *b_Jet_neutralHadEnergyFraction;   //!
   TBranch        *b_Jet_neutralEmEnergyFraction;   //!
   TBranch        *b_Jet_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jet_chargedEmEnergyFraction;   //!
   TBranch        *b_Jet_muonEnergyFraction;   //!
   TBranch        *b_Jet_electronEnergy;   //!
   TBranch        *b_Jet_photonEnergy;   //!
   TBranch        *b_Jet_emEnergyFraction;   //!
   TBranch        *b_Jet_numberOfConstituents;   //!
   TBranch        *b_Jet_chargedMultiplicity;   //!
   TBranch        *b_Jet_vtxMass;   //!
   TBranch        *b_Jet_vtxNtracks;   //!
   TBranch        *b_Jet_vtx3DVal;   //!
   TBranch        *b_Jet_vtx3DSig;   //!
   TBranch        *b_Jet_JesSF;   //!
   TBranch        *b_Jet_JesSFup;   //!
   TBranch        *b_Jet_JesSFdown;   //!
   TBranch        *b_Jet_JerSF;   //!
   TBranch        *b_Jet_JerSFup;   //!
   TBranch        *b_Jet_JerSFdown;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_BoostedJet_pt;   //!
   TBranch        *b_BoostedJet_eta;   //!
   TBranch        *b_BoostedJet_phi;   //!
   TBranch        *b_BoostedJet_energy;   //!
   TBranch        *b_BoostedJet_mass;   //!
   TBranch        *b_BoostedJet_Uncorr_pt;   //!
   TBranch        *b_BoostedJet_pfJetProbabilityBJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedMVAV2BJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedCvsLJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedCvsBJetTags;   //!
   TBranch        *b_BoostedJet_neutralHadEnergyFraction;   //!
   TBranch        *b_BoostedJet_neutralEmEmEnergyFraction;   //!
   TBranch        *b_BoostedJet_chargedHadronEnergyFraction;   //!
   TBranch        *b_BoostedJet_chargedEmEnergyFraction;   //!
   TBranch        *b_BoostedJet_muonEnergyFraction;   //!
   TBranch        *b_BoostedJet_numberOfConstituents;   //!
   TBranch        *b_BoostedJet_chargedMultiplicity;   //!
   TBranch        *b_BoostedJet_electronEnergy;   //!
   TBranch        *b_BoostedJet_photonEnergy;   //!
   TBranch        *b_BoostedJet_tau1;   //!
   TBranch        *b_BoostedJet_tau2;   //!
   TBranch        *b_BoostedJet_tau3;   //!
   TBranch        *b_BoostedJet_softdrop_mass;   //!
   TBranch        *b_BoostedJet_trimmed_mass;   //!
   TBranch        *b_BoostedJet_pruned_mass;   //!
   TBranch        *b_BoostedJet_filtered_mass;   //!
   TBranch        *b_BoostedJet_JesSF;   //!
   TBranch        *b_BoostedJet_JesSFup;   //!
   TBranch        *b_BoostedJet_JesSFdown;   //!
   TBranch        *b_BoostedJet_JerSF;   //!
   TBranch        *b_BoostedJet_JerSFup;   //!
   TBranch        *b_BoostedJet_JerSFdown;   //!
   TBranch        *b_TopTagging_topMass;   //!
   TBranch        *b_TopTagging_minMass;   //!
   TBranch        *b_TopTagging_wMass;   //!
   TBranch        *b_TopTagging_nSubJets;   //!
   TBranch        *b_TauJetness_ngentau;   //!
   TBranch        *b_TauJetness_numtau;   //!
   TBranch        *b_TauJetness_taupt;   //!
   TBranch        *b_TauJetness_taueta;   //!
   TBranch        *b_TauJetness_tauphi;   //!
   TBranch        *b_TauJetness_tauenergy;   //!
   TBranch        *b_TauJetness_charge;   //!
   TBranch        *b_TauJetness_againstMuonTight3;   //!
   TBranch        *b_TauJetness_againstElectronMediumMVA6;   //!
   TBranch        *b_TauJetness_againstElectronTightMVA6;   //!
   TBranch        *b_TauJetness_byTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_TauJetness_byVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_TauJetness_num_pdgid_leps;   //!
   TBranch        *b_TauJetness_num_pdgid_eles;   //!
   TBranch        *b_TauJetness_num_pdgid_mus;   //!
   TBranch        *b_TauJetness_num_soft_leps;   //!
   TBranch        *b_TauJetness_num_soft_eles;   //!
   TBranch        *b_TauJetness_num_vetonoipnoiso_leps;   //!
   TBranch        *b_TauJetness_num_vetonoipnoiso_eles;   //!
   TBranch        *b_TauJetness_num_loosenoipnoiso_leps;   //!
   TBranch        *b_TauJetness_num_loosenoipnoiso_eles;   //!
   TBranch        *b_TauJetness_num_loose_mus;   //!
   TBranch        *b_TauJetness_numtautrks;   //!
   TBranch        *b_TauJetness_numtautrkspv;   //!
   TBranch        *b_TauJetness_numtautrksnopv;   //!
   TBranch        *b_TauJetness_npvTrkOVcollTrk;   //!
   TBranch        *b_TauJetness_pvTrkOVcollTrk;   //!
   TBranch        *b_TauJetness_npvTrkOVpvTrk;   //!
   TBranch        *b_TauJetness_npvPtOVcollPt;   //!
   TBranch        *b_TauJetness_pvPtOVcollPt;   //!
   TBranch        *b_TauJetness_npvPtOVpvPt;   //!
   TBranch        *b_TauJetness_avnum2v;   //!
   TBranch        *b_TauJetness_avnumno2v;   //!
   TBranch        *b_TauJetness_avdca3d2t;   //!
   TBranch        *b_TauJetness_avdca3dno2t;   //!
   TBranch        *b_TauJetness_avdca3d;   //!
   TBranch        *b_TauJetness_avdca2d2t;   //!
   TBranch        *b_TauJetness_avdca2dno2t;   //!
   TBranch        *b_TauJetness_avdca2d;   //!
   TBranch        *b_TauJetness_chi2;   //!
   TBranch        *b_TauJetness_avip3d_val;   //!
   TBranch        *b_TauJetness_avip3d_sig;   //!
   TBranch        *b_TauJetness_avsip3d_val;   //!
   TBranch        *b_TauJetness_avsip3d_sig;   //!
   TBranch        *b_TauJetness_avip2d_val;   //!
   TBranch        *b_TauJetness_avip2d_sig;   //!
   TBranch        *b_TauJetness_avsip2d_val;   //!
   TBranch        *b_TauJetness_avsip2d_sig;   //!
   TBranch        *b_TauJetness_avip1d_val;   //!
   TBranch        *b_TauJetness_avip1d_sig;   //!
   TBranch        *b_TauJetness_avsip1d_val;   //!
   TBranch        *b_TauJetness_avsip1d_sig;   //!
   TBranch        *b_BJetness_ngenbh;   //!
   TBranch        *b_BJetness_ngenbt;   //!
   TBranch        *b_BJetness_ngenb;   //!
   TBranch        *b_BJetness_ngenc;   //!
   TBranch        *b_BJetness_partonFlavour;   //!
   TBranch        *b_BJetness_hadronFlavour;   //!
   TBranch        *b_BJetness_numjet;   //!
   TBranch        *b_BJetness_jetpt;   //!
   TBranch        *b_BJetness_jeteta;   //!
   TBranch        *b_BJetness_jetphi;   //!
   TBranch        *b_BJetness_jetenergy;   //!
   TBranch        *b_BJetness_jetcsv;   //!
   TBranch        *b_BJetness_pfJetProbabilityBJetTags;   //!
   TBranch        *b_BJetness_pfCombinedMVAV2BJetTags;   //!
   TBranch        *b_BJetness_pfCombinedCvsLJetTags;   //!
   TBranch        *b_BJetness_pfCombinedCvsBJetTags;   //!
   TBranch        *b_BJetness_num_pdgid_leps;   //!
   TBranch        *b_BJetness_num_pdgid_eles;   //!
   TBranch        *b_BJetness_num_pdgid_mus;   //!
   TBranch        *b_BJetness_num_soft_leps;   //!
   TBranch        *b_BJetness_num_soft_eles;   //!
   TBranch        *b_BJetness_num_vetonoipnoiso_leps;   //!
   TBranch        *b_BJetness_num_vetonoipnoiso_eles;   //!
   TBranch        *b_BJetness_num_loosenoipnoiso_leps;   //!
   TBranch        *b_BJetness_num_loosenoipnoiso_eles;   //!
   TBranch        *b_BJetness_num_loose_mus;   //!
   TBranch        *b_BJetness_numjettrks;   //!
   TBranch        *b_BJetness_numjettrkspv;   //!
   TBranch        *b_BJetness_numjettrksnopv;   //!
   TBranch        *b_BJetness_npvTrkOVcollTrk;   //!
   TBranch        *b_BJetness_pvTrkOVcollTrk;   //!
   TBranch        *b_BJetness_npvTrkOVpvTrk;   //!
   TBranch        *b_BJetness_npvPtOVcollPt;   //!
   TBranch        *b_BJetness_pvPtOVcollPt;   //!
   TBranch        *b_BJetness_npvPtOVpvPt;   //!
   TBranch        *b_BJetness_avnum2v;   //!
   TBranch        *b_BJetness_avnumno2v;   //!
   TBranch        *b_BJetness_avdca3d2t;   //!
   TBranch        *b_BJetness_avdca3dno2t;   //!
   TBranch        *b_BJetness_avdca3d;   //!
   TBranch        *b_BJetness_avdca2d2t;   //!
   TBranch        *b_BJetness_avdca2dno2t;   //!
   TBranch        *b_BJetness_avdca2d;   //!
   TBranch        *b_BJetness_chi2;   //!
   TBranch        *b_BJetness_avip3d_val;   //!
   TBranch        *b_BJetness_avip3d_sig;   //!
   TBranch        *b_BJetness_avsip3d_val;   //!
   TBranch        *b_BJetness_avsip3d_sig;   //!
   TBranch        *b_BJetness_avip2d_val;   //!
   TBranch        *b_BJetness_avip2d_sig;   //!
   TBranch        *b_BJetness_avsip2d_val;   //!
   TBranch        *b_BJetness_avsip2d_sig;   //!
   TBranch        *b_BJetness_avip1d_val;   //!
   TBranch        *b_BJetness_avip1d_sig;   //!
   TBranch        *b_BJetness_avsip1d_val;   //!
   TBranch        *b_BJetness_avsip1d_sig;   //!
   TBranch        *b_BJetnessFV_jetcsv;   //!
   TBranch        *b_BJetnessFV_pfJetProbabilityBJetTags;   //!
   TBranch        *b_BJetnessFV_pfCombinedMVAV2BJetTags;   //!
   TBranch        *b_BJetnessFV_num_loosenoipnoiso_leps;   //!
   TBranch        *b_BJetnessFV_numjettrksnopv;   //!
   TBranch        *b_BJetnessFV_pvTrkOVcollTrk;   //!
   TBranch        *b_BJetnessFV_avip3d_val;   //!
   TBranch        *b_BJetnessFV_avip3d_sig;   //!
   TBranch        *b_BJetnessFV_avsip3d_sig;   //!
   TBranch        *b_BJetnessFV_avip1d_sig;   //!
   TBranch        *b_bWeight;   //!
   TBranch        *b_PUWeight;   //!
   TBranch        *b_Met_type1PF_pt;   //!
   TBranch        *b_Met_type1PF_px;   //!
   TBranch        *b_Met_type1PF_py;   //!
   TBranch        *b_Met_type1PF_pz;   //!
   TBranch        *b_Met_type1PF_phi;   //!
   TBranch        *b_Met_type1PF_sumEt;   //!
   TBranch        *b_Met_type1PF_shiftedPtUp;   //!
   TBranch        *b_Met_type1PF_shiftedPtDown;   //!
   TBranch        *b_Gen_type1PF_Met;   //!

   tWEvent(TTree *tree=0);
   virtual ~tWEvent();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef tWEvent_cxx
tWEvent::tWEvent(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/crab_Full2202_DY/160222_223837/0000/OutTree_1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/crab_Full2202_DY/160222_223837/0000/OutTree_1.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/publicfs/cms/data/TopQuark/cms13TeV/Samples2202/mc/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/crab_Full2202_DY/160222_223837/0000/OutTree_1.root:/TNT");
      dir->GetObject("BOOM",tree);

   }
   Init(tree);
}

tWEvent::~tWEvent()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t tWEvent::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t tWEvent::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void tWEvent::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Gen_pt = 0;
   Gen_eta = 0;
   Gen_phi = 0;
   Gen_p = 0;
   Gen_energy = 0;
   Gen_charge = 0;
   Gen_vx = 0;
   Gen_vy = 0;
   Gen_vz = 0;
   Gen_status = 0;
   Gen_pdg_id = 0;
   Gen_motherpdg_id = 0;
   Gen_numDaught = 0;
   Gen_numMother = 0;
   Gen_BmotherIndex = 0;
   Gen_BmotherIndices = 0;
   Gen_BdaughtIndices = 0;
   pvertex_ndof = 0;
   pvertex_dxy = 0;
   pvertex_x = 0;
   pvertex_y = 0;
   pvertex_z = 0;
   pvertex_xError = 0;
   pvertex_yError = 0;
   pvertex_zError = 0;
   beamSpot_x0 = 0;
   beamSpot_y0 = 0;
   beamSpot_z0 = 0;
   beamSpot_xWidth = 0;
   beamSpot_yWidth = 0;
   Muon_pt = 0;
   Muon_eta = 0;
   Muon_phi = 0;
   Muon_energy = 0;
   Muon_px = 0;
   Muon_py = 0;
   Muon_pz = 0;
   Muon_p = 0;
   Muon_p = 0;
   Muon_dB = 0;
   Muon_pt_it = 0;
   Muon_ptErr_it = 0;
   Muon_pTErrOVpT_it = 0;
   Muon_pt_bt = 0;
   Muon_ptErr_bt = 0;
   Muon_pTErrOVpT_bt = 0;
   Muon_pt_tunePbt = 0;
   Muon_charge = 0;
   Muon_soft = 0;
   Muon_loose = 0;
   Muon_medium = 0;
   Muon_tight = 0;
   Muon_isHighPt = 0;
   Muon_POGisGood = 0;
   Muon_pdgId = 0;
   Muon_pf = 0;
   Muon_isGlobal = 0;
   Muon_isTrackerMuon = 0;
   Muon_tunePBestTrackType = 0;
   Muon_isoR04Charged = 0;
   Muon_isoR04NeutralHadron = 0;
   Muon_isoR04Photon = 0;
   Muon_isoR04PU = 0;
   Muon_relIsoDeltaBetaR04 = 0;
   Muon_isoR04CharParPt = 0;
   Muon_isoR03Charged = 0;
   Muon_isoR03NeutralHadron = 0;
   Muon_isoR03Photon = 0;
   Muon_isoR03PU = 0;
   Muon_relIsoDeltaBetaR03 = 0;
   Muon_isoR03CharParPt = 0;
   Muon_trackIso = 0;
   Muon_TrackerIso = 0;
   Muon_ecalIso = 0;
   Muon_hcalIso = 0;
   Muon_caloIso = 0;
   Muon_isoSum = 0;
   Muon_pfEcalEnergy = 0;
   Muon_chi2 = 0;
   Muon_chi2LocalPosition = 0;
   Muon_matchedStat = 0;
   Muon_validHits = 0;
   Muon_validHitsInner = 0;
   Muon_TLayers = 0;
   Muon_ndof = 0;
   Muon_validFraction = 0;
   Muon_pixelLayersWithMeasurement = 0;
   Muon_qualityhighPurity = 0;
   Muon_trkKink = 0;
   Muon_segmentCompatibility = 0;
   Muon_dxy_pv = 0;
   Muon_dz_pv = 0;
   Muon_dz_bs = 0;
   Muon_dxy_bs = 0;
   Muon_dzError = 0;
   Muon_dxyError = 0;
   Muon_vtx = 0;
   Muon_vty = 0;
   Muon_vtz = 0;
   Muon_miniIsoRel = 0;
   Muon_miniIsoCh = 0;
   Muon_miniIsoNeu = 0;
   Muon_miniIsoPUsub = 0;
   Muon_jetdr = 0;
   Muon_jetpt = 0;
   Muon_jetptratio = 0;
   Muon_jetcsv = 0;
   Muon_ptrel = 0;
   Muon_IP3Dsig_it = 0;
   Muon_pvass = 0;
   Muon_etarel = 0;
   Muon_ptOVen = 0;
   Muon_mujet_pfJetProbabilityBJetTag = 0;
   Muon_mujet_pfCombinedMVABJetTags = 0;
   Muon_mujet_qgl = 0;
   Muon_mumass = 0;
   Muon_mujet_mass = 0;
   Muon_mujet_Wmass = 0;
   Muon_mujet_Topmass = 0;
   Muon_mujet_WTopmass = 0;
   Muon_IP3D_val = 0;
   Muon_IP3D_err = 0;
   Muon_IP3D_sig = 0;
   Muon_IP2D_val = 0;
   Muon_IP2D_err = 0;
   Muon_IP2D_sig = 0;
   Muon_sIP3D_val = 0;
   Muon_sIP3D_err = 0;
   Muon_sIP3D_sig = 0;
   Muon_sIP2D_val = 0;
   Muon_sIP2D_err = 0;
   Muon_sIP2D_sig = 0;
   Muon_IP1D_val = 0;
   Muon_IP1D_err = 0;
   Muon_IP1D_sig = 0;
   Muon_sIP1D_val = 0;
   Muon_sIP1D_err = 0;
   Muon_sIP1D_sig = 0;
   Muon_lepjetMaxIP3D_val = 0;
   Muon_lepjetMaxIP3D_sig = 0;
   Muon_lepjetMaxsIP3D_val = 0;
   Muon_lepjetMaxsIP3D_sig = 0;
   Muon_lepjetMaxIP2D_val = 0;
   Muon_lepjetMaxIP2D_sig = 0;
   Muon_lepjetMaxsIP2D_val = 0;
   Muon_lepjetMaxsIP2D_sig = 0;
   Muon_lepjetMaxIP1D_val = 0;
   Muon_lepjetMaxIP1D_sig = 0;
   Muon_lepjetMaxsIP1D_val = 0;
   Muon_lepjetMaxsIP1D_sig = 0;
   Muon_lepjetAvIP3D_val = 0;
   Muon_lepjetAvIP3D_sig = 0;
   Muon_lepjetAvsIP3D_val = 0;
   Muon_lepjetAvsIP3D_sig = 0;
   Muon_lepjetAvIP2D_val = 0;
   Muon_lepjetAvIP2D_sig = 0;
   Muon_lepjetAvsIP2D_val = 0;
   Muon_lepjetAvsIP2D_sig = 0;
   Muon_lepjetAvIP1D_val = 0;
   Muon_lepjetAvIP1D_sig = 0;
   Muon_lepjetAvsIP1D_val = 0;
   Muon_lepjetAvsIP1D_sig = 0;
   Muon_lepjetchtrks = 0;
   Muon_lepjetpvchtrks = 0;
   Muon_lepjetnonpvchtrks = 0;
   Muon_lepjetndaus = 0;
   Muon_lepjetpvchi2 = 0;
   Muon_lepjetnumno2trk = 0;
   Muon_gen_pt = 0;
   Muon_gen_eta = 0;
   Muon_gen_phi = 0;
   Muon_gen_en = 0;
   Muon_gen_pdgId = 0;
   Muon_gen_isPromptFinalState = 0;
   Muon_gen_isDirectPromptTauDecayProductFinalState = 0;
   patElectron_pt = 0;
   patElectron_eta = 0;
   patElectron_phi = 0;
   patElectron_energy = 0;
   patElectron_px = 0;
   patElectron_py = 0;
   patElectron_pz = 0;
   patElectron_p = 0;
   patElectron_Et = 0;
   patElectron_SCeta = 0;
   patElectron_inCrack = 0;
   patElectron_charge = 0;
   patElectron_isPassVeto = 0;
   patElectron_isPassLoose = 0;
   patElectron_isPassMedium = 0;
   patElectron_isPassTight = 0;
   patElectron_isPassHEEPId = 0;
   patElectron_isPassMvatrig = 0;
   patElectron_isPassMvanontrig = 0;
   patElectron_isPassMvatrigwp90 = 0;
   patElectron_isPassMvanontrigwp90 = 0;
   patElectron_pdgId = 0;
   patElectron_isEcalDriven = 0;
   patElectron_mvaValue_nonTrig = 0;
   patElectron_mvaCategory_nonTrig = 0;
   patElectron_mvaValue_Trig = 0;
   patElectron_mvaCategory_Trig = 0;
   patElectron_isoChargedHadrons = 0;
   patElectron_isoNeutralHadrons = 0;
   patElectron_isoPhotons = 0;
   patElectron_isoPU = 0;
   patElectron_relIsoDeltaBeta = 0;
   patElectron_relIsoRhoEA = 0;
   patElectron_dr03EcalRecHitSumEt = 0;
   patElectron_dr03HcalDepth1TowerSumEt = 0;
   patElectron_isolPtTracks = 0;
   patElectron_ecalPFClusterIso = 0;
   patElectron_hcalPFClusterIso = 0;
   patElectron_dEtaIn = 0;
   patElectron_dPhiIn = 0;
   patElectron_full5x5_sigmaIetaIeta = 0;
   patElectron_full5x5_e2x5Max = 0;
   patElectron_full5x5_e5x5 = 0;
   patElectron_full5x5_e1x5 = 0;
   patElectron_hOverE = 0;
   patElectron_ooEmooP = 0;
   patElectron_passConversionVeto = 0;
   patElectron_expectedMissingInnerHits = 0;
   patElectron_gsfTrack_ndof = 0;
   patElectron_gsfTrack_normChi2 = 0;
   patElectron_gsfTrack_dz_pv = 0;
   patElectron_gsfTrack_dxy_pv = 0;
   patElectron_d0 = 0;
   patElectron_dzError = 0;
   patElectron_dxyError = 0;
   patElectron_gsfTrack_vtx = 0;
   patElectron_gsfTrack_vty = 0;
   patElectron_gsfTrack_vtz = 0;
   patElectron_miniIsoRel = 0;
   patElectron_miniIsoCh = 0;
   patElectron_miniIsoNeu = 0;
   patElectron_miniIsoPUsub = 0;
   patElectron_jetdr = 0;
   patElectron_jetpt = 0;
   patElectron_jetptratio = 0;
   patElectron_jetcsv = 0;
   patElectron_ptrel = 0;
   patElectron_IP3Dsig = 0;
   patElectron_eleMVASpring15NonTrig25ns = 0;
   patElectron_eleMVASpring15NonTrig25ns_VL = 0;
   patElectron_pvass = 0;
   patElectron_etarel = 0;
   patElectron_ptOVen = 0;
   patElectron_elejet_pfJetProbabilityBJetTag = 0;
   patElectron_elejet_pfCombinedMVABJetTags = 0;
   patElectron_elejet_qgl = 0;
   patElectron_elemass = 0;
   patElectron_elejet_mass = 0;
   patElectron_elejet_Wmass = 0;
   patElectron_elejet_Topmass = 0;
   patElectron_elejet_WTopmass = 0;
   patElectron_IP3D_val = 0;
   patElectron_IP3D_err = 0;
   patElectron_IP3D_sig = 0;
   patElectron_IP2D_val = 0;
   patElectron_IP2D_err = 0;
   patElectron_IP2D_sig = 0;
   patElectron_sIP3D_val = 0;
   patElectron_sIP3D_err = 0;
   patElectron_sIP3D_sig = 0;
   patElectron_sIP2D_val = 0;
   patElectron_sIP2D_err = 0;
   patElectron_sIP2D_sig = 0;
   patElectron_IP1D_val = 0;
   patElectron_IP1D_err = 0;
   patElectron_IP1D_sig = 0;
   patElectron_sIP1D_val = 0;
   patElectron_sIP1D_err = 0;
   patElectron_sIP1D_sig = 0;
   patElectron_lepjetMaxIP3D_val = 0;
   patElectron_lepjetMaxIP3D_sig = 0;
   patElectron_lepjetMaxsIP3D_val = 0;
   patElectron_lepjetMaxsIP3D_sig = 0;
   patElectron_lepjetMaxIP2D_val = 0;
   patElectron_lepjetMaxIP2D_sig = 0;
   patElectron_lepjetMaxsIP2D_val = 0;
   patElectron_lepjetMaxsIP2D_sig = 0;
   patElectron_lepjetMaxIP1D_val = 0;
   patElectron_lepjetMaxIP1D_sig = 0;
   patElectron_lepjetMaxsIP1D_val = 0;
   patElectron_lepjetMaxsIP1D_sig = 0;
   patElectron_lepjetAvIP3D_val = 0;
   patElectron_lepjetAvIP3D_sig = 0;
   patElectron_lepjetAvsIP3D_val = 0;
   patElectron_lepjetAvsIP3D_sig = 0;
   patElectron_lepjetAvIP2D_val = 0;
   patElectron_lepjetAvIP2D_sig = 0;
   patElectron_lepjetAvsIP2D_val = 0;
   patElectron_lepjetAvsIP2D_sig = 0;
   patElectron_lepjetAvIP1D_val = 0;
   patElectron_lepjetAvIP1D_sig = 0;
   patElectron_lepjetAvsIP1D_val = 0;
   patElectron_lepjetAvsIP1D_sig = 0;
   patElectron_lepjetchtrks = 0;
   patElectron_lepjetpvchtrks = 0;
   patElectron_lepjetnonpvchtrks = 0;
   patElectron_lepjetndaus = 0;
   patElectron_lepjetpvchi2 = 0;
   patElectron_lepjetnumno2trk = 0;
   patElectron_gen_pt = 0;
   patElectron_gen_eta = 0;
   patElectron_gen_phi = 0;
   patElectron_gen_en = 0;
   patElectron_gen_pdgId = 0;
   patElectron_gen_isPromptFinalState = 0;
   patElectron_gen_isDirectPromptTauDecayProductFinalState = 0;
   Tau_pt = 0;
   Tau_eta = 0;
   Tau_phi = 0;
   Tau_energy = 0;
   Tau_px = 0;
   Tau_py = 0;
   Tau_pz = 0;
   Tau_p = 0;
   Tau_leadChargedCandPt = 0;
   Tau_leadChargedCandEta = 0;
   Tau_leadChargedCandPhi = 0;
   Tau_leadChargedCandE = 0;
   Tau_leadChargedCandTrack_pt = 0;
   Tau_leadChargedCandTrack_ptError = 0;
   Tau_charge = 0;
   Tau_leadChargedCandCharge = 0;
   Tau_decayModeFinding = 0;
   Tau_decayModeFindingNewDMs = 0;
   Tau_againstMuonLoose3 = 0;
   Tau_againstMuonTight3 = 0;
   Tau_againstElectronVLooseMVA5 = 0;
   Tau_againstElectronLooseMVA5 = 0;
   Tau_againstElectronMediumMVA5 = 0;
   Tau_againstElectronTightMVA5 = 0;
   Tau_againstElectronVTightMVA5 = 0;
   Tau_againstElectronMVA5category = 0;
   Tau_againstElectronMVA5raw = 0;
   Tau_againstElectronVLooseMVA6 = 0;
   Tau_againstElectronLooseMVA6 = 0;
   Tau_againstElectronMediumMVA6 = 0;
   Tau_againstElectronTightMVA6 = 0;
   Tau_againstElectronMVA6raw = 0;
   Tau_byVLooseIsolationMVA3newDMwLT = 0;
   Tau_byVLooseIsolationMVA3oldDMwLT = 0;
   Tau_byLooseCombinedIsolationDeltaBetaCorr3Hits = 0;
   Tau_byLooseIsolationMVA3newDMwLT = 0;
   Tau_byLooseIsolationMVA3oldDMwLT = 0;
   Tau_byMediumCombinedIsolationDeltaBetaCorr3Hits = 0;
   Tau_byMediumIsolationMVA3newDMwLT = 0;
   Tau_byMediumIsolationMVA3oldDMwLT = 0;
   Tau_byTightCombinedIsolationDeltaBetaCorr3Hits = 0;
   Tau_byTightIsolationMVA3newDMwLT = 0;
   Tau_byTightIsolationMVA3oldDMwLT = 0;
   Tau_byVTightIsolationMVA3newDMwLT = 0;
   Tau_byVTightIsolationMVA3oldDMwLT = 0;
   Tau_byVVTightIsolationMVA3newDMwLT = 0;
   Tau_byVVTightIsolationMVA3oldDMwLT = 0;
   Tau_byCombinedIsolationDeltaBetaCorrRaw3Hits = 0;
   Tau_byIsolationMVA3newDMwLTraw = 0;
   Tau_byIsolationMVA3oldDMwLTraw = 0;
   Tau_chargedIsoPtSum = 0;
   Tau_neutralIsoPtSum = 0;
   Tau_puCorrPtSum = 0;
   Tau_byVLooseIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byLooseIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byMediumIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byTightIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byVTightIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byVLooseIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byLooseIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byMediumIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byTightIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byVTightIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03 = 0;
   Tau_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03 = 0;
   Tau_byTightCombinedIsolationDeltaBetaCorr3HitsdR03 = 0;
   Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT = 0;
   Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT = 0;
   Tau_byTightIsolationMVArun2v1DBdR03oldDMwLT = 0;
   Tau_byVTightIsolationMVArun2v1DBdR03oldDMwLT = 0;
   Tau_nProngs = 0;
   Tau_leadChargedCandNdof = 0;
   Tau_leadChargedCandChi2 = 0;
   Tau_leadChargedCandValidHits = 0;
   Tau_defaultDxy = 0;
   Tau_defaultDxyError = 0;
   Tau_defaultDxySig = 0;
   Tau_defaultFlightLengthX = 0;
   Tau_defaultFlightLengthY = 0;
   Tau_defaultFlightLengthZ = 0;
   Tau_defaultFlightLengthSig = 0;
   Tau_default_PCAx_pv = 0;
   Tau_default_PCAy_pv = 0;
   Tau_default_PCAz_pv = 0;
   Tau_leadChargedCandDz_pv = 0;
   Tau_leadChargedCandDxy_pv = 0;
   Tau_leadChargedCandDz_bs = 0;
   Tau_leadChargedCandDxy_bs = 0;
   Tau_leadChargedCandDzError = 0;
   Tau_leadChargedCandDxyError = 0;
   Tau_leadChargedCandVtx = 0;
   Tau_leadChargedCandVty = 0;
   Tau_leadChargedCandVtz = 0;
   Tau_leadChargedCandTrack_PCAx_bs = 0;
   Tau_leadChargedCandTrack_PCAy_bs = 0;
   Tau_leadChargedCandTrack_PCAz_bs = 0;
   Tau_leadChargedCandTrack_PCAx_pv = 0;
   Tau_leadChargedCandTrack_PCAy_pv = 0;
   Tau_leadChargedCandTrack_PCAz_pv = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_00 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_01 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_02 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_11 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_12 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_22 = 0;
   Jet_pt = 0;
   Jet_eta = 0;
   Jet_phi = 0;
   Jet_energy = 0;
   Jet_mass = 0;
   Jet_px = 0;
   Jet_py = 0;
   Jet_pz = 0;
   Jet_Uncorr_pt = 0;
   Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags = 0;
   Jet_pfCombinedMVAV2BJetTags = 0;
   Jet_pfJetProbabilityBJetTags = 0;
   Jet_pfCombinedCvsLJetTags = 0;
   Jet_pfCombinedCvsBJetTags = 0;
   Jet_pileupId = 0;
   Jet_isPFJet = 0;
   Jet_isCaloJet = 0;
   Jet_neutralHadEnergyFraction = 0;
   Jet_neutralEmEnergyFraction = 0;
   Jet_chargedHadronEnergyFraction = 0;
   Jet_chargedEmEnergyFraction = 0;
   Jet_muonEnergyFraction = 0;
   Jet_electronEnergy = 0;
   Jet_photonEnergy = 0;
   Jet_emEnergyFraction = 0;
   Jet_numberOfConstituents = 0;
   Jet_chargedMultiplicity = 0;
   Jet_vtxMass = 0;
   Jet_vtxNtracks = 0;
   Jet_vtx3DVal = 0;
   Jet_vtx3DSig = 0;
   Jet_JesSF = 0;
   Jet_JesSFup = 0;
   Jet_JesSFdown = 0;
   Jet_JerSF = 0;
   Jet_JerSFup = 0;
   Jet_JerSFdown = 0;
   Jet_partonFlavour = 0;
   Jet_hadronFlavour = 0;
   BoostedJet_pt = 0;
   BoostedJet_eta = 0;
   BoostedJet_phi = 0;
   BoostedJet_energy = 0;
   BoostedJet_mass = 0;
   BoostedJet_Uncorr_pt = 0;
   BoostedJet_pfJetProbabilityBJetTags = 0;
   BoostedJet_pfCombinedMVAV2BJetTags = 0;
   BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags = 0;
   BoostedJet_pfCombinedCvsLJetTags = 0;
   BoostedJet_pfCombinedCvsBJetTags = 0;
   BoostedJet_neutralHadEnergyFraction = 0;
   BoostedJet_neutralEmEmEnergyFraction = 0;
   BoostedJet_chargedHadronEnergyFraction = 0;
   BoostedJet_chargedEmEnergyFraction = 0;
   BoostedJet_muonEnergyFraction = 0;
   BoostedJet_numberOfConstituents = 0;
   BoostedJet_chargedMultiplicity = 0;
   BoostedJet_electronEnergy = 0;
   BoostedJet_photonEnergy = 0;
   BoostedJet_tau1 = 0;
   BoostedJet_tau2 = 0;
   BoostedJet_tau3 = 0;
   BoostedJet_softdrop_mass = 0;
   BoostedJet_trimmed_mass = 0;
   BoostedJet_pruned_mass = 0;
   BoostedJet_filtered_mass = 0;
   BoostedJet_JesSF = 0;
   BoostedJet_JesSFup = 0;
   BoostedJet_JesSFdown = 0;
   BoostedJet_JerSF = 0;
   BoostedJet_JerSFup = 0;
   BoostedJet_JerSFdown = 0;
   TopTagging_topMass = 0;
   TopTagging_minMass = 0;
   TopTagging_wMass = 0;
   TopTagging_nSubJets = 0;
   TauJetness_numtau = 0;
   TauJetness_taupt = 0;
   TauJetness_taueta = 0;
   TauJetness_tauphi = 0;
   TauJetness_tauenergy = 0;
   TauJetness_charge = 0;
   TauJetness_againstMuonTight3 = 0;
   TauJetness_againstElectronMediumMVA6 = 0;
   TauJetness_againstElectronTightMVA6 = 0;
   TauJetness_byTightIsolationMVArun2v1DBnewDMwLT = 0;
   TauJetness_byVTightIsolationMVArun2v1DBnewDMwLT = 0;
   TauJetness_num_pdgid_leps = 0;
   TauJetness_num_pdgid_eles = 0;
   TauJetness_num_pdgid_mus = 0;
   TauJetness_num_soft_leps = 0;
   TauJetness_num_soft_eles = 0;
   TauJetness_num_vetonoipnoiso_leps = 0;
   TauJetness_num_vetonoipnoiso_eles = 0;
   TauJetness_num_loosenoipnoiso_leps = 0;
   TauJetness_num_loosenoipnoiso_eles = 0;
   TauJetness_num_loose_mus = 0;
   TauJetness_numtautrks = 0;
   TauJetness_numtautrkspv = 0;
   TauJetness_numtautrksnopv = 0;
   TauJetness_npvTrkOVcollTrk = 0;
   TauJetness_pvTrkOVcollTrk = 0;
   TauJetness_npvTrkOVpvTrk = 0;
   TauJetness_npvPtOVcollPt = 0;
   TauJetness_pvPtOVcollPt = 0;
   TauJetness_npvPtOVpvPt = 0;
   TauJetness_avnum2v = 0;
   TauJetness_avnumno2v = 0;
   TauJetness_avdca3d2t = 0;
   TauJetness_avdca3dno2t = 0;
   TauJetness_avdca3d = 0;
   TauJetness_avdca2d2t = 0;
   TauJetness_avdca2dno2t = 0;
   TauJetness_avdca2d = 0;
   TauJetness_chi2 = 0;
   TauJetness_avip3d_val = 0;
   TauJetness_avip3d_sig = 0;
   TauJetness_avsip3d_val = 0;
   TauJetness_avsip3d_sig = 0;
   TauJetness_avip2d_val = 0;
   TauJetness_avip2d_sig = 0;
   TauJetness_avsip2d_val = 0;
   TauJetness_avsip2d_sig = 0;
   TauJetness_avip1d_val = 0;
   TauJetness_avip1d_sig = 0;
   TauJetness_avsip1d_val = 0;
   TauJetness_avsip1d_sig = 0;
   BJetness_partonFlavour = 0;
   BJetness_hadronFlavour = 0;
   BJetness_numjet = 0;
   BJetness_jetpt = 0;
   BJetness_jeteta = 0;
   BJetness_jetphi = 0;
   BJetness_jetenergy = 0;
   BJetness_jetcsv = 0;
   BJetness_pfJetProbabilityBJetTags = 0;
   BJetness_pfCombinedMVAV2BJetTags = 0;
   BJetness_pfCombinedCvsLJetTags = 0;
   BJetness_pfCombinedCvsBJetTags = 0;
   BJetness_num_pdgid_leps = 0;
   BJetness_num_pdgid_eles = 0;
   BJetness_num_pdgid_mus = 0;
   BJetness_num_soft_leps = 0;
   BJetness_num_soft_eles = 0;
   BJetness_num_vetonoipnoiso_leps = 0;
   BJetness_num_vetonoipnoiso_eles = 0;
   BJetness_num_loosenoipnoiso_leps = 0;
   BJetness_num_loosenoipnoiso_eles = 0;
   BJetness_num_loose_mus = 0;
   BJetness_numjettrks = 0;
   BJetness_numjettrkspv = 0;
   BJetness_numjettrksnopv = 0;
   BJetness_npvTrkOVcollTrk = 0;
   BJetness_pvTrkOVcollTrk = 0;
   BJetness_npvTrkOVpvTrk = 0;
   BJetness_npvPtOVcollPt = 0;
   BJetness_pvPtOVcollPt = 0;
   BJetness_npvPtOVpvPt = 0;
   BJetness_avnum2v = 0;
   BJetness_avnumno2v = 0;
   BJetness_avdca3d2t = 0;
   BJetness_avdca3dno2t = 0;
   BJetness_avdca3d = 0;
   BJetness_avdca2d2t = 0;
   BJetness_avdca2dno2t = 0;
   BJetness_avdca2d = 0;
   BJetness_chi2 = 0;
   BJetness_avip3d_val = 0;
   BJetness_avip3d_sig = 0;
   BJetness_avsip3d_val = 0;
   BJetness_avsip3d_sig = 0;
   BJetness_avip2d_val = 0;
   BJetness_avip2d_sig = 0;
   BJetness_avsip2d_val = 0;
   BJetness_avsip2d_sig = 0;
   BJetness_avip1d_val = 0;
   BJetness_avip1d_sig = 0;
   BJetness_avsip1d_val = 0;
   BJetness_avsip1d_sig = 0;
   BJetnessFV_jetcsv = 0;
   BJetnessFV_pfJetProbabilityBJetTags = 0;
   BJetnessFV_pfCombinedMVAV2BJetTags = 0;
   BJetnessFV_num_loosenoipnoiso_leps = 0;
   BJetnessFV_numjettrksnopv = 0;
   BJetnessFV_pvTrkOVcollTrk = 0;
   BJetnessFV_avip3d_val = 0;
   BJetnessFV_avip3d_sig = 0;
   BJetnessFV_avsip3d_sig = 0;
   BJetnessFV_avip1d_sig = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Gen_pt", &Gen_pt, &b_Gen_pt);
   fChain->SetBranchAddress("Gen_eta", &Gen_eta, &b_Gen_eta);
   fChain->SetBranchAddress("Gen_phi", &Gen_phi, &b_Gen_phi);
   fChain->SetBranchAddress("Gen_p", &Gen_p, &b_Gen_p);
   fChain->SetBranchAddress("Gen_energy", &Gen_energy, &b_Gen_energy);
   fChain->SetBranchAddress("Gen_charge", &Gen_charge, &b_Gen_charge);
   fChain->SetBranchAddress("Gen_vx", &Gen_vx, &b_Gen_vx);
   fChain->SetBranchAddress("Gen_vy", &Gen_vy, &b_Gen_vy);
   fChain->SetBranchAddress("Gen_vz", &Gen_vz, &b_Gen_vz);
   fChain->SetBranchAddress("Gen_status", &Gen_status, &b_Gen_status);
   fChain->SetBranchAddress("Gen_pdg_id", &Gen_pdg_id, &b_Gen_pdg_id);
   fChain->SetBranchAddress("Gen_motherpdg_id", &Gen_motherpdg_id, &b_Gen_motherpdg_id);
   fChain->SetBranchAddress("Gen_numDaught", &Gen_numDaught, &b_Gen_numDaught);
   fChain->SetBranchAddress("Gen_numMother", &Gen_numMother, &b_Gen_numMother);
   fChain->SetBranchAddress("Gen_BmotherIndex", &Gen_BmotherIndex, &b_Gen_BmotherIndex);
   fChain->SetBranchAddress("Gen_BmotherIndices", &Gen_BmotherIndices, &b_Gen_BmotherIndices);
   fChain->SetBranchAddress("Gen_BdaughtIndices", &Gen_BdaughtIndices, &b_Gen_BdaughtIndices);
   fChain->SetBranchAddress("HiggsDecay", &HiggsDecay, &b_HiggsDecay);
   fChain->SetBranchAddress("ttHFCategory", &ttHFCategory, &b_ttHFCategory);
   fChain->SetBranchAddress("EVENT_event", &EVENT_event, &b_EVENT_event);
   fChain->SetBranchAddress("EVENT_run", &EVENT_run, &b_EVENT_run);
   fChain->SetBranchAddress("EVENT_lumiBlock", &EVENT_lumiBlock, &b_EVENT_lumiBlock);
   fChain->SetBranchAddress("EVENT_genWeight", &EVENT_genWeight, &b_EVENT_genWeight);
   fChain->SetBranchAddress("EVENT_rhopog", &EVENT_rhopog, &b_EVENT_rhopog);
   fChain->SetBranchAddress("EVENT_rhotth", &EVENT_rhotth, &b_EVENT_rhotth);
   fChain->SetBranchAddress("EVENT_fixedGridRhoFastjetCentral", &EVENT_fixedGridRhoFastjetCentral, &b_EVENT_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("EVENT_fixedGridRhoFastjetCentralChargedPileUp", &EVENT_fixedGridRhoFastjetCentralChargedPileUp, &b_EVENT_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("EVENT_fixedGridRhoFastjetCentralNeutral", &EVENT_fixedGridRhoFastjetCentralNeutral, &b_EVENT_fixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Ele105_CaloIdVT_GsfTrkIdT", &HLT_Ele105_CaloIdVT_GsfTrkIdT, &b_HLT_Ele105_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WP75_Gsf", &HLT_Ele27_eta2p1_WP75_Gsf, &b_HLT_Ele27_eta2p1_WP75_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_WP85_Gsf", &HLT_Ele27_WP85_Gsf, &b_HLT_Ele27_WP85_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf", &HLT_Ele27_eta2p1_WPLoose_Gsf, &b_HLT_Ele27_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Mu45_eta2p1", &HLT_Mu45_eta2p1, &b_HLT_Mu45_eta2p1);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_IsoMu17_eta2p1", &HLT_IsoMu17_eta2p1, &b_HLT_IsoMu17_eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1", &HLT_IsoMu24_eta2p1, &b_HLT_IsoMu24_eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu18", &HLT_IsoMu18, &b_HLT_IsoMu18);
   fChain->SetBranchAddress("HLT_Ele23_WPLoose_Gsf", &HLT_Ele23_WPLoose_Gsf, &b_HLT_Ele23_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_IsoTkMu20", &HLT_IsoTkMu20, &b_HLT_IsoTkMu20);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_TripleMu_12_10_5", &HLT_TripleMu_12_10_5, &b_HLT_TripleMu_12_10_5);
   fChain->SetBranchAddress("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL, &b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_GsfTrkIdVL", &HLT_DoubleEle33_CaloIdL_GsfTrkIdVL, &b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL);
   fChain->SetBranchAddress("TTHbb_SL", &TTHbb_SL, &b_TTHbb_SL);
   fChain->SetBranchAddress("TTHbb_DL", &TTHbb_DL, &b_TTHbb_DL);
   fChain->SetBranchAddress("TTHLep_2Mu", &TTHLep_2Mu, &b_TTHLep_2Mu);
   fChain->SetBranchAddress("TTHLep_2Ele", &TTHLep_2Ele, &b_TTHLep_2Ele);
   fChain->SetBranchAddress("TTHLep_MuEle", &TTHLep_MuEle, &b_TTHLep_MuEle);
   fChain->SetBranchAddress("TTHLep_3L4L", &TTHLep_3L4L, &b_TTHLep_3L4L);
   fChain->SetBranchAddress("pvertex_notempty", &pvertex_notempty, &b_pvertex_notempty);
   fChain->SetBranchAddress("nBestVtx", &nBestVtx, &b_nBestVtx);
   fChain->SetBranchAddress("npuVertices", &npuVertices, &b_npuVertices);
   fChain->SetBranchAddress("trueInteractions", &trueInteractions, &b_trueInteractions);
   fChain->SetBranchAddress("ootnpuVertices", &ootnpuVertices, &b_ootnpuVertices);
   fChain->SetBranchAddress("npuVerticesm1", &npuVerticesm1, &b_npuVerticesm1);
   fChain->SetBranchAddress("npuVerticesp1", &npuVerticesp1, &b_npuVerticesp1);
   fChain->SetBranchAddress("pvertex_ndof", &pvertex_ndof, &b_pvertex_ndof);
   fChain->SetBranchAddress("pvertex_dxy", &pvertex_dxy, &b_pvertex_dxy);
   fChain->SetBranchAddress("pvertex_x", &pvertex_x, &b_pvertex_x);
   fChain->SetBranchAddress("pvertex_y", &pvertex_y, &b_pvertex_y);
   fChain->SetBranchAddress("pvertex_z", &pvertex_z, &b_pvertex_z);
   fChain->SetBranchAddress("pvertex_xError", &pvertex_xError, &b_pvertex_xError);
   fChain->SetBranchAddress("pvertex_yError", &pvertex_yError, &b_pvertex_yError);
   fChain->SetBranchAddress("pvertex_zError", &pvertex_zError, &b_pvertex_zError);
   fChain->SetBranchAddress("beamSpot_x0", &beamSpot_x0, &b_beamSpot_x0);
   fChain->SetBranchAddress("beamSpot_y0", &beamSpot_y0, &b_beamSpot_y0);
   fChain->SetBranchAddress("beamSpot_z0", &beamSpot_z0, &b_beamSpot_z0);
   fChain->SetBranchAddress("beamSpot_xWidth", &beamSpot_xWidth, &b_beamSpot_xWidth);
   fChain->SetBranchAddress("beamSpot_yWidth", &beamSpot_yWidth, &b_beamSpot_yWidth);
   fChain->SetBranchAddress("Muon_pt", &Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_eta", &Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_phi", &Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_energy", &Muon_energy, &b_Muon_energy);
   fChain->SetBranchAddress("Muon_px", &Muon_px, &b_Muon_px);
   fChain->SetBranchAddress("Muon_py", &Muon_py, &b_Muon_py);
   fChain->SetBranchAddress("Muon_pz", &Muon_pz, &b_Muon_pz);
   fChain->SetBranchAddress("Muon_p", &Muon_p, &b_Muon_p);
//    fChain->SetBranchAddress("Muon_p", &Muon_p, &b_Muon_p);
   fChain->SetBranchAddress("Muon_dB", &Muon_dB, &b_Muon_dB);
   fChain->SetBranchAddress("Muon_pt_it", &Muon_pt_it, &b_Muon_pt_it);
   fChain->SetBranchAddress("Muon_ptErr_it", &Muon_ptErr_it, &b_Muon_ptErr_it);
   fChain->SetBranchAddress("Muon_pTErrOVpT_it", &Muon_pTErrOVpT_it, &b_Muon_pTErrOVpT_it);
   fChain->SetBranchAddress("Muon_pt_bt", &Muon_pt_bt, &b_Muon_pt_bt);
   fChain->SetBranchAddress("Muon_ptErr_bt", &Muon_ptErr_bt, &b_Muon_ptErr_bt);
   fChain->SetBranchAddress("Muon_pTErrOVpT_bt", &Muon_pTErrOVpT_bt, &b_Muon_pTErrOVpT_bt);
   fChain->SetBranchAddress("Muon_pt_tunePbt", &Muon_pt_tunePbt, &b_Muon_pt_tunePbt);
   fChain->SetBranchAddress("Muon_charge", &Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_soft", &Muon_soft, &b_Muon_soft);
   fChain->SetBranchAddress("Muon_loose", &Muon_loose, &b_Muon_loose);
   fChain->SetBranchAddress("Muon_medium", &Muon_medium, &b_Muon_medium);
   fChain->SetBranchAddress("Muon_tight", &Muon_tight, &b_Muon_tight);
   fChain->SetBranchAddress("Muon_isHighPt", &Muon_isHighPt, &b_Muon_isHighPt);
   fChain->SetBranchAddress("Muon_POGisGood", &Muon_POGisGood, &b_Muon_POGisGood);
   fChain->SetBranchAddress("Muon_pdgId", &Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_pf", &Muon_pf, &b_Muon_pf);
   fChain->SetBranchAddress("Muon_isGlobal", &Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isTrackerMuon", &Muon_isTrackerMuon, &b_Muon_isTrackerMuon);
   fChain->SetBranchAddress("Muon_tunePBestTrackType", &Muon_tunePBestTrackType, &b_Muon_tunePBestTrackType);
   fChain->SetBranchAddress("Muon_isoR04Charged", &Muon_isoR04Charged, &b_Muon_isoR04Charged);
   fChain->SetBranchAddress("Muon_isoR04NeutralHadron", &Muon_isoR04NeutralHadron, &b_Muon_isoR04NeutralHadron);
   fChain->SetBranchAddress("Muon_isoR04Photon", &Muon_isoR04Photon, &b_Muon_isoR04Photon);
   fChain->SetBranchAddress("Muon_isoR04PU", &Muon_isoR04PU, &b_Muon_isoR04PU);
   fChain->SetBranchAddress("Muon_relIsoDeltaBetaR04", &Muon_relIsoDeltaBetaR04, &b_Muon_relIsoDeltaBetaR04);
   fChain->SetBranchAddress("Muon_isoR04CharParPt", &Muon_isoR04CharParPt, &b_Muon_isoR04CharParPt);
   fChain->SetBranchAddress("Muon_isoR03Charged", &Muon_isoR03Charged, &b_Muon_isoR03Charged);
   fChain->SetBranchAddress("Muon_isoR03NeutralHadron", &Muon_isoR03NeutralHadron, &b_Muon_isoR03NeutralHadron);
   fChain->SetBranchAddress("Muon_isoR03Photon", &Muon_isoR03Photon, &b_Muon_isoR03Photon);
   fChain->SetBranchAddress("Muon_isoR03PU", &Muon_isoR03PU, &b_Muon_isoR03PU);
   fChain->SetBranchAddress("Muon_relIsoDeltaBetaR03", &Muon_relIsoDeltaBetaR03, &b_Muon_relIsoDeltaBetaR03);
   fChain->SetBranchAddress("Muon_isoR03CharParPt", &Muon_isoR03CharParPt, &b_Muon_isoR03CharParPt);
   fChain->SetBranchAddress("Muon_trackIso", &Muon_trackIso, &b_Muon_trackIso);
   fChain->SetBranchAddress("Muon_TrackerIso", &Muon_TrackerIso, &b_Muon_TrackerIso);
   fChain->SetBranchAddress("Muon_ecalIso", &Muon_ecalIso, &b_Muon_ecalIso);
   fChain->SetBranchAddress("Muon_hcalIso", &Muon_hcalIso, &b_Muon_hcalIso);
   fChain->SetBranchAddress("Muon_caloIso", &Muon_caloIso, &b_Muon_caloIso);
   fChain->SetBranchAddress("Muon_isoSum", &Muon_isoSum, &b_Muon_isoSum);
   fChain->SetBranchAddress("Muon_pfEcalEnergy", &Muon_pfEcalEnergy, &b_Muon_pfEcalEnergy);
   fChain->SetBranchAddress("Muon_chi2", &Muon_chi2, &b_Muon_chi2);
   fChain->SetBranchAddress("Muon_chi2LocalPosition", &Muon_chi2LocalPosition, &b_Muon_chi2LocalPosition);
   fChain->SetBranchAddress("Muon_matchedStat", &Muon_matchedStat, &b_Muon_matchedStat);
   fChain->SetBranchAddress("Muon_validHits", &Muon_validHits, &b_Muon_validHits);
   fChain->SetBranchAddress("Muon_validHitsInner", &Muon_validHitsInner, &b_Muon_validHitsInner);
   fChain->SetBranchAddress("Muon_TLayers", &Muon_TLayers, &b_Muon_TLayers);
   fChain->SetBranchAddress("Muon_ndof", &Muon_ndof, &b_Muon_ndof);
   fChain->SetBranchAddress("Muon_validFraction", &Muon_validFraction, &b_Muon_validFraction);
   fChain->SetBranchAddress("Muon_pixelLayersWithMeasurement", &Muon_pixelLayersWithMeasurement, &b_Muon_pixelLayersWithMeasurement);
   fChain->SetBranchAddress("Muon_qualityhighPurity", &Muon_qualityhighPurity, &b_Muon_qualityhighPurity);
   fChain->SetBranchAddress("Muon_trkKink", &Muon_trkKink, &b_Muon_trkKink);
   fChain->SetBranchAddress("Muon_segmentCompatibility", &Muon_segmentCompatibility, &b_Muon_segmentCompatibility);
   fChain->SetBranchAddress("Muon_dxy_pv", &Muon_dxy_pv, &b_Muon_dxy_pv);
   fChain->SetBranchAddress("Muon_dz_pv", &Muon_dz_pv, &b_Muon_dz_pv);
   fChain->SetBranchAddress("Muon_dz_bs", &Muon_dz_bs, &b_Muon_dz_bs);
   fChain->SetBranchAddress("Muon_dxy_bs", &Muon_dxy_bs, &b_Muon_dxy_bs);
   fChain->SetBranchAddress("Muon_dzError", &Muon_dzError, &b_Muon_dzError);
   fChain->SetBranchAddress("Muon_dxyError", &Muon_dxyError, &b_Muon_dxyError);
   fChain->SetBranchAddress("Muon_vtx", &Muon_vtx, &b_Muon_vtx);
   fChain->SetBranchAddress("Muon_vty", &Muon_vty, &b_Muon_vty);
   fChain->SetBranchAddress("Muon_vtz", &Muon_vtz, &b_Muon_vtz);
   fChain->SetBranchAddress("Muon_miniIsoRel", &Muon_miniIsoRel, &b_Muon_miniIsoRel);
   fChain->SetBranchAddress("Muon_miniIsoCh", &Muon_miniIsoCh, &b_Muon_miniIsoCh);
   fChain->SetBranchAddress("Muon_miniIsoNeu", &Muon_miniIsoNeu, &b_Muon_miniIsoNeu);
   fChain->SetBranchAddress("Muon_miniIsoPUsub", &Muon_miniIsoPUsub, &b_Muon_miniIsoPUsub);
   fChain->SetBranchAddress("Muon_jetdr", &Muon_jetdr, &b_Muon_jetdr);
   fChain->SetBranchAddress("Muon_jetpt", &Muon_jetpt, &b_Muon_jetpt);
   fChain->SetBranchAddress("Muon_jetptratio", &Muon_jetptratio, &b_Muon_jetptratio);
   fChain->SetBranchAddress("Muon_jetcsv", &Muon_jetcsv, &b_Muon_jetcsv);
   fChain->SetBranchAddress("Muon_ptrel", &Muon_ptrel, &b_Muon_ptrel);
   fChain->SetBranchAddress("Muon_IP3Dsig_it", &Muon_IP3Dsig_it, &b_Muon_IP3Dsig_it);
   fChain->SetBranchAddress("Muon_pvass", &Muon_pvass, &b_Muon_pvass);
   fChain->SetBranchAddress("Muon_etarel", &Muon_etarel, &b_Muon_etarel);
   fChain->SetBranchAddress("Muon_ptOVen", &Muon_ptOVen, &b_Muon_ptOVen);
   fChain->SetBranchAddress("Muon_mujet_pfJetProbabilityBJetTag", &Muon_mujet_pfJetProbabilityBJetTag, &b_Muon_mujet_pfJetProbabilityBJetTag);
   fChain->SetBranchAddress("Muon_mujet_pfCombinedMVABJetTags", &Muon_mujet_pfCombinedMVABJetTags, &b_Muon_mujet_pfCombinedMVABJetTags);
   fChain->SetBranchAddress("Muon_mujet_qgl", &Muon_mujet_qgl, &b_Muon_mujet_qgl);
   fChain->SetBranchAddress("Muon_mumass", &Muon_mumass, &b_Muon_mumass);
   fChain->SetBranchAddress("Muon_mujet_mass", &Muon_mujet_mass, &b_Muon_mujet_mass);
   fChain->SetBranchAddress("Muon_mujet_Wmass", &Muon_mujet_Wmass, &b_Muon_mujet_Wmass);
   fChain->SetBranchAddress("Muon_mujet_Topmass", &Muon_mujet_Topmass, &b_Muon_mujet_Topmass);
   fChain->SetBranchAddress("Muon_mujet_WTopmass", &Muon_mujet_WTopmass, &b_Muon_mujet_WTopmass);
   fChain->SetBranchAddress("Muon_IP3D_val", &Muon_IP3D_val, &b_Muon_IP3D_val);
   fChain->SetBranchAddress("Muon_IP3D_err", &Muon_IP3D_err, &b_Muon_IP3D_err);
   fChain->SetBranchAddress("Muon_IP3D_sig", &Muon_IP3D_sig, &b_Muon_IP3D_sig);
   fChain->SetBranchAddress("Muon_IP2D_val", &Muon_IP2D_val, &b_Muon_IP2D_val);
   fChain->SetBranchAddress("Muon_IP2D_err", &Muon_IP2D_err, &b_Muon_IP2D_err);
   fChain->SetBranchAddress("Muon_IP2D_sig", &Muon_IP2D_sig, &b_Muon_IP2D_sig);
   fChain->SetBranchAddress("Muon_sIP3D_val", &Muon_sIP3D_val, &b_Muon_sIP3D_val);
   fChain->SetBranchAddress("Muon_sIP3D_err", &Muon_sIP3D_err, &b_Muon_sIP3D_err);
   fChain->SetBranchAddress("Muon_sIP3D_sig", &Muon_sIP3D_sig, &b_Muon_sIP3D_sig);
   fChain->SetBranchAddress("Muon_sIP2D_val", &Muon_sIP2D_val, &b_Muon_sIP2D_val);
   fChain->SetBranchAddress("Muon_sIP2D_err", &Muon_sIP2D_err, &b_Muon_sIP2D_err);
   fChain->SetBranchAddress("Muon_sIP2D_sig", &Muon_sIP2D_sig, &b_Muon_sIP2D_sig);
   fChain->SetBranchAddress("Muon_IP1D_val", &Muon_IP1D_val, &b_Muon_IP1D_val);
   fChain->SetBranchAddress("Muon_IP1D_err", &Muon_IP1D_err, &b_Muon_IP1D_err);
   fChain->SetBranchAddress("Muon_IP1D_sig", &Muon_IP1D_sig, &b_Muon_IP1D_sig);
   fChain->SetBranchAddress("Muon_sIP1D_val", &Muon_sIP1D_val, &b_Muon_sIP1D_val);
   fChain->SetBranchAddress("Muon_sIP1D_err", &Muon_sIP1D_err, &b_Muon_sIP1D_err);
   fChain->SetBranchAddress("Muon_sIP1D_sig", &Muon_sIP1D_sig, &b_Muon_sIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxIP3D_val", &Muon_lepjetMaxIP3D_val, &b_Muon_lepjetMaxIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxIP3D_sig", &Muon_lepjetMaxIP3D_sig, &b_Muon_lepjetMaxIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP3D_val", &Muon_lepjetMaxsIP3D_val, &b_Muon_lepjetMaxsIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP3D_sig", &Muon_lepjetMaxsIP3D_sig, &b_Muon_lepjetMaxsIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxIP2D_val", &Muon_lepjetMaxIP2D_val, &b_Muon_lepjetMaxIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxIP2D_sig", &Muon_lepjetMaxIP2D_sig, &b_Muon_lepjetMaxIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP2D_val", &Muon_lepjetMaxsIP2D_val, &b_Muon_lepjetMaxsIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP2D_sig", &Muon_lepjetMaxsIP2D_sig, &b_Muon_lepjetMaxsIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxIP1D_val", &Muon_lepjetMaxIP1D_val, &b_Muon_lepjetMaxIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxIP1D_sig", &Muon_lepjetMaxIP1D_sig, &b_Muon_lepjetMaxIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP1D_val", &Muon_lepjetMaxsIP1D_val, &b_Muon_lepjetMaxsIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP1D_sig", &Muon_lepjetMaxsIP1D_sig, &b_Muon_lepjetMaxsIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvIP3D_val", &Muon_lepjetAvIP3D_val, &b_Muon_lepjetAvIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetAvIP3D_sig", &Muon_lepjetAvIP3D_sig, &b_Muon_lepjetAvIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvsIP3D_val", &Muon_lepjetAvsIP3D_val, &b_Muon_lepjetAvsIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetAvsIP3D_sig", &Muon_lepjetAvsIP3D_sig, &b_Muon_lepjetAvsIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvIP2D_val", &Muon_lepjetAvIP2D_val, &b_Muon_lepjetAvIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetAvIP2D_sig", &Muon_lepjetAvIP2D_sig, &b_Muon_lepjetAvIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvsIP2D_val", &Muon_lepjetAvsIP2D_val, &b_Muon_lepjetAvsIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetAvsIP2D_sig", &Muon_lepjetAvsIP2D_sig, &b_Muon_lepjetAvsIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvIP1D_val", &Muon_lepjetAvIP1D_val, &b_Muon_lepjetAvIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetAvIP1D_sig", &Muon_lepjetAvIP1D_sig, &b_Muon_lepjetAvIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvsIP1D_val", &Muon_lepjetAvsIP1D_val, &b_Muon_lepjetAvsIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetAvsIP1D_sig", &Muon_lepjetAvsIP1D_sig, &b_Muon_lepjetAvsIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetchtrks", &Muon_lepjetchtrks, &b_Muon_lepjetchtrks);
   fChain->SetBranchAddress("Muon_lepjetpvchtrks", &Muon_lepjetpvchtrks, &b_Muon_lepjetpvchtrks);
   fChain->SetBranchAddress("Muon_lepjetnonpvchtrks", &Muon_lepjetnonpvchtrks, &b_Muon_lepjetnonpvchtrks);
   fChain->SetBranchAddress("Muon_lepjetndaus", &Muon_lepjetndaus, &b_Muon_lepjetndaus);
   fChain->SetBranchAddress("Muon_lepjetpvchi2", &Muon_lepjetpvchi2, &b_Muon_lepjetpvchi2);
   fChain->SetBranchAddress("Muon_lepjetnumno2trk", &Muon_lepjetnumno2trk, &b_Muon_lepjetnumno2trk);
   fChain->SetBranchAddress("Muon_gen_pt", &Muon_gen_pt, &b_Muon_gen_pt);
   fChain->SetBranchAddress("Muon_gen_eta", &Muon_gen_eta, &b_Muon_gen_eta);
   fChain->SetBranchAddress("Muon_gen_phi", &Muon_gen_phi, &b_Muon_gen_phi);
   fChain->SetBranchAddress("Muon_gen_en", &Muon_gen_en, &b_Muon_gen_en);
   fChain->SetBranchAddress("Muon_gen_pdgId", &Muon_gen_pdgId, &b_Muon_gen_pdgId);
   fChain->SetBranchAddress("Muon_gen_isPromptFinalState", &Muon_gen_isPromptFinalState, &b_Muon_gen_isPromptFinalState);
   fChain->SetBranchAddress("Muon_gen_isDirectPromptTauDecayProductFinalState", &Muon_gen_isDirectPromptTauDecayProductFinalState, &b_Muon_gen_isDirectPromptTauDecayProductFinalState);
   fChain->SetBranchAddress("patElectron_pt", &patElectron_pt, &b_patElectron_pt);
   fChain->SetBranchAddress("patElectron_eta", &patElectron_eta, &b_patElectron_eta);
   fChain->SetBranchAddress("patElectron_phi", &patElectron_phi, &b_patElectron_phi);
   fChain->SetBranchAddress("patElectron_energy", &patElectron_energy, &b_patElectron_energy);
   fChain->SetBranchAddress("patElectron_px", &patElectron_px, &b_patElectron_px);
   fChain->SetBranchAddress("patElectron_py", &patElectron_py, &b_patElectron_py);
   fChain->SetBranchAddress("patElectron_pz", &patElectron_pz, &b_patElectron_pz);
   fChain->SetBranchAddress("patElectron_p", &patElectron_p, &b_patElectron_p);
   fChain->SetBranchAddress("patElectron_Et", &patElectron_Et, &b_patElectron_Et);
   fChain->SetBranchAddress("patElectron_SCeta", &patElectron_SCeta, &b_patElectron_SCeta);
   fChain->SetBranchAddress("patElectron_inCrack", &patElectron_inCrack, &b_patElectron_inCrack);
   fChain->SetBranchAddress("patElectron_charge", &patElectron_charge, &b_patElectron_charge);
   fChain->SetBranchAddress("patElectron_isPassVeto", &patElectron_isPassVeto, &b_patElectron_isPassVeto);
   fChain->SetBranchAddress("patElectron_isPassLoose", &patElectron_isPassLoose, &b_patElectron_isPassLoose);
   fChain->SetBranchAddress("patElectron_isPassMedium", &patElectron_isPassMedium, &b_patElectron_isPassMedium);
   fChain->SetBranchAddress("patElectron_isPassTight", &patElectron_isPassTight, &b_patElectron_isPassTight);
   fChain->SetBranchAddress("patElectron_isPassHEEPId", &patElectron_isPassHEEPId, &b_patElectron_isPassHEEPId);
   fChain->SetBranchAddress("patElectron_isPassMvatrig", &patElectron_isPassMvatrig, &b_patElectron_isPassMvatrig);
   fChain->SetBranchAddress("patElectron_isPassMvanontrig", &patElectron_isPassMvanontrig, &b_patElectron_isPassMvanontrig);
   fChain->SetBranchAddress("patElectron_isPassMvatrigwp90", &patElectron_isPassMvatrigwp90, &b_patElectron_isPassMvatrigwp90);
   fChain->SetBranchAddress("patElectron_isPassMvanontrigwp90", &patElectron_isPassMvanontrigwp90, &b_patElectron_isPassMvanontrigwp90);
   fChain->SetBranchAddress("patElectron_pdgId", &patElectron_pdgId, &b_patElectron_pdgId);
   fChain->SetBranchAddress("patElectron_isEcalDriven", &patElectron_isEcalDriven, &b_patElectron_isEcalDriven);
   fChain->SetBranchAddress("patElectron_mvaValue_nonTrig", &patElectron_mvaValue_nonTrig, &b_patElectron_mvaValue_nonTrig);
   fChain->SetBranchAddress("patElectron_mvaCategory_nonTrig", &patElectron_mvaCategory_nonTrig, &b_patElectron_mvaCategory_nonTrig);
   fChain->SetBranchAddress("patElectron_mvaValue_Trig", &patElectron_mvaValue_Trig, &b_patElectron_mvaValue_Trig);
   fChain->SetBranchAddress("patElectron_mvaCategory_Trig", &patElectron_mvaCategory_Trig, &b_patElectron_mvaCategory_Trig);
   fChain->SetBranchAddress("patElectron_isoChargedHadrons", &patElectron_isoChargedHadrons, &b_patElectron_isoChargedHadrons);
   fChain->SetBranchAddress("patElectron_isoNeutralHadrons", &patElectron_isoNeutralHadrons, &b_patElectron_isoNeutralHadrons);
   fChain->SetBranchAddress("patElectron_isoPhotons", &patElectron_isoPhotons, &b_patElectron_isoPhotons);
   fChain->SetBranchAddress("patElectron_isoPU", &patElectron_isoPU, &b_patElectron_isoPU);
   fChain->SetBranchAddress("patElectron_relIsoDeltaBeta", &patElectron_relIsoDeltaBeta, &b_patElectron_relIsoDeltaBeta);
   fChain->SetBranchAddress("patElectron_relIsoRhoEA", &patElectron_relIsoRhoEA, &b_patElectron_relIsoRhoEA);
   fChain->SetBranchAddress("patElectron_dr03EcalRecHitSumEt", &patElectron_dr03EcalRecHitSumEt, &b_patElectron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("patElectron_dr03HcalDepth1TowerSumEt", &patElectron_dr03HcalDepth1TowerSumEt, &b_patElectron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("patElectron_isolPtTracks", &patElectron_isolPtTracks, &b_patElectron_isolPtTracks);
   fChain->SetBranchAddress("patElectron_ecalPFClusterIso", &patElectron_ecalPFClusterIso, &b_patElectron_ecalPFClusterIso);
   fChain->SetBranchAddress("patElectron_hcalPFClusterIso", &patElectron_hcalPFClusterIso, &b_patElectron_hcalPFClusterIso);
   fChain->SetBranchAddress("patElectron_dEtaIn", &patElectron_dEtaIn, &b_patElectron_dEtaIn);
   fChain->SetBranchAddress("patElectron_dPhiIn", &patElectron_dPhiIn, &b_patElectron_dPhiIn);
   fChain->SetBranchAddress("patElectron_full5x5_sigmaIetaIeta", &patElectron_full5x5_sigmaIetaIeta, &b_patElectron_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("patElectron_full5x5_e2x5Max", &patElectron_full5x5_e2x5Max, &b_patElectron_full5x5_e2x5Max);
   fChain->SetBranchAddress("patElectron_full5x5_e5x5", &patElectron_full5x5_e5x5, &b_patElectron_full5x5_e5x5);
   fChain->SetBranchAddress("patElectron_full5x5_e1x5", &patElectron_full5x5_e1x5, &b_patElectron_full5x5_e1x5);
   fChain->SetBranchAddress("patElectron_hOverE", &patElectron_hOverE, &b_patElectron_hOverE);
   fChain->SetBranchAddress("patElectron_ooEmooP", &patElectron_ooEmooP, &b_patElectron_ooEmooP);
   fChain->SetBranchAddress("patElectron_passConversionVeto", &patElectron_passConversionVeto, &b_patElectron_passConversionVeto);
   fChain->SetBranchAddress("patElectron_expectedMissingInnerHits", &patElectron_expectedMissingInnerHits, &b_patElectron_expectedMissingInnerHits);
   fChain->SetBranchAddress("patElectron_gsfTrack_ndof", &patElectron_gsfTrack_ndof, &b_patElectron_gsfTrack_ndof);
   fChain->SetBranchAddress("patElectron_gsfTrack_normChi2", &patElectron_gsfTrack_normChi2, &b_patElectron_gsfTrack_normChi2);
   fChain->SetBranchAddress("patElectron_gsfTrack_dz_pv", &patElectron_gsfTrack_dz_pv, &b_patElectron_gsfTrack_dz_pv);
   fChain->SetBranchAddress("patElectron_gsfTrack_dxy_pv", &patElectron_gsfTrack_dxy_pv, &b_patElectron_gsfTrack_dxy_pv);
   fChain->SetBranchAddress("patElectron_d0", &patElectron_d0, &b_patElectron_d0);
   fChain->SetBranchAddress("patElectron_dzError", &patElectron_dzError, &b_patElectron_dzError);
   fChain->SetBranchAddress("patElectron_dxyError", &patElectron_dxyError, &b_patElectron_dxyError);
   fChain->SetBranchAddress("patElectron_gsfTrack_vtx", &patElectron_gsfTrack_vtx, &b_patElectron_gsfTrack_vtx);
   fChain->SetBranchAddress("patElectron_gsfTrack_vty", &patElectron_gsfTrack_vty, &b_patElectron_gsfTrack_vty);
   fChain->SetBranchAddress("patElectron_gsfTrack_vtz", &patElectron_gsfTrack_vtz, &b_patElectron_gsfTrack_vtz);
   fChain->SetBranchAddress("patElectron_miniIsoRel", &patElectron_miniIsoRel, &b_patElectron_miniIsoRel);
   fChain->SetBranchAddress("patElectron_miniIsoCh", &patElectron_miniIsoCh, &b_patElectron_miniIsoCh);
   fChain->SetBranchAddress("patElectron_miniIsoNeu", &patElectron_miniIsoNeu, &b_patElectron_miniIsoNeu);
   fChain->SetBranchAddress("patElectron_miniIsoPUsub", &patElectron_miniIsoPUsub, &b_patElectron_miniIsoPUsub);
   fChain->SetBranchAddress("patElectron_jetdr", &patElectron_jetdr, &b_patElectron_jetdr);
   fChain->SetBranchAddress("patElectron_jetpt", &patElectron_jetpt, &b_patElectron_jetpt);
   fChain->SetBranchAddress("patElectron_jetptratio", &patElectron_jetptratio, &b_patElectron_jetptratio);
   fChain->SetBranchAddress("patElectron_jetcsv", &patElectron_jetcsv, &b_patElectron_jetcsv);
   fChain->SetBranchAddress("patElectron_ptrel", &patElectron_ptrel, &b_patElectron_ptrel);
   fChain->SetBranchAddress("patElectron_IP3Dsig", &patElectron_IP3Dsig, &b_patElectron_IP3Dsig);
   fChain->SetBranchAddress("patElectron_eleMVASpring15NonTrig25ns", &patElectron_eleMVASpring15NonTrig25ns, &b_patElectron_eleMVASpring15NonTrig25ns);
   fChain->SetBranchAddress("patElectron_eleMVASpring15NonTrig25ns_VL", &patElectron_eleMVASpring15NonTrig25ns_VL, &b_patElectron_eleMVASpring15NonTrig25ns_VL);
   fChain->SetBranchAddress("patElectron_pvass", &patElectron_pvass, &b_patElectron_pvass);
   fChain->SetBranchAddress("patElectron_etarel", &patElectron_etarel, &b_patElectron_etarel);
   fChain->SetBranchAddress("patElectron_ptOVen", &patElectron_ptOVen, &b_patElectron_ptOVen);
   fChain->SetBranchAddress("patElectron_elejet_pfJetProbabilityBJetTag", &patElectron_elejet_pfJetProbabilityBJetTag, &b_patElectron_elejet_pfJetProbabilityBJetTag);
   fChain->SetBranchAddress("patElectron_elejet_pfCombinedMVABJetTags", &patElectron_elejet_pfCombinedMVABJetTags, &b_patElectron_elejet_pfCombinedMVABJetTags);
   fChain->SetBranchAddress("patElectron_elejet_qgl", &patElectron_elejet_qgl, &b_patElectron_elejet_qgl);
   fChain->SetBranchAddress("patElectron_elemass", &patElectron_elemass, &b_patElectron_elemass);
   fChain->SetBranchAddress("patElectron_elejet_mass", &patElectron_elejet_mass, &b_patElectron_elejet_mass);
   fChain->SetBranchAddress("patElectron_elejet_Wmass", &patElectron_elejet_Wmass, &b_patElectron_elejet_Wmass);
   fChain->SetBranchAddress("patElectron_elejet_Topmass", &patElectron_elejet_Topmass, &b_patElectron_elejet_Topmass);
   fChain->SetBranchAddress("patElectron_elejet_WTopmass", &patElectron_elejet_WTopmass, &b_patElectron_elejet_WTopmass);
   fChain->SetBranchAddress("patElectron_IP3D_val", &patElectron_IP3D_val, &b_patElectron_IP3D_val);
   fChain->SetBranchAddress("patElectron_IP3D_err", &patElectron_IP3D_err, &b_patElectron_IP3D_err);
   fChain->SetBranchAddress("patElectron_IP3D_sig", &patElectron_IP3D_sig, &b_patElectron_IP3D_sig);
   fChain->SetBranchAddress("patElectron_IP2D_val", &patElectron_IP2D_val, &b_patElectron_IP2D_val);
   fChain->SetBranchAddress("patElectron_IP2D_err", &patElectron_IP2D_err, &b_patElectron_IP2D_err);
   fChain->SetBranchAddress("patElectron_IP2D_sig", &patElectron_IP2D_sig, &b_patElectron_IP2D_sig);
   fChain->SetBranchAddress("patElectron_sIP3D_val", &patElectron_sIP3D_val, &b_patElectron_sIP3D_val);
   fChain->SetBranchAddress("patElectron_sIP3D_err", &patElectron_sIP3D_err, &b_patElectron_sIP3D_err);
   fChain->SetBranchAddress("patElectron_sIP3D_sig", &patElectron_sIP3D_sig, &b_patElectron_sIP3D_sig);
   fChain->SetBranchAddress("patElectron_sIP2D_val", &patElectron_sIP2D_val, &b_patElectron_sIP2D_val);
   fChain->SetBranchAddress("patElectron_sIP2D_err", &patElectron_sIP2D_err, &b_patElectron_sIP2D_err);
   fChain->SetBranchAddress("patElectron_sIP2D_sig", &patElectron_sIP2D_sig, &b_patElectron_sIP2D_sig);
   fChain->SetBranchAddress("patElectron_IP1D_val", &patElectron_IP1D_val, &b_patElectron_IP1D_val);
   fChain->SetBranchAddress("patElectron_IP1D_err", &patElectron_IP1D_err, &b_patElectron_IP1D_err);
   fChain->SetBranchAddress("patElectron_IP1D_sig", &patElectron_IP1D_sig, &b_patElectron_IP1D_sig);
   fChain->SetBranchAddress("patElectron_sIP1D_val", &patElectron_sIP1D_val, &b_patElectron_sIP1D_val);
   fChain->SetBranchAddress("patElectron_sIP1D_err", &patElectron_sIP1D_err, &b_patElectron_sIP1D_err);
   fChain->SetBranchAddress("patElectron_sIP1D_sig", &patElectron_sIP1D_sig, &b_patElectron_sIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP3D_val", &patElectron_lepjetMaxIP3D_val, &b_patElectron_lepjetMaxIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP3D_sig", &patElectron_lepjetMaxIP3D_sig, &b_patElectron_lepjetMaxIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP3D_val", &patElectron_lepjetMaxsIP3D_val, &b_patElectron_lepjetMaxsIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP3D_sig", &patElectron_lepjetMaxsIP3D_sig, &b_patElectron_lepjetMaxsIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP2D_val", &patElectron_lepjetMaxIP2D_val, &b_patElectron_lepjetMaxIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP2D_sig", &patElectron_lepjetMaxIP2D_sig, &b_patElectron_lepjetMaxIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP2D_val", &patElectron_lepjetMaxsIP2D_val, &b_patElectron_lepjetMaxsIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP2D_sig", &patElectron_lepjetMaxsIP2D_sig, &b_patElectron_lepjetMaxsIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP1D_val", &patElectron_lepjetMaxIP1D_val, &b_patElectron_lepjetMaxIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP1D_sig", &patElectron_lepjetMaxIP1D_sig, &b_patElectron_lepjetMaxIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP1D_val", &patElectron_lepjetMaxsIP1D_val, &b_patElectron_lepjetMaxsIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP1D_sig", &patElectron_lepjetMaxsIP1D_sig, &b_patElectron_lepjetMaxsIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvIP3D_val", &patElectron_lepjetAvIP3D_val, &b_patElectron_lepjetAvIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvIP3D_sig", &patElectron_lepjetAvIP3D_sig, &b_patElectron_lepjetAvIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP3D_val", &patElectron_lepjetAvsIP3D_val, &b_patElectron_lepjetAvsIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP3D_sig", &patElectron_lepjetAvsIP3D_sig, &b_patElectron_lepjetAvsIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvIP2D_val", &patElectron_lepjetAvIP2D_val, &b_patElectron_lepjetAvIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvIP2D_sig", &patElectron_lepjetAvIP2D_sig, &b_patElectron_lepjetAvIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP2D_val", &patElectron_lepjetAvsIP2D_val, &b_patElectron_lepjetAvsIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP2D_sig", &patElectron_lepjetAvsIP2D_sig, &b_patElectron_lepjetAvsIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvIP1D_val", &patElectron_lepjetAvIP1D_val, &b_patElectron_lepjetAvIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvIP1D_sig", &patElectron_lepjetAvIP1D_sig, &b_patElectron_lepjetAvIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP1D_val", &patElectron_lepjetAvsIP1D_val, &b_patElectron_lepjetAvsIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP1D_sig", &patElectron_lepjetAvsIP1D_sig, &b_patElectron_lepjetAvsIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetchtrks", &patElectron_lepjetchtrks, &b_patElectron_lepjetchtrks);
   fChain->SetBranchAddress("patElectron_lepjetpvchtrks", &patElectron_lepjetpvchtrks, &b_patElectron_lepjetpvchtrks);
   fChain->SetBranchAddress("patElectron_lepjetnonpvchtrks", &patElectron_lepjetnonpvchtrks, &b_patElectron_lepjetnonpvchtrks);
   fChain->SetBranchAddress("patElectron_lepjetndaus", &patElectron_lepjetndaus, &b_patElectron_lepjetndaus);
   fChain->SetBranchAddress("patElectron_lepjetpvchi2", &patElectron_lepjetpvchi2, &b_patElectron_lepjetpvchi2);
   fChain->SetBranchAddress("patElectron_lepjetnumno2trk", &patElectron_lepjetnumno2trk, &b_patElectron_lepjetnumno2trk);
   fChain->SetBranchAddress("patElectron_gen_pt", &patElectron_gen_pt, &b_patElectron_gen_pt);
   fChain->SetBranchAddress("patElectron_gen_eta", &patElectron_gen_eta, &b_patElectron_gen_eta);
   fChain->SetBranchAddress("patElectron_gen_phi", &patElectron_gen_phi, &b_patElectron_gen_phi);
   fChain->SetBranchAddress("patElectron_gen_en", &patElectron_gen_en, &b_patElectron_gen_en);
   fChain->SetBranchAddress("patElectron_gen_pdgId", &patElectron_gen_pdgId, &b_patElectron_gen_pdgId);
   fChain->SetBranchAddress("patElectron_gen_isPromptFinalState", &patElectron_gen_isPromptFinalState, &b_patElectron_gen_isPromptFinalState);
   fChain->SetBranchAddress("patElectron_gen_isDirectPromptTauDecayProductFinalState", &patElectron_gen_isDirectPromptTauDecayProductFinalState, &b_patElectron_gen_isDirectPromptTauDecayProductFinalState);
   fChain->SetBranchAddress("Tau_pt", &Tau_pt, &b_Tau_pt);
   fChain->SetBranchAddress("Tau_eta", &Tau_eta, &b_Tau_eta);
   fChain->SetBranchAddress("Tau_phi", &Tau_phi, &b_Tau_phi);
   fChain->SetBranchAddress("Tau_energy", &Tau_energy, &b_Tau_energy);
   fChain->SetBranchAddress("Tau_px", &Tau_px, &b_Tau_px);
   fChain->SetBranchAddress("Tau_py", &Tau_py, &b_Tau_py);
   fChain->SetBranchAddress("Tau_pz", &Tau_pz, &b_Tau_pz);
   fChain->SetBranchAddress("Tau_p", &Tau_p, &b_Tau_p);
   fChain->SetBranchAddress("Tau_leadChargedCandPt", &Tau_leadChargedCandPt, &b_Tau_leadChargedCandPt);
   fChain->SetBranchAddress("Tau_leadChargedCandEta", &Tau_leadChargedCandEta, &b_Tau_leadChargedCandEta);
   fChain->SetBranchAddress("Tau_leadChargedCandPhi", &Tau_leadChargedCandPhi, &b_Tau_leadChargedCandPhi);
   fChain->SetBranchAddress("Tau_leadChargedCandE", &Tau_leadChargedCandE, &b_Tau_leadChargedCandE);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_pt", &Tau_leadChargedCandTrack_pt, &b_Tau_leadChargedCandTrack_pt);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_ptError", &Tau_leadChargedCandTrack_ptError, &b_Tau_leadChargedCandTrack_ptError);
   fChain->SetBranchAddress("Tau_charge", &Tau_charge, &b_Tau_charge);
   fChain->SetBranchAddress("Tau_leadChargedCandCharge", &Tau_leadChargedCandCharge, &b_Tau_leadChargedCandCharge);
   fChain->SetBranchAddress("Tau_decayModeFinding", &Tau_decayModeFinding, &b_Tau_decayModeFinding);
   fChain->SetBranchAddress("Tau_decayModeFindingNewDMs", &Tau_decayModeFindingNewDMs, &b_Tau_decayModeFindingNewDMs);
   fChain->SetBranchAddress("Tau_againstMuonLoose3", &Tau_againstMuonLoose3, &b_Tau_againstMuonLoose3);
   fChain->SetBranchAddress("Tau_againstMuonTight3", &Tau_againstMuonTight3, &b_Tau_againstMuonTight3);
   fChain->SetBranchAddress("Tau_againstElectronVLooseMVA5", &Tau_againstElectronVLooseMVA5, &b_Tau_againstElectronVLooseMVA5);
   fChain->SetBranchAddress("Tau_againstElectronLooseMVA5", &Tau_againstElectronLooseMVA5, &b_Tau_againstElectronLooseMVA5);
   fChain->SetBranchAddress("Tau_againstElectronMediumMVA5", &Tau_againstElectronMediumMVA5, &b_Tau_againstElectronMediumMVA5);
   fChain->SetBranchAddress("Tau_againstElectronTightMVA5", &Tau_againstElectronTightMVA5, &b_Tau_againstElectronTightMVA5);
   fChain->SetBranchAddress("Tau_againstElectronVTightMVA5", &Tau_againstElectronVTightMVA5, &b_Tau_againstElectronVTightMVA5);
   fChain->SetBranchAddress("Tau_againstElectronMVA5category", &Tau_againstElectronMVA5category, &b_Tau_againstElectronMVA5category);
   fChain->SetBranchAddress("Tau_againstElectronMVA5raw", &Tau_againstElectronMVA5raw, &b_Tau_againstElectronMVA5raw);
   fChain->SetBranchAddress("Tau_againstElectronVLooseMVA6", &Tau_againstElectronVLooseMVA6, &b_Tau_againstElectronVLooseMVA6);
   fChain->SetBranchAddress("Tau_againstElectronLooseMVA6", &Tau_againstElectronLooseMVA6, &b_Tau_againstElectronLooseMVA6);
   fChain->SetBranchAddress("Tau_againstElectronMediumMVA6", &Tau_againstElectronMediumMVA6, &b_Tau_againstElectronMediumMVA6);
   fChain->SetBranchAddress("Tau_againstElectronTightMVA6", &Tau_againstElectronTightMVA6, &b_Tau_againstElectronTightMVA6);
   fChain->SetBranchAddress("Tau_againstElectronMVA6raw", &Tau_againstElectronMVA6raw, &b_Tau_againstElectronMVA6raw);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVA3newDMwLT", &Tau_byVLooseIsolationMVA3newDMwLT, &b_Tau_byVLooseIsolationMVA3newDMwLT);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVA3oldDMwLT", &Tau_byVLooseIsolationMVA3oldDMwLT, &b_Tau_byVLooseIsolationMVA3oldDMwLT);
   fChain->SetBranchAddress("Tau_byLooseCombinedIsolationDeltaBetaCorr3Hits", &Tau_byLooseCombinedIsolationDeltaBetaCorr3Hits, &b_Tau_byLooseCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVA3newDMwLT", &Tau_byLooseIsolationMVA3newDMwLT, &b_Tau_byLooseIsolationMVA3newDMwLT);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVA3oldDMwLT", &Tau_byLooseIsolationMVA3oldDMwLT, &b_Tau_byLooseIsolationMVA3oldDMwLT);
   fChain->SetBranchAddress("Tau_byMediumCombinedIsolationDeltaBetaCorr3Hits", &Tau_byMediumCombinedIsolationDeltaBetaCorr3Hits, &b_Tau_byMediumCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVA3newDMwLT", &Tau_byMediumIsolationMVA3newDMwLT, &b_Tau_byMediumIsolationMVA3newDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVA3oldDMwLT", &Tau_byMediumIsolationMVA3oldDMwLT, &b_Tau_byMediumIsolationMVA3oldDMwLT);
   fChain->SetBranchAddress("Tau_byTightCombinedIsolationDeltaBetaCorr3Hits", &Tau_byTightCombinedIsolationDeltaBetaCorr3Hits, &b_Tau_byTightCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("Tau_byTightIsolationMVA3newDMwLT", &Tau_byTightIsolationMVA3newDMwLT, &b_Tau_byTightIsolationMVA3newDMwLT);
   fChain->SetBranchAddress("Tau_byTightIsolationMVA3oldDMwLT", &Tau_byTightIsolationMVA3oldDMwLT, &b_Tau_byTightIsolationMVA3oldDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVA3newDMwLT", &Tau_byVTightIsolationMVA3newDMwLT, &b_Tau_byVTightIsolationMVA3newDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVA3oldDMwLT", &Tau_byVTightIsolationMVA3oldDMwLT, &b_Tau_byVTightIsolationMVA3oldDMwLT);
   fChain->SetBranchAddress("Tau_byVVTightIsolationMVA3newDMwLT", &Tau_byVVTightIsolationMVA3newDMwLT, &b_Tau_byVVTightIsolationMVA3newDMwLT);
   fChain->SetBranchAddress("Tau_byVVTightIsolationMVA3oldDMwLT", &Tau_byVVTightIsolationMVA3oldDMwLT, &b_Tau_byVVTightIsolationMVA3oldDMwLT);
   fChain->SetBranchAddress("Tau_byCombinedIsolationDeltaBetaCorrRaw3Hits", &Tau_byCombinedIsolationDeltaBetaCorrRaw3Hits, &b_Tau_byCombinedIsolationDeltaBetaCorrRaw3Hits);
   fChain->SetBranchAddress("Tau_byIsolationMVA3newDMwLTraw", &Tau_byIsolationMVA3newDMwLTraw, &b_Tau_byIsolationMVA3newDMwLTraw);
   fChain->SetBranchAddress("Tau_byIsolationMVA3oldDMwLTraw", &Tau_byIsolationMVA3oldDMwLTraw, &b_Tau_byIsolationMVA3oldDMwLTraw);
   fChain->SetBranchAddress("Tau_chargedIsoPtSum", &Tau_chargedIsoPtSum, &b_Tau_chargedIsoPtSum);
   fChain->SetBranchAddress("Tau_neutralIsoPtSum", &Tau_neutralIsoPtSum, &b_Tau_neutralIsoPtSum);
   fChain->SetBranchAddress("Tau_puCorrPtSum", &Tau_puCorrPtSum, &b_Tau_puCorrPtSum);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVArun2v1DBoldDMwLT", &Tau_byVLooseIsolationMVArun2v1DBoldDMwLT, &b_Tau_byVLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2v1DBoldDMwLT", &Tau_byLooseIsolationMVArun2v1DBoldDMwLT, &b_Tau_byLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2v1DBoldDMwLT", &Tau_byMediumIsolationMVArun2v1DBoldDMwLT, &b_Tau_byMediumIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byTightIsolationMVArun2v1DBoldDMwLT", &Tau_byTightIsolationMVArun2v1DBoldDMwLT, &b_Tau_byTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVArun2v1DBoldDMwLT", &Tau_byVTightIsolationMVArun2v1DBoldDMwLT, &b_Tau_byVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVArun2v1DBnewDMwLT", &Tau_byVLooseIsolationMVArun2v1DBnewDMwLT, &b_Tau_byVLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2v1DBnewDMwLT", &Tau_byLooseIsolationMVArun2v1DBnewDMwLT, &b_Tau_byLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2v1DBnewDMwLT", &Tau_byMediumIsolationMVArun2v1DBnewDMwLT, &b_Tau_byMediumIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byTightIsolationMVArun2v1DBnewDMwLT", &Tau_byTightIsolationMVArun2v1DBnewDMwLT, &b_Tau_byTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVArun2v1DBnewDMwLT", &Tau_byVTightIsolationMVArun2v1DBnewDMwLT, &b_Tau_byVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03", &Tau_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03, &b_Tau_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03);
   fChain->SetBranchAddress("Tau_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03", &Tau_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03, &b_Tau_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03);
   fChain->SetBranchAddress("Tau_byTightCombinedIsolationDeltaBetaCorr3HitsdR03", &Tau_byTightCombinedIsolationDeltaBetaCorr3HitsdR03, &b_Tau_byTightCombinedIsolationDeltaBetaCorr3HitsdR03);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT", &Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT", &Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT, &b_Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("Tau_byTightIsolationMVArun2v1DBdR03oldDMwLT", &Tau_byTightIsolationMVArun2v1DBdR03oldDMwLT, &b_Tau_byTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVArun2v1DBdR03oldDMwLT", &Tau_byVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_Tau_byVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("Tau_nProngs", &Tau_nProngs, &b_Tau_nProngs);
   fChain->SetBranchAddress("Tau_leadChargedCandNdof", &Tau_leadChargedCandNdof, &b_Tau_leadChargedCandNdof);
   fChain->SetBranchAddress("Tau_leadChargedCandChi2", &Tau_leadChargedCandChi2, &b_Tau_leadChargedCandChi2);
   fChain->SetBranchAddress("Tau_leadChargedCandValidHits", &Tau_leadChargedCandValidHits, &b_Tau_leadChargedCandValidHits);
   fChain->SetBranchAddress("Tau_defaultDxy", &Tau_defaultDxy, &b_Tau_defaultDxy);
   fChain->SetBranchAddress("Tau_defaultDxyError", &Tau_defaultDxyError, &b_Tau_defaultDxyError);
   fChain->SetBranchAddress("Tau_defaultDxySig", &Tau_defaultDxySig, &b_Tau_defaultDxySig);
   fChain->SetBranchAddress("Tau_defaultFlightLengthX", &Tau_defaultFlightLengthX, &b_Tau_defaultFlightLengthX);
   fChain->SetBranchAddress("Tau_defaultFlightLengthY", &Tau_defaultFlightLengthY, &b_Tau_defaultFlightLengthY);
   fChain->SetBranchAddress("Tau_defaultFlightLengthZ", &Tau_defaultFlightLengthZ, &b_Tau_defaultFlightLengthZ);
   fChain->SetBranchAddress("Tau_defaultFlightLengthSig", &Tau_defaultFlightLengthSig, &b_Tau_defaultFlightLengthSig);
   fChain->SetBranchAddress("Tau_default_PCAx_pv", &Tau_default_PCAx_pv, &b_Tau_default_PCAx_pv);
   fChain->SetBranchAddress("Tau_default_PCAy_pv", &Tau_default_PCAy_pv, &b_Tau_default_PCAy_pv);
   fChain->SetBranchAddress("Tau_default_PCAz_pv", &Tau_default_PCAz_pv, &b_Tau_default_PCAz_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandDz_pv", &Tau_leadChargedCandDz_pv, &b_Tau_leadChargedCandDz_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandDxy_pv", &Tau_leadChargedCandDxy_pv, &b_Tau_leadChargedCandDxy_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandDz_bs", &Tau_leadChargedCandDz_bs, &b_Tau_leadChargedCandDz_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandDxy_bs", &Tau_leadChargedCandDxy_bs, &b_Tau_leadChargedCandDxy_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandDzError", &Tau_leadChargedCandDzError, &b_Tau_leadChargedCandDzError);
   fChain->SetBranchAddress("Tau_leadChargedCandDxyError", &Tau_leadChargedCandDxyError, &b_Tau_leadChargedCandDxyError);
   fChain->SetBranchAddress("Tau_leadChargedCandVtx", &Tau_leadChargedCandVtx, &b_Tau_leadChargedCandVtx);
   fChain->SetBranchAddress("Tau_leadChargedCandVty", &Tau_leadChargedCandVty, &b_Tau_leadChargedCandVty);
   fChain->SetBranchAddress("Tau_leadChargedCandVtz", &Tau_leadChargedCandVtz, &b_Tau_leadChargedCandVtz);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAx_bs", &Tau_leadChargedCandTrack_PCAx_bs, &b_Tau_leadChargedCandTrack_PCAx_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAy_bs", &Tau_leadChargedCandTrack_PCAy_bs, &b_Tau_leadChargedCandTrack_PCAy_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAz_bs", &Tau_leadChargedCandTrack_PCAz_bs, &b_Tau_leadChargedCandTrack_PCAz_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAx_pv", &Tau_leadChargedCandTrack_PCAx_pv, &b_Tau_leadChargedCandTrack_PCAx_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAy_pv", &Tau_leadChargedCandTrack_PCAy_pv, &b_Tau_leadChargedCandTrack_PCAy_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAz_pv", &Tau_leadChargedCandTrack_PCAz_pv, &b_Tau_leadChargedCandTrack_PCAz_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_00", &Tau_leadChargedCandTrackFitErrorMatrix_00, &b_Tau_leadChargedCandTrackFitErrorMatrix_00);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_01", &Tau_leadChargedCandTrackFitErrorMatrix_01, &b_Tau_leadChargedCandTrackFitErrorMatrix_01);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_02", &Tau_leadChargedCandTrackFitErrorMatrix_02, &b_Tau_leadChargedCandTrackFitErrorMatrix_02);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_11", &Tau_leadChargedCandTrackFitErrorMatrix_11, &b_Tau_leadChargedCandTrackFitErrorMatrix_11);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_12", &Tau_leadChargedCandTrackFitErrorMatrix_12, &b_Tau_leadChargedCandTrackFitErrorMatrix_12);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_22", &Tau_leadChargedCandTrackFitErrorMatrix_22, &b_Tau_leadChargedCandTrackFitErrorMatrix_22);
   fChain->SetBranchAddress("Jet_pt", &Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_eta", &Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", &Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_energy", &Jet_energy, &b_Jet_energy);
   fChain->SetBranchAddress("Jet_mass", &Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_px", &Jet_px, &b_Jet_px);
   fChain->SetBranchAddress("Jet_py", &Jet_py, &b_Jet_py);
   fChain->SetBranchAddress("Jet_pz", &Jet_pz, &b_Jet_pz);
   fChain->SetBranchAddress("Jet_Uncorr_pt", &Jet_Uncorr_pt, &b_Jet_Uncorr_pt);
   fChain->SetBranchAddress("Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags", &Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags, &b_Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags);
   fChain->SetBranchAddress("Jet_pfCombinedMVAV2BJetTags", &Jet_pfCombinedMVAV2BJetTags, &b_Jet_pfCombinedMVAV2BJetTags);
   fChain->SetBranchAddress("Jet_pfJetProbabilityBJetTags", &Jet_pfJetProbabilityBJetTags, &b_Jet_pfJetProbabilityBJetTags);
   fChain->SetBranchAddress("Jet_pfCombinedCvsLJetTags", &Jet_pfCombinedCvsLJetTags, &b_Jet_pfCombinedCvsLJetTags);
   fChain->SetBranchAddress("Jet_pfCombinedCvsBJetTags", &Jet_pfCombinedCvsBJetTags, &b_Jet_pfCombinedCvsBJetTags);
   fChain->SetBranchAddress("Jet_pileupId", &Jet_pileupId, &b_Jet_pileupId);
   fChain->SetBranchAddress("Jet_isPFJet", &Jet_isPFJet, &b_Jet_isPFJet);
   fChain->SetBranchAddress("Jet_isCaloJet", &Jet_isCaloJet, &b_Jet_isCaloJet);
   fChain->SetBranchAddress("Jet_neutralHadEnergyFraction", &Jet_neutralHadEnergyFraction, &b_Jet_neutralHadEnergyFraction);
   fChain->SetBranchAddress("Jet_neutralEmEnergyFraction", &Jet_neutralEmEnergyFraction, &b_Jet_neutralEmEnergyFraction);
   fChain->SetBranchAddress("Jet_chargedHadronEnergyFraction", &Jet_chargedHadronEnergyFraction, &b_Jet_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jet_chargedEmEnergyFraction", &Jet_chargedEmEnergyFraction, &b_Jet_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jet_muonEnergyFraction", &Jet_muonEnergyFraction, &b_Jet_muonEnergyFraction);
   fChain->SetBranchAddress("Jet_electronEnergy", &Jet_electronEnergy, &b_Jet_electronEnergy);
   fChain->SetBranchAddress("Jet_photonEnergy", &Jet_photonEnergy, &b_Jet_photonEnergy);
   fChain->SetBranchAddress("Jet_emEnergyFraction", &Jet_emEnergyFraction, &b_Jet_emEnergyFraction);
   fChain->SetBranchAddress("Jet_numberOfConstituents", &Jet_numberOfConstituents, &b_Jet_numberOfConstituents);
   fChain->SetBranchAddress("Jet_chargedMultiplicity", &Jet_chargedMultiplicity, &b_Jet_chargedMultiplicity);
   fChain->SetBranchAddress("Jet_vtxMass", &Jet_vtxMass, &b_Jet_vtxMass);
   fChain->SetBranchAddress("Jet_vtxNtracks", &Jet_vtxNtracks, &b_Jet_vtxNtracks);
   fChain->SetBranchAddress("Jet_vtx3DVal", &Jet_vtx3DVal, &b_Jet_vtx3DVal);
   fChain->SetBranchAddress("Jet_vtx3DSig", &Jet_vtx3DSig, &b_Jet_vtx3DSig);
   fChain->SetBranchAddress("Jet_JesSF", &Jet_JesSF, &b_Jet_JesSF);
   fChain->SetBranchAddress("Jet_JesSFup", &Jet_JesSFup, &b_Jet_JesSFup);
   fChain->SetBranchAddress("Jet_JesSFdown", &Jet_JesSFdown, &b_Jet_JesSFdown);
   fChain->SetBranchAddress("Jet_JerSF", &Jet_JerSF, &b_Jet_JerSF);
   fChain->SetBranchAddress("Jet_JerSFup", &Jet_JerSFup, &b_Jet_JerSFup);
   fChain->SetBranchAddress("Jet_JerSFdown", &Jet_JerSFdown, &b_Jet_JerSFdown);
   fChain->SetBranchAddress("Jet_partonFlavour", &Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("Jet_hadronFlavour", &Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("BoostedJet_pt", &BoostedJet_pt, &b_BoostedJet_pt);
   fChain->SetBranchAddress("BoostedJet_eta", &BoostedJet_eta, &b_BoostedJet_eta);
   fChain->SetBranchAddress("BoostedJet_phi", &BoostedJet_phi, &b_BoostedJet_phi);
   fChain->SetBranchAddress("BoostedJet_energy", &BoostedJet_energy, &b_BoostedJet_energy);
   fChain->SetBranchAddress("BoostedJet_mass", &BoostedJet_mass, &b_BoostedJet_mass);
   fChain->SetBranchAddress("BoostedJet_Uncorr_pt", &BoostedJet_Uncorr_pt, &b_BoostedJet_Uncorr_pt);
   fChain->SetBranchAddress("BoostedJet_pfJetProbabilityBJetTags", &BoostedJet_pfJetProbabilityBJetTags, &b_BoostedJet_pfJetProbabilityBJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedMVAV2BJetTags", &BoostedJet_pfCombinedMVAV2BJetTags, &b_BoostedJet_pfCombinedMVAV2BJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags", &BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags, &b_BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedCvsLJetTags", &BoostedJet_pfCombinedCvsLJetTags, &b_BoostedJet_pfCombinedCvsLJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedCvsBJetTags", &BoostedJet_pfCombinedCvsBJetTags, &b_BoostedJet_pfCombinedCvsBJetTags);
   fChain->SetBranchAddress("BoostedJet_neutralHadEnergyFraction", &BoostedJet_neutralHadEnergyFraction, &b_BoostedJet_neutralHadEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_neutralEmEmEnergyFraction", &BoostedJet_neutralEmEmEnergyFraction, &b_BoostedJet_neutralEmEmEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_chargedHadronEnergyFraction", &BoostedJet_chargedHadronEnergyFraction, &b_BoostedJet_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_chargedEmEnergyFraction", &BoostedJet_chargedEmEnergyFraction, &b_BoostedJet_chargedEmEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_muonEnergyFraction", &BoostedJet_muonEnergyFraction, &b_BoostedJet_muonEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_numberOfConstituents", &BoostedJet_numberOfConstituents, &b_BoostedJet_numberOfConstituents);
   fChain->SetBranchAddress("BoostedJet_chargedMultiplicity", &BoostedJet_chargedMultiplicity, &b_BoostedJet_chargedMultiplicity);
   fChain->SetBranchAddress("BoostedJet_electronEnergy", &BoostedJet_electronEnergy, &b_BoostedJet_electronEnergy);
   fChain->SetBranchAddress("BoostedJet_photonEnergy", &BoostedJet_photonEnergy, &b_BoostedJet_photonEnergy);
   fChain->SetBranchAddress("BoostedJet_tau1", &BoostedJet_tau1, &b_BoostedJet_tau1);
   fChain->SetBranchAddress("BoostedJet_tau2", &BoostedJet_tau2, &b_BoostedJet_tau2);
   fChain->SetBranchAddress("BoostedJet_tau3", &BoostedJet_tau3, &b_BoostedJet_tau3);
   fChain->SetBranchAddress("BoostedJet_softdrop_mass", &BoostedJet_softdrop_mass, &b_BoostedJet_softdrop_mass);
   fChain->SetBranchAddress("BoostedJet_trimmed_mass", &BoostedJet_trimmed_mass, &b_BoostedJet_trimmed_mass);
   fChain->SetBranchAddress("BoostedJet_pruned_mass", &BoostedJet_pruned_mass, &b_BoostedJet_pruned_mass);
   fChain->SetBranchAddress("BoostedJet_filtered_mass", &BoostedJet_filtered_mass, &b_BoostedJet_filtered_mass);
   fChain->SetBranchAddress("BoostedJet_JesSF", &BoostedJet_JesSF, &b_BoostedJet_JesSF);
   fChain->SetBranchAddress("BoostedJet_JesSFup", &BoostedJet_JesSFup, &b_BoostedJet_JesSFup);
   fChain->SetBranchAddress("BoostedJet_JesSFdown", &BoostedJet_JesSFdown, &b_BoostedJet_JesSFdown);
   fChain->SetBranchAddress("BoostedJet_JerSF", &BoostedJet_JerSF, &b_BoostedJet_JerSF);
   fChain->SetBranchAddress("BoostedJet_JerSFup", &BoostedJet_JerSFup, &b_BoostedJet_JerSFup);
   fChain->SetBranchAddress("BoostedJet_JerSFdown", &BoostedJet_JerSFdown, &b_BoostedJet_JerSFdown);
   fChain->SetBranchAddress("TopTagging_topMass", &TopTagging_topMass, &b_TopTagging_topMass);
   fChain->SetBranchAddress("TopTagging_minMass", &TopTagging_minMass, &b_TopTagging_minMass);
   fChain->SetBranchAddress("TopTagging_wMass", &TopTagging_wMass, &b_TopTagging_wMass);
   fChain->SetBranchAddress("TopTagging_nSubJets", &TopTagging_nSubJets, &b_TopTagging_nSubJets);
   fChain->SetBranchAddress("TauJetness_ngentau", &TauJetness_ngentau, &b_TauJetness_ngentau);
   fChain->SetBranchAddress("TauJetness_numtau", &TauJetness_numtau, &b_TauJetness_numtau);
   fChain->SetBranchAddress("TauJetness_taupt", &TauJetness_taupt, &b_TauJetness_taupt);
   fChain->SetBranchAddress("TauJetness_taueta", &TauJetness_taueta, &b_TauJetness_taueta);
   fChain->SetBranchAddress("TauJetness_tauphi", &TauJetness_tauphi, &b_TauJetness_tauphi);
   fChain->SetBranchAddress("TauJetness_tauenergy", &TauJetness_tauenergy, &b_TauJetness_tauenergy);
   fChain->SetBranchAddress("TauJetness_charge", &TauJetness_charge, &b_TauJetness_charge);
   fChain->SetBranchAddress("TauJetness_againstMuonTight3", &TauJetness_againstMuonTight3, &b_TauJetness_againstMuonTight3);
   fChain->SetBranchAddress("TauJetness_againstElectronMediumMVA6", &TauJetness_againstElectronMediumMVA6, &b_TauJetness_againstElectronMediumMVA6);
   fChain->SetBranchAddress("TauJetness_againstElectronTightMVA6", &TauJetness_againstElectronTightMVA6, &b_TauJetness_againstElectronTightMVA6);
   fChain->SetBranchAddress("TauJetness_byTightIsolationMVArun2v1DBnewDMwLT", &TauJetness_byTightIsolationMVArun2v1DBnewDMwLT, &b_TauJetness_byTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("TauJetness_byVTightIsolationMVArun2v1DBnewDMwLT", &TauJetness_byVTightIsolationMVArun2v1DBnewDMwLT, &b_TauJetness_byVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("TauJetness_num_pdgid_leps", &TauJetness_num_pdgid_leps, &b_TauJetness_num_pdgid_leps);
   fChain->SetBranchAddress("TauJetness_num_pdgid_eles", &TauJetness_num_pdgid_eles, &b_TauJetness_num_pdgid_eles);
   fChain->SetBranchAddress("TauJetness_num_pdgid_mus", &TauJetness_num_pdgid_mus, &b_TauJetness_num_pdgid_mus);
   fChain->SetBranchAddress("TauJetness_num_soft_leps", &TauJetness_num_soft_leps, &b_TauJetness_num_soft_leps);
   fChain->SetBranchAddress("TauJetness_num_soft_eles", &TauJetness_num_soft_eles, &b_TauJetness_num_soft_eles);
   fChain->SetBranchAddress("TauJetness_num_vetonoipnoiso_leps", &TauJetness_num_vetonoipnoiso_leps, &b_TauJetness_num_vetonoipnoiso_leps);
   fChain->SetBranchAddress("TauJetness_num_vetonoipnoiso_eles", &TauJetness_num_vetonoipnoiso_eles, &b_TauJetness_num_vetonoipnoiso_eles);
   fChain->SetBranchAddress("TauJetness_num_loosenoipnoiso_leps", &TauJetness_num_loosenoipnoiso_leps, &b_TauJetness_num_loosenoipnoiso_leps);
   fChain->SetBranchAddress("TauJetness_num_loosenoipnoiso_eles", &TauJetness_num_loosenoipnoiso_eles, &b_TauJetness_num_loosenoipnoiso_eles);
   fChain->SetBranchAddress("TauJetness_num_loose_mus", &TauJetness_num_loose_mus, &b_TauJetness_num_loose_mus);
   fChain->SetBranchAddress("TauJetness_numtautrks", &TauJetness_numtautrks, &b_TauJetness_numtautrks);
   fChain->SetBranchAddress("TauJetness_numtautrkspv", &TauJetness_numtautrkspv, &b_TauJetness_numtautrkspv);
   fChain->SetBranchAddress("TauJetness_numtautrksnopv", &TauJetness_numtautrksnopv, &b_TauJetness_numtautrksnopv);
   fChain->SetBranchAddress("TauJetness_npvTrkOVcollTrk", &TauJetness_npvTrkOVcollTrk, &b_TauJetness_npvTrkOVcollTrk);
   fChain->SetBranchAddress("TauJetness_pvTrkOVcollTrk", &TauJetness_pvTrkOVcollTrk, &b_TauJetness_pvTrkOVcollTrk);
   fChain->SetBranchAddress("TauJetness_npvTrkOVpvTrk", &TauJetness_npvTrkOVpvTrk, &b_TauJetness_npvTrkOVpvTrk);
   fChain->SetBranchAddress("TauJetness_npvPtOVcollPt", &TauJetness_npvPtOVcollPt, &b_TauJetness_npvPtOVcollPt);
   fChain->SetBranchAddress("TauJetness_pvPtOVcollPt", &TauJetness_pvPtOVcollPt, &b_TauJetness_pvPtOVcollPt);
   fChain->SetBranchAddress("TauJetness_npvPtOVpvPt", &TauJetness_npvPtOVpvPt, &b_TauJetness_npvPtOVpvPt);
   fChain->SetBranchAddress("TauJetness_avnum2v", &TauJetness_avnum2v, &b_TauJetness_avnum2v);
   fChain->SetBranchAddress("TauJetness_avnumno2v", &TauJetness_avnumno2v, &b_TauJetness_avnumno2v);
   fChain->SetBranchAddress("TauJetness_avdca3d2t", &TauJetness_avdca3d2t, &b_TauJetness_avdca3d2t);
   fChain->SetBranchAddress("TauJetness_avdca3dno2t", &TauJetness_avdca3dno2t, &b_TauJetness_avdca3dno2t);
   fChain->SetBranchAddress("TauJetness_avdca3d", &TauJetness_avdca3d, &b_TauJetness_avdca3d);
   fChain->SetBranchAddress("TauJetness_avdca2d2t", &TauJetness_avdca2d2t, &b_TauJetness_avdca2d2t);
   fChain->SetBranchAddress("TauJetness_avdca2dno2t", &TauJetness_avdca2dno2t, &b_TauJetness_avdca2dno2t);
   fChain->SetBranchAddress("TauJetness_avdca2d", &TauJetness_avdca2d, &b_TauJetness_avdca2d);
   fChain->SetBranchAddress("TauJetness_chi2", &TauJetness_chi2, &b_TauJetness_chi2);
   fChain->SetBranchAddress("TauJetness_avip3d_val", &TauJetness_avip3d_val, &b_TauJetness_avip3d_val);
   fChain->SetBranchAddress("TauJetness_avip3d_sig", &TauJetness_avip3d_sig, &b_TauJetness_avip3d_sig);
   fChain->SetBranchAddress("TauJetness_avsip3d_val", &TauJetness_avsip3d_val, &b_TauJetness_avsip3d_val);
   fChain->SetBranchAddress("TauJetness_avsip3d_sig", &TauJetness_avsip3d_sig, &b_TauJetness_avsip3d_sig);
   fChain->SetBranchAddress("TauJetness_avip2d_val", &TauJetness_avip2d_val, &b_TauJetness_avip2d_val);
   fChain->SetBranchAddress("TauJetness_avip2d_sig", &TauJetness_avip2d_sig, &b_TauJetness_avip2d_sig);
   fChain->SetBranchAddress("TauJetness_avsip2d_val", &TauJetness_avsip2d_val, &b_TauJetness_avsip2d_val);
   fChain->SetBranchAddress("TauJetness_avsip2d_sig", &TauJetness_avsip2d_sig, &b_TauJetness_avsip2d_sig);
   fChain->SetBranchAddress("TauJetness_avip1d_val", &TauJetness_avip1d_val, &b_TauJetness_avip1d_val);
   fChain->SetBranchAddress("TauJetness_avip1d_sig", &TauJetness_avip1d_sig, &b_TauJetness_avip1d_sig);
   fChain->SetBranchAddress("TauJetness_avsip1d_val", &TauJetness_avsip1d_val, &b_TauJetness_avsip1d_val);
   fChain->SetBranchAddress("TauJetness_avsip1d_sig", &TauJetness_avsip1d_sig, &b_TauJetness_avsip1d_sig);
   fChain->SetBranchAddress("BJetness_ngenbh", &BJetness_ngenbh, &b_BJetness_ngenbh);
   fChain->SetBranchAddress("BJetness_ngenbt", &BJetness_ngenbt, &b_BJetness_ngenbt);
   fChain->SetBranchAddress("BJetness_ngenb", &BJetness_ngenb, &b_BJetness_ngenb);
   fChain->SetBranchAddress("BJetness_ngenc", &BJetness_ngenc, &b_BJetness_ngenc);
   fChain->SetBranchAddress("BJetness_partonFlavour", &BJetness_partonFlavour, &b_BJetness_partonFlavour);
   fChain->SetBranchAddress("BJetness_hadronFlavour", &BJetness_hadronFlavour, &b_BJetness_hadronFlavour);
   fChain->SetBranchAddress("BJetness_numjet", &BJetness_numjet, &b_BJetness_numjet);
   fChain->SetBranchAddress("BJetness_jetpt", &BJetness_jetpt, &b_BJetness_jetpt);
   fChain->SetBranchAddress("BJetness_jeteta", &BJetness_jeteta, &b_BJetness_jeteta);
   fChain->SetBranchAddress("BJetness_jetphi", &BJetness_jetphi, &b_BJetness_jetphi);
   fChain->SetBranchAddress("BJetness_jetenergy", &BJetness_jetenergy, &b_BJetness_jetenergy);
   fChain->SetBranchAddress("BJetness_jetcsv", &BJetness_jetcsv, &b_BJetness_jetcsv);
   fChain->SetBranchAddress("BJetness_pfJetProbabilityBJetTags", &BJetness_pfJetProbabilityBJetTags, &b_BJetness_pfJetProbabilityBJetTags);
   fChain->SetBranchAddress("BJetness_pfCombinedMVAV2BJetTags", &BJetness_pfCombinedMVAV2BJetTags, &b_BJetness_pfCombinedMVAV2BJetTags);
   fChain->SetBranchAddress("BJetness_pfCombinedCvsLJetTags", &BJetness_pfCombinedCvsLJetTags, &b_BJetness_pfCombinedCvsLJetTags);
   fChain->SetBranchAddress("BJetness_pfCombinedCvsBJetTags", &BJetness_pfCombinedCvsBJetTags, &b_BJetness_pfCombinedCvsBJetTags);
   fChain->SetBranchAddress("BJetness_num_pdgid_leps", &BJetness_num_pdgid_leps, &b_BJetness_num_pdgid_leps);
   fChain->SetBranchAddress("BJetness_num_pdgid_eles", &BJetness_num_pdgid_eles, &b_BJetness_num_pdgid_eles);
   fChain->SetBranchAddress("BJetness_num_pdgid_mus", &BJetness_num_pdgid_mus, &b_BJetness_num_pdgid_mus);
   fChain->SetBranchAddress("BJetness_num_soft_leps", &BJetness_num_soft_leps, &b_BJetness_num_soft_leps);
   fChain->SetBranchAddress("BJetness_num_soft_eles", &BJetness_num_soft_eles, &b_BJetness_num_soft_eles);
   fChain->SetBranchAddress("BJetness_num_vetonoipnoiso_leps", &BJetness_num_vetonoipnoiso_leps, &b_BJetness_num_vetonoipnoiso_leps);
   fChain->SetBranchAddress("BJetness_num_vetonoipnoiso_eles", &BJetness_num_vetonoipnoiso_eles, &b_BJetness_num_vetonoipnoiso_eles);
   fChain->SetBranchAddress("BJetness_num_loosenoipnoiso_leps", &BJetness_num_loosenoipnoiso_leps, &b_BJetness_num_loosenoipnoiso_leps);
   fChain->SetBranchAddress("BJetness_num_loosenoipnoiso_eles", &BJetness_num_loosenoipnoiso_eles, &b_BJetness_num_loosenoipnoiso_eles);
   fChain->SetBranchAddress("BJetness_num_loose_mus", &BJetness_num_loose_mus, &b_BJetness_num_loose_mus);
   fChain->SetBranchAddress("BJetness_numjettrks", &BJetness_numjettrks, &b_BJetness_numjettrks);
   fChain->SetBranchAddress("BJetness_numjettrkspv", &BJetness_numjettrkspv, &b_BJetness_numjettrkspv);
   fChain->SetBranchAddress("BJetness_numjettrksnopv", &BJetness_numjettrksnopv, &b_BJetness_numjettrksnopv);
   fChain->SetBranchAddress("BJetness_npvTrkOVcollTrk", &BJetness_npvTrkOVcollTrk, &b_BJetness_npvTrkOVcollTrk);
   fChain->SetBranchAddress("BJetness_pvTrkOVcollTrk", &BJetness_pvTrkOVcollTrk, &b_BJetness_pvTrkOVcollTrk);
   fChain->SetBranchAddress("BJetness_npvTrkOVpvTrk", &BJetness_npvTrkOVpvTrk, &b_BJetness_npvTrkOVpvTrk);
   fChain->SetBranchAddress("BJetness_npvPtOVcollPt", &BJetness_npvPtOVcollPt, &b_BJetness_npvPtOVcollPt);
   fChain->SetBranchAddress("BJetness_pvPtOVcollPt", &BJetness_pvPtOVcollPt, &b_BJetness_pvPtOVcollPt);
   fChain->SetBranchAddress("BJetness_npvPtOVpvPt", &BJetness_npvPtOVpvPt, &b_BJetness_npvPtOVpvPt);
   fChain->SetBranchAddress("BJetness_avnum2v", &BJetness_avnum2v, &b_BJetness_avnum2v);
   fChain->SetBranchAddress("BJetness_avnumno2v", &BJetness_avnumno2v, &b_BJetness_avnumno2v);
   fChain->SetBranchAddress("BJetness_avdca3d2t", &BJetness_avdca3d2t, &b_BJetness_avdca3d2t);
   fChain->SetBranchAddress("BJetness_avdca3dno2t", &BJetness_avdca3dno2t, &b_BJetness_avdca3dno2t);
   fChain->SetBranchAddress("BJetness_avdca3d", &BJetness_avdca3d, &b_BJetness_avdca3d);
   fChain->SetBranchAddress("BJetness_avdca2d2t", &BJetness_avdca2d2t, &b_BJetness_avdca2d2t);
   fChain->SetBranchAddress("BJetness_avdca2dno2t", &BJetness_avdca2dno2t, &b_BJetness_avdca2dno2t);
   fChain->SetBranchAddress("BJetness_avdca2d", &BJetness_avdca2d, &b_BJetness_avdca2d);
   fChain->SetBranchAddress("BJetness_chi2", &BJetness_chi2, &b_BJetness_chi2);
   fChain->SetBranchAddress("BJetness_avip3d_val", &BJetness_avip3d_val, &b_BJetness_avip3d_val);
   fChain->SetBranchAddress("BJetness_avip3d_sig", &BJetness_avip3d_sig, &b_BJetness_avip3d_sig);
   fChain->SetBranchAddress("BJetness_avsip3d_val", &BJetness_avsip3d_val, &b_BJetness_avsip3d_val);
   fChain->SetBranchAddress("BJetness_avsip3d_sig", &BJetness_avsip3d_sig, &b_BJetness_avsip3d_sig);
   fChain->SetBranchAddress("BJetness_avip2d_val", &BJetness_avip2d_val, &b_BJetness_avip2d_val);
   fChain->SetBranchAddress("BJetness_avip2d_sig", &BJetness_avip2d_sig, &b_BJetness_avip2d_sig);
   fChain->SetBranchAddress("BJetness_avsip2d_val", &BJetness_avsip2d_val, &b_BJetness_avsip2d_val);
   fChain->SetBranchAddress("BJetness_avsip2d_sig", &BJetness_avsip2d_sig, &b_BJetness_avsip2d_sig);
   fChain->SetBranchAddress("BJetness_avip1d_val", &BJetness_avip1d_val, &b_BJetness_avip1d_val);
   fChain->SetBranchAddress("BJetness_avip1d_sig", &BJetness_avip1d_sig, &b_BJetness_avip1d_sig);
   fChain->SetBranchAddress("BJetness_avsip1d_val", &BJetness_avsip1d_val, &b_BJetness_avsip1d_val);
   fChain->SetBranchAddress("BJetness_avsip1d_sig", &BJetness_avsip1d_sig, &b_BJetness_avsip1d_sig);
   fChain->SetBranchAddress("BJetnessFV_jetcsv", &BJetnessFV_jetcsv, &b_BJetnessFV_jetcsv);
   fChain->SetBranchAddress("BJetnessFV_pfJetProbabilityBJetTags", &BJetnessFV_pfJetProbabilityBJetTags, &b_BJetnessFV_pfJetProbabilityBJetTags);
   fChain->SetBranchAddress("BJetnessFV_pfCombinedMVAV2BJetTags", &BJetnessFV_pfCombinedMVAV2BJetTags, &b_BJetnessFV_pfCombinedMVAV2BJetTags);
   fChain->SetBranchAddress("BJetnessFV_num_loosenoipnoiso_leps", &BJetnessFV_num_loosenoipnoiso_leps, &b_BJetnessFV_num_loosenoipnoiso_leps);
   fChain->SetBranchAddress("BJetnessFV_numjettrksnopv", &BJetnessFV_numjettrksnopv, &b_BJetnessFV_numjettrksnopv);
   fChain->SetBranchAddress("BJetnessFV_pvTrkOVcollTrk", &BJetnessFV_pvTrkOVcollTrk, &b_BJetnessFV_pvTrkOVcollTrk);
   fChain->SetBranchAddress("BJetnessFV_avip3d_val", &BJetnessFV_avip3d_val, &b_BJetnessFV_avip3d_val);
   fChain->SetBranchAddress("BJetnessFV_avip3d_sig", &BJetnessFV_avip3d_sig, &b_BJetnessFV_avip3d_sig);
   fChain->SetBranchAddress("BJetnessFV_avsip3d_sig", &BJetnessFV_avsip3d_sig, &b_BJetnessFV_avsip3d_sig);
   fChain->SetBranchAddress("BJetnessFV_avip1d_sig", &BJetnessFV_avip1d_sig, &b_BJetnessFV_avip1d_sig);
   fChain->SetBranchAddress("bWeight", &bWeight, &b_bWeight);
   fChain->SetBranchAddress("PUWeight", &PUWeight, &b_PUWeight);
   fChain->SetBranchAddress("Met_type1PF_pt", &Met_type1PF_pt, &b_Met_type1PF_pt);
   fChain->SetBranchAddress("Met_type1PF_px", &Met_type1PF_px, &b_Met_type1PF_px);
   fChain->SetBranchAddress("Met_type1PF_py", &Met_type1PF_py, &b_Met_type1PF_py);
   fChain->SetBranchAddress("Met_type1PF_pz", &Met_type1PF_pz, &b_Met_type1PF_pz);
   fChain->SetBranchAddress("Met_type1PF_phi", &Met_type1PF_phi, &b_Met_type1PF_phi);
   fChain->SetBranchAddress("Met_type1PF_sumEt", &Met_type1PF_sumEt, &b_Met_type1PF_sumEt);
   fChain->SetBranchAddress("Met_type1PF_shiftedPtUp", &Met_type1PF_shiftedPtUp, &b_Met_type1PF_shiftedPtUp);
   fChain->SetBranchAddress("Met_type1PF_shiftedPtDown", &Met_type1PF_shiftedPtDown, &b_Met_type1PF_shiftedPtDown);
   fChain->SetBranchAddress("Gen_type1PF_Met", &Gen_type1PF_Met, &b_Gen_type1PF_Met);
   Notify();
}

Bool_t tWEvent::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void tWEvent::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t tWEvent::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef tWEvent_cxx
