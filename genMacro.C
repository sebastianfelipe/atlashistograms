#define genMacro_cxx
#define Ntuple_cxx
#include <TStyle.h>
#include <TCanvas.h>
#include "Ntuple.h"


void getRingLayerHistos(TDirectoryFile *,TH1F ****,Int_t,Int_t);
void getRingLayerHistosExtended(TDirectoryFile *,TH1F ****,Int_t,Int_t);
void overplot(TH1F ***,TH1F ***,TList *,Int_t,Int_t);
//void getRingHistos(TDirectoryFile *,TH1F ****,Int_t,Int_t);
//void genRingLayerHistos(TH1F ***,TH1F ****,Int_t,Int_t);
//void generateRingPlots(TDirectoryFile *,TDirectoryFile *,Int_t);

void genMacro()
{
	//TString physValNameA("/afs/cern.ch/user/s/storresg/work/trigger/tests/testrd1/PhysVal.root");
	//TString physValNameB("/afs/cern.ch/user/s/storresg/work/trigger/tests/testrd2/PhysVal.root");
	//TString physValNameB("/afs/cern.ch/user/s/storresg/work/trigger/tests/testrd1/PhysVal.root");
	TString physValNameA("/afs/cern.ch/user/s/storresg/work/trigger/generator/tests/september-1/dataPhysval.root");
	TString physValNameB("/afs/cern.ch/user/s/storresg/work/trigger/generator/tests/september-1/validPhysval.root");

	TDirectoryFile *_nTupleA;
	TDirectoryFile *_nTupleB;
	TFile *_t0;
	TDirectoryFile *trigger;
	TList *_tlk;
	Int_t nEntries;
	_t0 = TFile::Open(physValNameA);
	trigger = (TDirectoryFile *) gFile->GetDirectory("Trigger");
	_nTupleA = ((TDirectoryFile *)((TDirectoryFile *)((TDirectoryFile *) trigger->Get("HLT"))->Get("Egamma"))->Get("Ntuple"));
	_t0 = TFile::Open(physValNameB);
	trigger = (TDirectoryFile *) gFile->GetDirectory("Trigger");
	_nTupleB = ((TDirectoryFile *)((TDirectoryFile *)((TDirectoryFile *) trigger->Get("HLT"))->Get("Egamma"))->Get("TPNtuple"));

	//generateRingPlots(_nTupleA,_nTupleB);

	TH1F ***___histosA, ***___histosB,***___layerHistosA,***___layerHistosB;
	//cout << ___histosA << endl;	
	//getRingHistos(_nTupleA,&___histosA);
	//cout << ___histosA << endl;
	//getRingHistos(_nTupleB,&___histosB);

	//___histosA[0][1]->Draw();
	//genRingLayerHistos(___histosA,&___layerHistosA);
	//genRingLayerHistos(___histosB,&___layerHistosB);

	_tlk = _nTupleA->GetListOfKeys();
	nEntries = _tlk->GetEntries();
	getRingLayerHistos(_nTupleA,&___layerHistosA,nEntries,1);
	getRingLayerHistos(_nTupleB,&___layerHistosB,nEntries,1);
	overplot(___layerHistosA,___layerHistosB,_tlk,nEntries,1);
}


// From this to down are the real code!!!
void getRingLayerHistos(TDirectoryFile *_nTuple, TH1F ****____layerHistos,Int_t nEntries,Int_t bias)
{
	Int_t nTrees,nRings,nLayers;
	Int_t iTree,iRing,iLayer;
	TTree *_tree;
	TList *tlk;
	Ntuple *_nTupleTree;

	Int_t ringLayers[7][2] = {{0,8},{8,72},{72,80},{80,88},{88,92},{92,96},{96,100}};
	nTrees = nEntries;
	nRings = 100;
	nLayers = 7;

	// Allocating memory to the layer's arrays
	(*____layerHistos) = (TH1F ***) malloc((nTrees-bias)*sizeof(TH1F **));
	for (iTree=0;iTree<nTrees-bias;iTree++)
	{
		(*____layerHistos)[iTree] = (TH1F **) malloc(nLayers*sizeof(TH1F *));
	}
	// Get histograms from TTrees
	for (iTree=0;iTree<nTrees-bias;iTree++)
	//for (iTree=0;iTree<1;iTree++)
	{
		tlk = _nTuple->GetListOfKeys();
		_nTuple->GetObject(tlk->At(iTree+bias)->GetName(),_tree);
		//cout << "Creating the nTupleTree..." << endl;
		_nTupleTree = new Ntuple(_tree);
		//cout << "Generating the ring layers histos..." << endl;
		_nTupleTree->GenRingLayerHistos();
		//cout << "Already Generated!" << endl;
		for (iLayer=0;iLayer<nLayers;iLayer++)
		{
			//cout << "For layer " << iLayer << " getting the histo layer" << endl;
			(*____layerHistos)[iTree][iLayer] = _nTupleTree->GetRingLayerHisto(iLayer);
			//cout << "Already got! :D" << endl;
		}
		_tree = NULL;
	}
}

void getRingLayerHistosExtended(TDirectoryFile *_nTuple, TH1F ****____layerHistos,Int_t nEntries,Int_t bias)
{
	Int_t nTrees,nRings,nLayers;
	Int_t iTree,iRing,iLayer;
	TTree *_tree;
	TList *tlk;
	Ntuple *_nTupleTree;

	Int_t ringLayers[7][2] = {{0,8},{8,72},{72,80},{80,88},{88,92},{92,96},{96,100}};
	nTrees = nEntries;
	nRings = 100;
	nLayers = 7;

	// Allocating memory to the layer's arrays
	(*____layerHistos) = (TH1F ***) malloc((nTrees-bias)*sizeof(TH1F **));
	for (iTree=0;iTree<nTrees-bias;iTree++)
	{
		(*____layerHistos)[iTree] = (TH1F **) malloc(nLayers*sizeof(TH1F *));
	}
	// Get histograms from TTrees
	for (iTree=0;iTree<nTrees-bias;iTree++)
	//for (iTree=0;iTree<1;iTree++)
	{
		tlk = _nTuple->GetListOfKeys();
		_nTuple->GetObject(tlk->At(iTree+bias)->GetName(),_tree);
		//cout << "Creating the nTupleTree..." << endl;
		_nTupleTree = new Ntuple(_tree);
		//cout << "Generating the ring layers histos..." << endl;
		_nTupleTree->GenRingLayerHistos();
		//cout << "Already Generated!" << endl;
		for (iLayer=0;iLayer<nLayers;iLayer++)
		{
			//cout << "For layer " << iLayer << " getting the histo layer" << endl;
			(*____layerHistos)[iTree][iLayer] = _nTupleTree->GetRingLayerHisto(iLayer);
			//cout << "Already got! :D" << endl;
		}
		_tree = NULL;
	}
}

void overplot(TH1F ***___histosA,TH1F ***___histosB,TList *_names,Int_t nEntries,Int_t bias)
{
	Int_t nTrees,nLayers;
	Int_t iTree,iCanvas,iLayer;
	Float_t alpha;

	nTrees = nEntries;
	nLayers = 7;
	alpha = 0.5;

	TCanvas *_canvas;
	TLegend *_leg;

   	for (iTree=0;iTree<nTrees-bias;iTree++)
  	{
  		_canvas = new TCanvas();
  		//canvas[iKey]->Divide(sqrt(nBranches)+1,sqrt(nBranches)+1,0,0);
  		_canvas->DivideSquare(nLayers);
  		iCanvas=1;
  		for (iLayer=0;iLayer<nLayers;iLayer++)
  		{
  			_canvas->cd(iCanvas++);

			_leg = new TLegend(.98,.75,.7,.6);
			___histosA[iTree][iLayer]->SetLineColor(kRed);
			___histosA[iTree][iLayer]->SetFillColorAlpha(kRed,alpha);
			___histosB[iTree][iLayer]->SetLineColor(kBlue);
			___histosB[iTree][iLayer]->SetFillColorAlpha(kBlue,alpha);
			___histosA[iTree][iLayer]->SetLineWidth((Width_t) 0.3);
			___histosB[iTree][iLayer]->SetLineWidth((Width_t) 0.3);
	      	if (___histosA[iTree][iLayer]->GetMaximum() >= ___histosB[iTree][iLayer]->GetMaximum())
	      	{
	        	___histosA[iTree][iLayer]->DrawNormalized("histo");  
	         	___histosB[iTree][iLayer]->DrawNormalized("samehisto");
	      	}
	      	else
	      	{
	         	___histosB[iTree][iLayer]->DrawNormalized("histo");  
	         	___histosA[iTree][iLayer]->DrawNormalized("samehisto");
	      	}
  			_leg->AddEntry(___histosA[iTree][iLayer], "Real Data", "l");
	        _leg->AddEntry(___histosB[iTree][iLayer], "Simulated Data", "l");
      		_leg->Draw();
      		//}
  		}
  		//_canvas->Draw();
  		_canvas->Print(Form("outputs/%s_ring_Layers_OL.pdf",_names->At(iTree+bias)->GetName()));
		//cout << "Writing..." << endl;
		//canvas->Print(Form("%s_%s_OL.pdf",mcPrefixON,tlk->At(iKey)->GetName()));
		//cout << "Generated! :D" << endl;
  	}

  	cout << "The plots have generated! :)" << endl;
}

//void getRingHistos(TDirectoryFile *_nTuple,TH1F ****____histos,Int_t nEntries,Int_t bias)
//{
//	Int_t nTrees,nRings;
//	Int_t iTree,iRing;
//	TTree *_tree;
//	TList *tlk;
//
//	//nTrees = 40;
//	nRings = 100;
//
//	tlk = _nTuple->GetListOfKeys();
//	nTrees = nEntries;
//
//	// Allocating memory to the rings' arrays
//	(*____histos) = (TH1F ***) malloc((nTrees-bias)*sizeof(TH1F **));
//	for (iTree=0;iTree<nTrees-bias;iTree++)
//	{
//		(*____histos)[iTree] = (TH1F **) malloc(nRings*sizeof(TH1F *));
//	}
//	// Filling with empties histograms
//	for (iTree=0;iTree<nTrees-bias;iTree++)
//	{
//		for (iRing=0;iRing<nRings;iRing++)
//		{
//			(*____histos)[iTree][iRing] = new TH1F();
//		}
//	}
//
//	// Getting the histograms from the tree
//	for (iTree=0;iTree<nTrees-bias;iTree++)
//	{
//		_nTuple->GetObject(tlk->At(iTree+bias)->GetName(),_tree);
//		cout << tlk->At(iTree+bias)->GetName() << endl;
//		for (iRing=0;iRing<nRings;iRing++)
//		{
//			_tree->Draw(Form("trig_L2_calo_rings[%d]>>%s_trig_L2_calo_rings[%d][%d]",iRing,tlk->At(iTree+bias)->GetName(),iTree,iRing),"","norm;goff");
//			if ((TH1F *) gDirectory->Get(Form("%s_trig_L2_calo_rings[%d][%d]",tlk->At(iTree+bias)->GetName(),iTree,iRing)) != NULL)
//					(*____histos)[iTree][iRing] = (TH1F *) ((TH1F *) gDirectory->Get(Form("%s_trig_L2_calo_rings[%d][%d]",tlk->At(iTree+bias)->GetName(),iTree,iRing)))->Clone();
//		}
//	}
//
//	return;
//}
//
//void genRingLayerHistos(TH1F ***___histos,TH1F ****____layerHistos,Int_t nEntries,Int_t bias)
//{
//	Int_t nTrees,nRings,nLayers;
//	Int_t iTree,iRing,iLayer;
//	TTree *_tree;
//	TList *tlk;
//
//	Int_t ringLayers[7][2] = {{0,8},{8,72},{72,80},{80,88},{88,92},{92,96},{96,100}};
//	nTrees = nEntries;
//	nRings = 100;
//	nLayers = 7;
//
//	// Allocating memory to the layer's arrays
//	(*____layerHistos) = (TH1F ***) malloc((nTrees-bias)*sizeof(TH1F **));
//	for (iTree=0;iTree<nTrees-bias;iTree++)
//	{
//		(*____layerHistos)[iTree] = (TH1F **) malloc(nLayers*sizeof(TH1F *));
//	}
//	// Filling with empties histograms
//	for (iTree=0;iTree<nTrees-bias;iTree++)
//	{
//		for (iLayer=0;iLayer<nLayers;iLayer++)
//		{
//			(*____layerHistos)[iTree][iLayer] = new TH1F();
//		}
//	}
//	/*
//	0:7   PS
//	8:71  EM1
//	72:79 EM2
//	80:87 EM3
//	88:91 HAD1
//	92:95 HAD2
//	96:99 HAD3
//	*/
//	for (iTree=0;iTree<nTrees-bias;iTree++)
//	{
//		for (iLayer=0;iLayer<nLayers;iLayer++)
//		{
//			for (iRing=ringLayers[iLayer][0];iRing<ringLayers[iLayer][1];iRing++)
//			{
//				(*____layerHistos)[iTree][iLayer]->Add(___histos[iTree][iRing]);
//			}
//		}
//	}
//	return;
//}




//void generateRingPlots(TDirectoryFile *nTupleA, TDirectoryFile *nTupleB)
//{
//	TList *tlk;
//	Int_t iMc,nKeys,iKey,nBranches,iBranch;
//	TTree *_tree, *treeA,*treeB;
//	TObjArray *toa;
//	TBranch *tb;
//	TH1F *histoA,*histoB;
//	TString *_histoname;
//	TFile *_tOut;
//	//TVector *_rings;
//	Int_t iRing;
//	vector<float>   *_rings;
//	tlk = nTupleA->GetListOfKeys();
//	nKeys = tlk->GetEntries();
//
//	cout << "Analizing the \"" << nTupleA->GetName() <<"\" directory..." << endl;
//	cout << "It contains " << nKeys <<  " TTrees..." << endl;
//	cout << endl;
//
//	tOut = TFile::Open("PhysvalHistosA.root","RECREATE");
//	int i;
//	TCanvas *canvas;
//	
//	for (iKey=3;iKey<nKeys;iKey++)
//	{
//		//TCanvas *canvas = new TCanvas();
//		nTupleA->GetObject(tlk->At(iKey)->GetName(),treeA);
//		nTupleB->GetObject(tlk->At(iKey)->GetName(),treeB);
//		//tree->Print();
//		//mc = new mcClass(tree);
//		//toa = treeA->GetListOfBranches();
//		//nBranches = treeA->GetNbranches();
//		//canvas->Divide(sqrt(nBranches)+1,sqrt(nBranches)+1,0,0);
//		//canvas->DivideSquare(nBranches);
//		/*
//		for (iBranch=0;iBranch<nBranches;iBranch++)
//		{
//			//canvas->cd(iBranch+1);
//			tb = (TBranch *) toa->At(iBranch);
//			tree->Draw(tb->GetName(),"","norm");
//			//_histoname = Form("%d_%s_%s",iMc,tlk->At(iKey)->GetName(),tb->GetName());
//			//tree->Draw(Form("%s>>%s",tb->GetName(),_histoname));
//			histo = (TH1F *) gPad->GetPrimitive("htemp");
//			if (histo == NULL) histo = new TH1F();
//			//_histoname = new TString(Form("%s_%s",tlk->At(iKey)->GetName(),tb->GetName()));
//			histo->SetName(Form("%s_%s",tlk->At(iKey)->GetName(),tb->GetName()));
//			histo->Write();
//		}
//		*/
//		/*
//		0:7   PS
//		8:71  EM1
//		72:79 EM2
//		80:87 EM3
//		88:91 HAD1
//		92:95 HAD2
//		96:99 HAD3
//		*/
//		//TH1F *_histos[2][7];
//		Int_t iTree,iHisto,iEntry;
//		//for (iTree=0;iTree<2;iTree++)
//		//{
//		//	for (iHisto=0;iHisto<7;iHisto++)
//		//	{
//		//		_histos[iTree][iHisto] = new TH1F();
//		//	}
//		//}
//
//		
//		for (iTree=0;iTree<2;iTree++)
//		{
//			if (iTree == 0) _tree = treeA;
//			else _tree = treeB;
//
//			_tree->SetBranchAddress("trig_L2_calo_rings",&_rings);
//			for (iEntry=0;iEntry<_tree->GetEntries();++iEntry)
//			{
//				cout << _tree->GetEntries() << endl;
//				_tree->GetEntry(iEntry);
//				//for (iRing=0;iRing<100;iRing++)
//				//{
//					//_histos[iTree][iRing]->Fill(_vec->At(iRing));
//					//cout << _rings->at(iRing) << endl;
//				//}
//			}
//		}
//		
//		/*
//		treeB->Draw("trig_L2_calo_rings[0:7]>>PSA","","norm;goff");
//		treeB->Draw("trig_L2_calo_rings[8<72]>>EM1A","","norm;goff");
//		treeB->Draw("trig_L2_calo_rings[72<80]>>EM2A","","norm;goff");
//		treeB->Draw("trig_L2_calo_rings[80<88]>>EM3A","","norm;goff");
//		treeB->Draw("trig_L2_calo_rings[88<92]>>HAD1","","norm;goff");
//		treeB->Draw("trig_L2_calo_rings[92<95]>>HAD2","","norm;goff");
//		treeB->Draw("trig_L2_calo_rings[96<100]>>HAD3","","norm;goff");
//		histo = (TH1F *) gPad->GetPrimitive("EM2A");
//		
//		//treeB->Draw("trig_L2_calo_rings[0<8]","","norm;goff");
//		//histoB = (TH1F *) gPad->GetPrimitive("htemp");
//		if (histoA == NULL) histoA = new TH1F();
//		//if (histoB == NULL) histoB = new TH1F();
//		histoA->DrawNormalized();
//		//histoB->DrawNormalized();
//		*/
//		cin >> i;
//	}
//}
