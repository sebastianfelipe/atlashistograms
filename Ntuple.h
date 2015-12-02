//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jul  1 11:47:06 2015 by ROOT version 6.02/08
// from TTree Ntuple/tree of Zee probes
// found on file: PhysVal.root
//////////////////////////////////////////////////////////

#ifndef Ntuple_h
#define Ntuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class Ntuple {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          RunNumber;
   ULong64_t       EventNumber;
   Float_t         el_et;
   Float_t         el_pt;
   Float_t         el_eta;
   Float_t         el_phi;
   Float_t         el_ethad1;
   Float_t         el_ehad1;
   Float_t         el_f1;
   Float_t         el_f3;
   Float_t         el_f1core;
   Float_t         el_f3core;
   Float_t         el_weta2;
   Float_t         el_d0;
   Float_t         el_wtots1;
   Float_t         el_fracs1;
   Float_t         el_Reta;
   Float_t         el_Rphi;
   Float_t         el_Eratio;
   Float_t         el_Rhad;
   Float_t         el_Rhad1;
   Float_t         el_deta1;
   Float_t         el_deta2;
   Float_t         el_dphi2;
   Float_t         el_dphiresc;
   Float_t         el_dphiresc2;
   Float_t         el_eprobht;
   Float_t         el_charge;
   UChar_t         el_nblayerhits;
   UChar_t         el_nblayerolhits;
   UChar_t         el_npixhits;
   UChar_t         el_npixolhits;
   UChar_t         el_nscthits;
   UChar_t         el_nsctolhits;
   UChar_t         el_ntrthightreshits;
   UChar_t         el_ntrthits;
   UChar_t         el_ntrthighthresolhits;
   UChar_t         el_ntrtolhits;
   UChar_t         el_ntrtxenonhits;
   Bool_t          el_expectblayerhit;
   UChar_t         el_nsihits;
   UChar_t         el_nsideadsensors;
   UChar_t         el_npixdeadsensors;
   UChar_t         el_nsctdeadsensors;
   vector<float>   *el_ringsE;
   Bool_t          el_loose;
   Bool_t          el_medium;
   Bool_t          el_tight;
   Bool_t          el_lhLoose;
   Bool_t          el_lhMedium;
   Bool_t          el_lhTight;
   Bool_t          el_rgLoose;
   Bool_t          el_rgMedium;
   Bool_t          el_rgTight;
   Bool_t          el_multiLepton;
   Int_t           el_nGoodVtx;
   Int_t           el_nPileupPrimaryVtx;
   Float_t         calo_et;
   Float_t         calo_eta;
   Float_t         calo_phi;
   Float_t         trig_L1_emClus;
   Float_t         trig_L1_tauClus;
   Float_t         trig_L1_emIsol;
   Float_t         trig_L1_hadIsol;
   vector<string>  *trig_L1_thrNames;
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
   Bool_t          mc_hasMC;
   Float_t         mc_pt;
   Float_t         mc_eta;
   Float_t         mc_phi;
   Bool_t          mc_isTop;
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
   TBranch        *b_el_et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_ethad1;   //!
   TBranch        *b_el_ehad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_d0;   //!
   TBranch        *b_el_wtots1;   //!
   TBranch        *b_el_fracs1;   //!
   TBranch        *b_el_Reta;   //!
   TBranch        *b_el_Rphi;   //!
   TBranch        *b_el_Eratio;   //!
   TBranch        *b_el_Rhad;   //!
   TBranch        *b_el_Rhad1;   //!
   TBranch        *b_el_deta1;   //!
   TBranch        *b_el_deta2;   //!
   TBranch        *b_el_dphi2;   //!
   TBranch        *b_el_dphiresc;   //!
   TBranch        *b_el_dphiresc2;   //!
   TBranch        *b_el_eprobht;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_nblayerhits;   //!
   TBranch        *b_el_nblayerolhits;   //!
   TBranch        *b_el_npixhits;   //!
   TBranch        *b_el_npixolhits;   //!
   TBranch        *b_el_nscthits;   //!
   TBranch        *b_el_nsctolhits;   //!
   TBranch        *b_el_ntrthightreshits;   //!
   TBranch        *b_el_ntrthits;   //!
   TBranch        *b_el_ntrthighthresolhits;   //!
   TBranch        *b_el_ntrtolhits;   //!
   TBranch        *b_el_ntrtxenonhits;   //!
   TBranch        *b_el_expectblayerhit;   //!
   TBranch        *b_el_nsihits;   //!
   TBranch        *b_el_nsideadsensors;   //!
   TBranch        *b_el_npixdeadsensors;   //!
   TBranch        *b_el_nsctdeadsensors;   //!
   TBranch        *b_el_ringsE;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_lhLoose;   //!
   TBranch        *b_el_lhMedium;   //!
   TBranch        *b_el_lhTight;   //!
   TBranch        *b_el_rgLoose;   //!
   TBranch        *b_el_rgMedium;   //!
   TBranch        *b_el_rgTight;   //!
   TBranch        *b_el_multiLepton;   //!
   TBranch        *b_el_nGoodVtx;   //!
   TBranch        *b_el_nPileupPrimaryVtx;   //!
   TBranch        *b_calo_et;   //!
   TBranch        *b_calo_eta;   //!
   TBranch        *b_calo_phi;   //!
   TBranch        *b_trig_L1_emClus;   //!
   TBranch        *b_trig_L1_tauClus;   //!
   TBranch        *b_trig_L1_emIsol;   //!
   TBranch        *b_trig_L1_hadIsol;   //!
   TBranch        *b_trig_L1_thrNames;   //!
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
   TBranch        *b_mc_hasMC;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_isTop;   //!
   TBranch        *b_mc_isParton;   //!
   TBranch        *b_mc_isMeson;   //!
   TBranch        *b_mc_isTau;   //!
   TBranch        *b_mc_isMuon;   //!
   TBranch        *b_mc_isPhoton;   //!
   TBranch        *b_mc_isElectron;   //!
   TBranch        *b_mc_hasZMother;   //!
   TBranch        *b_mc_hasWMother;   //!

   // Histograms
   TH1F *__layerHistos[7];

   Ntuple(TTree *tree=0);
   virtual ~Ntuple();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   //virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     GenRingLayerHistos();
   virtual TH1F *   GetRingLayerHisto(Int_t);
};

#endif

#ifdef Ntuple_cxx
Ntuple::Ntuple(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   /*
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("PhysVal.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("PhysVal.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("PhysVal.root:/Trigger/HLT/Egamma/TPNtuple");
      dir->GetObject("Ntuple",tree);

   }
   */
   Init(tree);
}

Ntuple::~Ntuple()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Ntuple::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Ntuple::LoadTree(Long64_t entry)
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

void Ntuple::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   el_ringsE = 0;
   trig_L1_thrNames = 0;
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
   fChain->SetBranchAddress("el_et", &el_et, &b_el_et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_ethad1", &el_ethad1, &b_el_ethad1);
   fChain->SetBranchAddress("el_ehad1", &el_ehad1, &b_el_ehad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_d0", &el_d0, &b_el_d0);
   fChain->SetBranchAddress("el_wtots1", &el_wtots1, &b_el_wtots1);
   fChain->SetBranchAddress("el_fracs1", &el_fracs1, &b_el_fracs1);
   fChain->SetBranchAddress("el_Reta", &el_Reta, &b_el_Reta);
   fChain->SetBranchAddress("el_Rphi", &el_Rphi, &b_el_Rphi);
   fChain->SetBranchAddress("el_Eratio", &el_Eratio, &b_el_Eratio);
   fChain->SetBranchAddress("el_Rhad", &el_Rhad, &b_el_Rhad);
   fChain->SetBranchAddress("el_Rhad1", &el_Rhad1, &b_el_Rhad1);
   fChain->SetBranchAddress("el_deta1", &el_deta1, &b_el_deta1);
   fChain->SetBranchAddress("el_deta2", &el_deta2, &b_el_deta2);
   fChain->SetBranchAddress("el_dphi2", &el_dphi2, &b_el_dphi2);
   fChain->SetBranchAddress("el_dphiresc", &el_dphiresc, &b_el_dphiresc);
   fChain->SetBranchAddress("el_dphiresc2", &el_dphiresc2, &b_el_dphiresc2);
   fChain->SetBranchAddress("el_eprobht", &el_eprobht, &b_el_eprobht);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_nblayerhits", &el_nblayerhits, &b_el_nblayerhits);
   fChain->SetBranchAddress("el_nblayerolhits", &el_nblayerolhits, &b_el_nblayerolhits);
   fChain->SetBranchAddress("el_npixhits", &el_npixhits, &b_el_npixhits);
   fChain->SetBranchAddress("el_npixolhits", &el_npixolhits, &b_el_npixolhits);
   fChain->SetBranchAddress("el_nscthits", &el_nscthits, &b_el_nscthits);
   fChain->SetBranchAddress("el_nsctolhits", &el_nsctolhits, &b_el_nsctolhits);
   fChain->SetBranchAddress("el_ntrthightreshits", &el_ntrthightreshits, &b_el_ntrthightreshits);
   fChain->SetBranchAddress("el_ntrthits", &el_ntrthits, &b_el_ntrthits);
   fChain->SetBranchAddress("el_ntrthighthresolhits", &el_ntrthighthresolhits, &b_el_ntrthighthresolhits);
   fChain->SetBranchAddress("el_ntrtolhits", &el_ntrtolhits, &b_el_ntrtolhits);
   fChain->SetBranchAddress("el_ntrtxenonhits", &el_ntrtxenonhits, &b_el_ntrtxenonhits);
   fChain->SetBranchAddress("el_expectblayerhit", &el_expectblayerhit, &b_el_expectblayerhit);
   fChain->SetBranchAddress("el_nsihits", &el_nsihits, &b_el_nsihits);
   fChain->SetBranchAddress("el_nsideadsensors", &el_nsideadsensors, &b_el_nsideadsensors);
   fChain->SetBranchAddress("el_npixdeadsensors", &el_npixdeadsensors, &b_el_npixdeadsensors);
   fChain->SetBranchAddress("el_nsctdeadsensors", &el_nsctdeadsensors, &b_el_nsctdeadsensors);
   fChain->SetBranchAddress("el_ringsE", &el_ringsE, &b_el_ringsE);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_lhLoose", &el_lhLoose, &b_el_lhLoose);
   fChain->SetBranchAddress("el_lhMedium", &el_lhMedium, &b_el_lhMedium);
   fChain->SetBranchAddress("el_lhTight", &el_lhTight, &b_el_lhTight);
   fChain->SetBranchAddress("el_rgLoose", &el_rgLoose, &b_el_rgLoose);
   fChain->SetBranchAddress("el_rgMedium", &el_rgMedium, &b_el_rgMedium);
   fChain->SetBranchAddress("el_rgTight", &el_rgTight, &b_el_rgTight);
   fChain->SetBranchAddress("el_multiLepton", &el_multiLepton, &b_el_multiLepton);
   fChain->SetBranchAddress("el_nGoodVtx", &el_nGoodVtx, &b_el_nGoodVtx);
   fChain->SetBranchAddress("el_nPileupPrimaryVtx", &el_nPileupPrimaryVtx, &b_el_nPileupPrimaryVtx);
   fChain->SetBranchAddress("calo_et", &calo_et, &b_calo_et);
   fChain->SetBranchAddress("calo_eta", &calo_eta, &b_calo_eta);
   fChain->SetBranchAddress("calo_phi", &calo_phi, &b_calo_phi);
   fChain->SetBranchAddress("trig_L1_emClus", &trig_L1_emClus, &b_trig_L1_emClus);
   fChain->SetBranchAddress("trig_L1_tauClus", &trig_L1_tauClus, &b_trig_L1_tauClus);
   fChain->SetBranchAddress("trig_L1_emIsol", &trig_L1_emIsol, &b_trig_L1_emIsol);
   fChain->SetBranchAddress("trig_L1_hadIsol", &trig_L1_hadIsol, &b_trig_L1_hadIsol);
   fChain->SetBranchAddress("trig_L1_thrNames", &trig_L1_thrNames, &b_trig_L1_thrNames);
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
   fChain->SetBranchAddress("mc_hasMC", &mc_hasMC, &b_mc_hasMC);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_isTop", &mc_isTop, &b_mc_isTop);
   fChain->SetBranchAddress("mc_isParton", &mc_isParton, &b_mc_isParton);
   fChain->SetBranchAddress("mc_isMeson", &mc_isMeson, &b_mc_isMeson);
   fChain->SetBranchAddress("mc_isTau", &mc_isTau, &b_mc_isTau);
   fChain->SetBranchAddress("mc_isMuon", &mc_isMuon, &b_mc_isMuon);
   fChain->SetBranchAddress("mc_isPhoton", &mc_isPhoton, &b_mc_isPhoton);
   fChain->SetBranchAddress("mc_isElectron", &mc_isElectron, &b_mc_isElectron);
   fChain->SetBranchAddress("mc_hasZMother", &mc_hasZMother, &b_mc_hasZMother);
   fChain->SetBranchAddress("mc_hasWMother", &mc_hasWMother, &b_mc_hasWMother);

   // Instantiate the histograms
   this->__layerHistos[0] = new TH1F("PS",   "PS",    50,-3000,3000);
   this->__layerHistos[1] = new TH1F("EM1",  "EM1",   50,-2000,2000);
   this->__layerHistos[2] = new TH1F("EM2",  "EM2",   50,-4000,4000);
   this->__layerHistos[3] = new TH1F("EM3",  "EM3",   50,-2000,2000);
   this->__layerHistos[4] = new TH1F("HAD1", "HAD1",  50,-3000,4000);
   this->__layerHistos[5] = new TH1F("HAD2", "HAD2",  50,-2000,3000);
   this->__layerHistos[6] = new TH1F("HAD3", "HAD3",  50,-3000,3000);

   cout << "Init()" << endl;
   cout << __layerHistos[0] << endl;
   cout << __layerHistos[1] << endl;
   cout << __layerHistos[2] << endl;
   cout << __layerHistos[3] << endl;
   cout << __layerHistos[4] << endl;
   cout << __layerHistos[5] << endl;
   cout << __layerHistos[6] << endl;
   cout << "OK" << endl;
   Notify();
}

Bool_t Ntuple::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Ntuple::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Ntuple::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

void   Ntuple::GenRingLayerHistos()
{
   if (this->fChain == 0) return;

   Long64_t nEntries, nRings, nClusters, nLayers;
   Long64_t iEvent, jEntry, iRing, iCluster, iLayer;

   nRings = 100;
   nLayers = 7;
   Int_t ringLayers[7][2] = {{0,8},{8,72},{72,80},{80,88},{88,92},{92,96},{96,100}};

   nEntries = fChain->GetEntriesFast();

   //cout << "Are " << nEntries << endl;
   //cout << "We are going :DDDD" << endl;
   //for (Int_t iLoop=0; iLoop<5; iLoop++)
   //{
   //cout << endl << endl;
   //cout << "NEW LOOP"<< endl;
   //cout << endl << endl;
   for (iEvent=0;iEvent<nEntries;iEvent++)
   {
      //cout << "nEntries " << nEntries << endl;
      //cout << "iEntry " << iEntry << endl;
      //jEntry = LoadTree(nEntries-1);
      //cout << "Loaded! :D ->" << jEntry <<endl;
      //if (jEntry < 0) continue;
      fChain->GetEntry(iEvent);
      //cout << "Gotten :D" << endl;
      //cout << endl << endl << endl;
      if (this->trig_L2_calo_rings->size() > 0)
      {
         cout << "Rings: " << this->trig_L2_calo_rings->size() << endl;
         //cout << endl << endl << endl;
         //nClusters = (Int_t) this->trig_L2_calo_rings->size()/100;

         for (iLayer=0;iLayer<nLayers;iLayer++)
         {
            //cout << "iLayer " << iLayer << " nLayers " << nLayers << endl;
            //cout << "The size is: " << trig_L2_calo_rings->size() << endl;

            for (iRing=ringLayers[iLayer][0];(iRing<ringLayers[iLayer][1]);iRing++)
            {
               //cout << "iRing " << iRing << " nRings " << nRings << endl;
               //cout << trig_L2_calo_rings->size() << endl;
               //cout << trig_L2_calo_rings->at(iRing) << endl;
               //for (iCluster=0;iCluster<nClusters;iCluster++)
               //{
                //  this->__layerHistos[iLayer]->Fill(this->trig_L2_calo_rings->at(iCluster*100 + iRing));
               //}
               this->__layerHistos[iLayer]->Fill(this->trig_L2_calo_rings->at(iRing));
            }
         }
      }
      // if (Cut(ientry) < 0) continue;
   }
   //}
   return;
}

TH1F * Ntuple::GetRingLayerHisto(Int_t iLayer)
{
   return this->__layerHistos[iLayer];
}

#endif // #ifdef Ntuple_cxx
