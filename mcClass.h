//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Mar 25 17:04:59 2015 by ROOT version 5.34/25
// from TTree mcClass/tree of rings associated to the chain
// found on file: /work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root
//////////////////////////////////////////////////////////

#ifndef mcClass_h
#define mcClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class mcClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          RunNumber;
   ULong64_t       EventNumber;
   Float_t         el_pt;
   Float_t         el_eta;
   Float_t         el_phi;
   UChar_t         el_nSi;
   UChar_t         el_nSiDeadSensors;
   UChar_t         el_nPix;
   UChar_t         el_nSCT;
   UChar_t         el_nPixDeadSensors;
   UChar_t         el_nSCTDeadSensors;
   UChar_t         el_expectBlayer;
   UChar_t         el_nBlayerHits;
   UChar_t         el_nBlayerOutliers;
   Float_t         el_d0;
   Float_t         el_deltaEta;
   Float_t         el_deltaPhiRescaled2;
   Int_t           el_convBi;
   Bool_t          el_loose;
   Bool_t          el_medium;
   Bool_t          el_tight;
   Bool_t          el_lhLoose;
   Bool_t          el_lhMedium;
   Bool_t          el_lhTight;
   Bool_t          el_multiLepton;
   Int_t           trk_nGoodVtx;
   Int_t           trk_nPileupPrimaryVtx;
   Float_t         calo_et;
   Float_t         calo_eta;
   Float_t         calo_phi;
   Bool_t          trig_L1_accept;
   Float_t         trig_L2_calo_et;
   Float_t         trig_L2_calo_eta;
   Float_t         trig_L2_calo_phi;
   Float_t         trig_L2_calo_e237;
   Float_t         trig_L2_calo_e277;
   Float_t         trig_L2_calo_fracs1;
   Float_t         trig_L2_calo_weta2;
   Float_t         trig_L2_calo_ehad1;
   Float_t         trig_L2_calo_emaxs1;
   Float_t         trig_L2_calo_e2tsts1;
   Float_t         trig_L2_calo_wstot;
   vector<float>   *trig_L2_calo_rings;
   Bool_t          trig_L2_calo_accept;
   vector<float>   *trig_L2_el_pt;
   vector<float>   *trig_L2_el_eta;
   vector<float>   *trig_L2_el_phi;
   vector<float>   *trig_L2_el_charge;
   vector<float>   *trig_L2_el_nTRTHits;
   vector<float>   *trig_L2_el_rcore;
   vector<float>   *trig_L2_el_eratio;
   vector<float>   *trig_L2_el_ethad;
   vector<float>   *trig_L2_el_f0;
   vector<float>   *trig_L2_el_f1;
   vector<float>   *trig_L2_el_f2;
   vector<float>   *trig_L2_el_f3;
   vector<float>   *trig_L2_el_etOverPt;
   vector<float>   *trig_L2_el_trkClusDeta;
   vector<float>   *trig_L2_el_trkClusDphi;
   Bool_t          trig_L2_el_accept;
   Bool_t          trig_EF_calo_accept;
   Bool_t          trig_EF_el_accept;
   Float_t         mc_pt;
   Float_t         mc_eta;
   Float_t         mc_phi;
   Bool_t          mc_isTop;
   Bool_t          mc_isQuark;
   Bool_t          mc_isParton;
   Bool_t          mc_isMeson;
   Bool_t          mc_isTau;
   Bool_t          mc_isMuon;
   Bool_t          mc_isPhoton;
   Bool_t          mc_isElectron;
   Bool_t          mc_hasZMother;
   Bool_t          mc_hasWMother;

   // List of branches
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_nSi;   //!
   TBranch        *b_el_nSiDeadSensors;   //!
   TBranch        *b_el_nPix;   //!
   TBranch        *b_el_nSCT;   //!
   TBranch        *b_el_nPixDeadSensors;   //!
   TBranch        *b_el_nSCTDeadSensors;   //!
   TBranch        *b_el_expectBlayer;   //!
   TBranch        *b_el_nBlayerHits;   //!
   TBranch        *b_el_nBlayerOutliers;   //!
   TBranch        *b_el_d0;   //!
   TBranch        *b_el_deltaEta;   //!
   TBranch        *b_el_deltaPhiRescaled2;   //!
   TBranch        *b_el_convBi;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_lhLoose;   //!
   TBranch        *b_el_lhMedium;   //!
   TBranch        *b_el_lhTight;   //!
   TBranch        *b_el_multiLepton;   //!
   TBranch        *b_trk_nGoodVtx;   //!
   TBranch        *b_trk_nPileupPrimaryVtx;   //!
   TBranch        *b_calo_et;   //!
   TBranch        *b_calo_eta;   //!
   TBranch        *b_calo_phi;   //!
   TBranch        *b_trig_L1_accept;   //!
   TBranch        *b_trig_L2_calo_et;   //!
   TBranch        *b_trig_L2_calo_eta;   //!
   TBranch        *b_trig_L2_calo_phi;   //!
   TBranch        *b_trig_L2_calo_e237;   //!
   TBranch        *b_trig_L2_calo_e277;   //!
   TBranch        *b_trig_L2_calo_fracs1;   //!
   TBranch        *b_trig_L2_calo_weta2;   //!
   TBranch        *b_trig_L2_calo_ehad1;   //!
   TBranch        *b_trig_L2_calo_emaxs1;   //!
   TBranch        *b_trig_L2_calo_e2tsts1;   //!
   TBranch        *b_trig_L2_calo_wstot;   //!
   TBranch        *b_trig_L2_calo_rings;   //!
   TBranch        *b_trig_L2_calo_accept;   //!
   TBranch        *b_trig_L2_el_pt;   //!
   TBranch        *b_trig_L2_el_eta;   //!
   TBranch        *b_trig_L2_el_phi;   //!
   TBranch        *b_trig_L2_el_charge;   //!
   TBranch        *b_trig_L2_el_nTRTHits;   //!
   TBranch        *b_trig_L2_el_rcore;   //!
   TBranch        *b_trig_L2_el_eratio;   //!
   TBranch        *b_trig_L2_el_ethad;   //!
   TBranch        *b_trig_L2_el_f0;   //!
   TBranch        *b_trig_L2_el_f1;   //!
   TBranch        *b_trig_L2_el_f2;   //!
   TBranch        *b_trig_L2_el_f3;   //!
   TBranch        *b_trig_L2_el_etOverPt;   //!
   TBranch        *b_trig_L2_el_trkClusDeta;   //!
   TBranch        *b_trig_L2_el_trkClusDphi;   //!
   TBranch        *b_trig_L2_el_accept;   //!
   TBranch        *b_trig_EF_calo_accept;   //!
   TBranch        *b_trig_EF_el_accept;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_isTop;   //!
   TBranch        *b_mc_isQuark;   //!
   TBranch        *b_mc_isParton;   //!
   TBranch        *b_mc_isMeson;   //!
   TBranch        *b_mc_isTau;   //!
   TBranch        *b_mc_isMuon;   //!
   TBranch        *b_mc_isPhoton;   //!
   TBranch        *b_mc_isElectron;   //!
   TBranch        *b_mc_hasZMother;   //!
   TBranch        *b_mc_hasWMother;   //!

   mcClass(TTree *tree);
   virtual ~mcClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef mcClass_cxx
mcClass::mcClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
	/*
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root:/NavNtuple");
      dir->GetObject(leafName,tree);
   }*/
   Init(tree);
}

mcClass::~mcClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t mcClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t mcClass::LoadTree(Long64_t entry)
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

void mcClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   trig_L2_calo_rings = 0;
   trig_L2_el_pt = 0;
   trig_L2_el_eta = 0;
   trig_L2_el_phi = 0;
   trig_L2_el_charge = 0;
   trig_L2_el_nTRTHits = 0;
   trig_L2_el_rcore = 0;
   trig_L2_el_eratio = 0;
   trig_L2_el_ethad = 0;
   trig_L2_el_f0 = 0;
   trig_L2_el_f1 = 0;
   trig_L2_el_f2 = 0;
   trig_L2_el_f3 = 0;
   trig_L2_el_etOverPt = 0;
   trig_L2_el_trkClusDeta = 0;
   trig_L2_el_trkClusDphi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_nSi", &el_nSi, &b_el_nSi);
   fChain->SetBranchAddress("el_nSiDeadSensors", &el_nSiDeadSensors, &b_el_nSiDeadSensors);
   fChain->SetBranchAddress("el_nPix", &el_nPix, &b_el_nPix);
   fChain->SetBranchAddress("el_nSCT", &el_nSCT, &b_el_nSCT);
   fChain->SetBranchAddress("el_nPixDeadSensors", &el_nPixDeadSensors, &b_el_nPixDeadSensors);
   fChain->SetBranchAddress("el_nSCTDeadSensors", &el_nSCTDeadSensors, &b_el_nSCTDeadSensors);
   fChain->SetBranchAddress("el_expectBlayer", &el_expectBlayer, &b_el_expectBlayer);
   fChain->SetBranchAddress("el_nBlayerHits", &el_nBlayerHits, &b_el_nBlayerHits);
   fChain->SetBranchAddress("el_nBlayerOutliers", &el_nBlayerOutliers, &b_el_nBlayerOutliers);
   fChain->SetBranchAddress("el_d0", &el_d0, &b_el_d0);
   fChain->SetBranchAddress("el_deltaEta", &el_deltaEta, &b_el_deltaEta);
   fChain->SetBranchAddress("el_deltaPhiRescaled2", &el_deltaPhiRescaled2, &b_el_deltaPhiRescaled2);
   fChain->SetBranchAddress("el_convBi", &el_convBi, &b_el_convBi);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_lhLoose", &el_lhLoose, &b_el_lhLoose);
   fChain->SetBranchAddress("el_lhMedium", &el_lhMedium, &b_el_lhMedium);
   fChain->SetBranchAddress("el_lhTight", &el_lhTight, &b_el_lhTight);
   fChain->SetBranchAddress("el_multiLepton", &el_multiLepton, &b_el_multiLepton);
   fChain->SetBranchAddress("trk_nGoodVtx", &trk_nGoodVtx, &b_trk_nGoodVtx);
   fChain->SetBranchAddress("trk_nPileupPrimaryVtx", &trk_nPileupPrimaryVtx, &b_trk_nPileupPrimaryVtx);
   fChain->SetBranchAddress("calo_et", &calo_et, &b_calo_et);
   fChain->SetBranchAddress("calo_eta", &calo_eta, &b_calo_eta);
   fChain->SetBranchAddress("calo_phi", &calo_phi, &b_calo_phi);
   fChain->SetBranchAddress("trig_L1_accept", &trig_L1_accept, &b_trig_L1_accept);
   fChain->SetBranchAddress("trig_L2_calo_et", &trig_L2_calo_et, &b_trig_L2_calo_et);
   fChain->SetBranchAddress("trig_L2_calo_eta", &trig_L2_calo_eta, &b_trig_L2_calo_eta);
   fChain->SetBranchAddress("trig_L2_calo_phi", &trig_L2_calo_phi, &b_trig_L2_calo_phi);
   fChain->SetBranchAddress("trig_L2_calo_e237", &trig_L2_calo_e237, &b_trig_L2_calo_e237);
   fChain->SetBranchAddress("trig_L2_calo_e277", &trig_L2_calo_e277, &b_trig_L2_calo_e277);
   fChain->SetBranchAddress("trig_L2_calo_fracs1", &trig_L2_calo_fracs1, &b_trig_L2_calo_fracs1);
   fChain->SetBranchAddress("trig_L2_calo_weta2", &trig_L2_calo_weta2, &b_trig_L2_calo_weta2);
   fChain->SetBranchAddress("trig_L2_calo_ehad1", &trig_L2_calo_ehad1, &b_trig_L2_calo_ehad1);
   fChain->SetBranchAddress("trig_L2_calo_emaxs1", &trig_L2_calo_emaxs1, &b_trig_L2_calo_emaxs1);
   fChain->SetBranchAddress("trig_L2_calo_e2tsts1", &trig_L2_calo_e2tsts1, &b_trig_L2_calo_e2tsts1);
   fChain->SetBranchAddress("trig_L2_calo_wstot", &trig_L2_calo_wstot, &b_trig_L2_calo_wstot);
   fChain->SetBranchAddress("trig_L2_calo_rings", &trig_L2_calo_rings, &b_trig_L2_calo_rings);
   fChain->SetBranchAddress("trig_L2_calo_accept", &trig_L2_calo_accept, &b_trig_L2_calo_accept);
   fChain->SetBranchAddress("trig_L2_el_pt", &trig_L2_el_pt, &b_trig_L2_el_pt);
   fChain->SetBranchAddress("trig_L2_el_eta", &trig_L2_el_eta, &b_trig_L2_el_eta);
   fChain->SetBranchAddress("trig_L2_el_phi", &trig_L2_el_phi, &b_trig_L2_el_phi);
   fChain->SetBranchAddress("trig_L2_el_charge", &trig_L2_el_charge, &b_trig_L2_el_charge);
   fChain->SetBranchAddress("trig_L2_el_nTRTHits", &trig_L2_el_nTRTHits, &b_trig_L2_el_nTRTHits);
   fChain->SetBranchAddress("trig_L2_el_rcore", &trig_L2_el_rcore, &b_trig_L2_el_rcore);
   fChain->SetBranchAddress("trig_L2_el_eratio", &trig_L2_el_eratio, &b_trig_L2_el_eratio);
   fChain->SetBranchAddress("trig_L2_el_ethad", &trig_L2_el_ethad, &b_trig_L2_el_ethad);
   fChain->SetBranchAddress("trig_L2_el_f0", &trig_L2_el_f0, &b_trig_L2_el_f0);
   fChain->SetBranchAddress("trig_L2_el_f1", &trig_L2_el_f1, &b_trig_L2_el_f1);
   fChain->SetBranchAddress("trig_L2_el_f2", &trig_L2_el_f2, &b_trig_L2_el_f2);
   fChain->SetBranchAddress("trig_L2_el_f3", &trig_L2_el_f3, &b_trig_L2_el_f3);
   fChain->SetBranchAddress("trig_L2_el_etOverPt", &trig_L2_el_etOverPt, &b_trig_L2_el_etOverPt);
   fChain->SetBranchAddress("trig_L2_el_trkClusDeta", &trig_L2_el_trkClusDeta, &b_trig_L2_el_trkClusDeta);
   fChain->SetBranchAddress("trig_L2_el_trkClusDphi", &trig_L2_el_trkClusDphi, &b_trig_L2_el_trkClusDphi);
   fChain->SetBranchAddress("trig_L2_el_accept", &trig_L2_el_accept, &b_trig_L2_el_accept);
   fChain->SetBranchAddress("trig_EF_calo_accept", &trig_EF_calo_accept, &b_trig_EF_calo_accept);
   fChain->SetBranchAddress("trig_EF_el_accept", &trig_EF_el_accept, &b_trig_EF_el_accept);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_isTop", &mc_isTop, &b_mc_isTop);
   fChain->SetBranchAddress("mc_isQuark", &mc_isQuark, &b_mc_isQuark);
   fChain->SetBranchAddress("mc_isParton", &mc_isParton, &b_mc_isParton);
   fChain->SetBranchAddress("mc_isMeson", &mc_isMeson, &b_mc_isMeson);
   fChain->SetBranchAddress("mc_isTau", &mc_isTau, &b_mc_isTau);
   fChain->SetBranchAddress("mc_isMuon", &mc_isMuon, &b_mc_isMuon);
   fChain->SetBranchAddress("mc_isPhoton", &mc_isPhoton, &b_mc_isPhoton);
   fChain->SetBranchAddress("mc_isElectron", &mc_isElectron, &b_mc_isElectron);
   fChain->SetBranchAddress("mc_hasZMother", &mc_hasZMother, &b_mc_hasZMother);
   fChain->SetBranchAddress("mc_hasWMother", &mc_hasWMother, &b_mc_hasWMother);
   Notify();
}

Bool_t mcClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void mcClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t mcClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef mcClass_cxx