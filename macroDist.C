#define mcClass_cxx
#define egammaD3PD_cxx
#include "mcClass.h"
#include "egammaD3PD.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#define const N_EGAMMA_BRANCHES = 20

void distFromMcDirFiles()
{
	TString mcNames[2] = {"/work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root",
						  "/work/storres/mc14_13TeV.147446.PowhegPythia8_AZNLO_Zee_DiLeptonFilter.recon.e3059_s2045_s2008_r5989_ntupleEGamma.root"};
	TString mcPrefixesOutputNames[2] = {"Histograms/MC/mc_JF17",
										"Histograms/MC/mc_Zee"};
	TFile *_file0;
	TList *tlk;
	Int_t iMc,nKeys,iKey,nBranches,iBranch;
	TTree *tree;
	mcClass *mc;
	TObjArray *toa;
	TBranch *tb;
	TH1F *histo;

  	for (iMc=0;iMc<2;iMc++)
  	{
  		_file0 = TFile::Open(mcNames[iMc]);
  		cout << "Analizing: " << mcNames[iMc] << endl;
  		cout << "The name of the Directory File is: " << NavNtuple->GetName() << endl;
  		tlk = NavNtuple->GetListOfKeys();
  		nKeys = tlk->GetEntries();
  		cout << "The number of directories it contains: " << nKeys << endl;
  		for (iKey=0;iKey<nKeys;iKey++)
  		{
  			TCanvas *canvas = new TCanvas();
  			NavNtuple->GetObject(tlk->At(iKey)->GetName(),tree);
  			//tree->Print();
			//mc = new mcClass(tree);
			toa = tree->GetListOfBranches();
			nBranches = tree->GetNbranches();
			//canvas->Divide(sqrt(nBranches)+1,sqrt(nBranches)+1,0,0);
			canvas->DivideSquare(nBranches);
			for (iBranch=0;iBranch<nBranches;iBranch++)
			{
				canvas->cd(iBranch+1);
				tb = (TBranch *) toa->At(iBranch);
				tree->Draw(tb->GetName(),"","norm");
				histoname = Form("%d_%s_%s",iMc,tlk->At(iKey)->GetName(),tb->GetName());
				tree->Draw(Form("%s>>%s",tb->GetName(),histoname));
				histo = (TH1F *) gPad->GetPrimitive(histoname);
				if (histo == NULL) histo = new TH1F();
				histo->SetLineWidth(.1);
				histo->DrawNormalized();
			}
			cout << "Writing..." << endl;
			canvas->Print(Form("%s_%s.pdf",(char *) mcPrefixesOutputNames[iMc],tlk->At(iKey)->GetName()));
			cout << "Generated! :D" << endl;
  		}
  	}
  	return;
}

void genPlotFilesFromMcDirFiles()
{
	TString mcNames[2] = {"/work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root",
						  "/work/storres/mc14_13TeV.147446.PowhegPythia8_AZNLO_Zee_DiLeptonFilter.recon.e3059_s2045_s2008_r5989_ntupleEGamma.root"};
	char mcPrefixON[] = "Histograms/MC_SS_OL/mc_SS_";

	TFile *_file0;
	TList *tlk;
	Int_t iMc,nKeys,iKey,nBranches,iBranch;
	TTree *tree;
	mcClass *mc;
	TObjArray *toa;
	TBranch *tb;
	TDirectoryFile *tdf;
	TList *tldirs;
	Int_t lll;
	TH1F *histos[3][20][75];
	TCanvas *canvas[20];
	Int_t iCanvas;
	char * histoname;
	Float_t alpha = 0.5;

	cout << "Retrieving information..." << endl;
  	for (iMc=0;iMc<2;iMc++)
  	{
  		_file0 = TFile::Open(mcNames[iMc]);
  		cout << "Analizing: " << mcNames[iMc] << endl;
  		cout << "The name of the Directory File is: " << NavNtuple->GetName() << endl;
  		tlk = NavNtuple->GetListOfKeys();
  		nKeys = tlk->GetEntries();
  		cout << "The number of directories it contains: " << nKeys << endl;
  		for (iKey=0;iKey<nKeys;iKey++)
  		{
  			NavNtuple->GetObject(tlk->At(iKey)->GetName(),tree);
  			//tree->Print();
			//mc = new mcClass(tree);
			toa = tree->GetListOfBranches();
			nBranches = tree->GetNbranches();
			for (iBranch=0;iBranch<nBranches;iBranch++)
			{
				//cout << "iBranch: " << iBranch << endl;
				tb = (TBranch *) toa->At(iBranch);
				histoname = Form("%s_%d_%s_%s",NavNtuple->GetName(),iMc,tlk->At(iKey)->GetName(),tb->GetName());
				tree->Draw(Form("%s>>%s",tb->GetName(),histoname));
				histos[iMc][iKey][iBranch] = (TH1F *) gPad->GetPrimitive(histoname);
				if (histos[iMc][iKey][iBranch] == NULL) histos[iMc][iKey][iBranch] = new TH1F();
				//cout << "histo" << endl;
				//cout << tldirs->Print() << endl;
			}
  		}
  	}
  	cout << "All the information was retrived!" << endl;

  	cout << "Ploting..." << endl;
  	cout << "nKeys -> " << nKeys << endl;
  	cout << "nBranches -> " << nBranches << endl;
   	for (iKey=0;iKey<nKeys;iKey++)
  	{
  		canvas[iKey] = new TCanvas();
  		//canvas[iKey]->Divide(sqrt(nBranches)+1,sqrt(nBranches)+1,0,0);
  		canvas[iKey]->DivideSquare(12);
  		iCanvas=1;
  		for (iBranch=0;iBranch<nBranches;iBranch++)
  		{
			if ((iBranch <31) || (iBranch > 43) || (iBranch==42)) continue;
  			canvas[iKey]->cd(iCanvas++);
  			cout << iKey << "..." << iBranch << "..."<< endl;
  			cout << histos[0][iKey][iBranch] << endl;
  			cout << histos[1][iKey][iBranch] << endl;
  			//if ((histos[0][iKey][iBranch] != NULL) && (histos[1][iKey][iBranch] != NULL))
  			//{	  			
			TLegend *leg = new TLegend(.98,.75,.7,.6);
			histos[0][iKey][iBranch]->SetLineColor(kRed);
			histos[0][iKey][iBranch]->SetFillColorAlpha(kRed,alpha);
			histos[1][iKey][iBranch]->SetLineColor(kBlue);
			histos[1][iKey][iBranch]->SetFillColorAlpha(kBlue,alpha);
			histos[0][iKey][iBranch]->SetLineWidth(.3);
			histos[1][iKey][iBranch]->SetLineWidth(.3);
	      	if (histos[0][iKey][iBranch]->GetMaximum() >= histos[1][iKey][iBranch]->GetMaximum())
	      	{
	        	histos[0][iKey][iBranch]->DrawNormalized("histo");  
	         	histos[1][iKey][iBranch]->DrawNormalized("samehisto");
	      	}
	      	else
	      	{
	         	histos[1][iKey][iBranch]->DrawNormalized("histo");  
	         	histos[0][iKey][iBranch]->DrawNormalized("samehisto");
	      	}
  			leg->AddEntry(histos[0][iKey][iBranch], "JF17 Background (NavNtuple)", "l");
	        leg->AddEntry(histos[1][iKey][iBranch], "Zee Truth (NavNtuple)", "l");
      		leg->Draw();
      		//}
  		}
		cout << "Writing..." << endl;
		canvas[iKey]->Print(Form("%s_%s_OL.pdf",mcPrefixON,tlk->At(iKey)->GetName()));
		cout << "Generated! :D" << endl;
  	}

  	cout << "Great! :D" << endl;
  	
  	return;
}

void distFromEgammas()
{
   TString emgFiles[4] = {"/work/storres/user.wsfreund.JF17_pileup_ZeePileupWrtStandardEgamma.r3098.120822185055",
   						  "/work/storres/user.wsfreund.JF17_pileup_ZeePileupWrtTruth.r3098.120822185055",
						   "/work/storres/user.wsfreund.Zee_pileup_ZeePileupWrtStandardEgamma.r3098.120822185003",
						   "/work/storres/user.wsfreund.Zee_pileup_ZeePileupWrtTruth.r3098.120822185003"};

   TString outputNames[4] = {"Histograms/egammaD3PD/JF17SE_ShowerShape.pdf",
							 "Histograms/egammaD3PD/JF17Truth_ShowerShape.pdf",
							 "Histograms/egammaD3PD/ZeeSE_ShowerShape.pdf",
							 "Histograms/egammaD3PD/ZeeTruth_ShowerShape.pdf"};

	bool Truth[4] = {false,false,false,true};

	TFile *_file0;
	Int_t iEmg,iBranchEntry,nBranches,iBranch;
	TTree *tree;
	TObjArray *toa;
	TBranch *tb;

  	for (iEmg=0;iEmg<4;iEmg++)
  	{
  		_file0 = TFile::Open(emgFiles[iEmg]);
  		cout << "Analizing: " << emgFiles[iEmg] << endl;
  		cout << "The name of the TTree is: " << egammaD3PD->GetName() << endl;
		TCanvas *canvas = new TCanvas();
		//tree->Print();
		//mc = new mcClass(tree);
		toa = egammaD3PD->GetListOfBranches();
		nBranches = egammaD3PD->GetNbranches();
		//canvas->Divide(sqrt(nBranches)+1,sqrt(nBranches)+1,0,0);
		canvas->DivideSquare(nBranches);
		for (iBranch=0;iBranch<nBranches;iBranch++)
		{
			canvas->cd(iBranch+1);
			tb = (TBranch *) toa->At(iBranch);
			if (Truth[iEmg]) {egammaD3PD->Draw(tb->GetName(),"(el_truth_mothertype==23) && (abs(el_truth_type)==11)","norm");}
			else {egammaD3PD->Draw(tb->GetName(),"","norm");}
		}
		cout << "Writing..." << endl;
		canvas->Print(outputNames[iEmg]);
		cout << "Generated! :D" << endl;
  	}
  	return;
}

void distOverLappedFromEgammas()
{
   	TString emgSEFiles[2] = {"/work/storres/user.wsfreund.JF17_pileup_ZeePileupWrtStandardEgamma.r3098.120822185055",
						    "/work/storres/user.wsfreund.Zee_pileup_ZeePileupWrtStandardEgamma.r3098.120822185003"};

   	TString emgTruthFiles[2] = {"/work/storres/user.wsfreund.JF17_pileup_ZeePileupWrtTruth.r3098.120822185055",
						       "/work/storres/user.wsfreund.Zee_pileup_ZeePileupWrtTruth.r3098.120822185003"};

    TString outputNames[3] = {"Histograms/egammaD3PD/JF17_SS_OL.pdf",
							  "Histograms/egammaD3PD/Zee_SS_OL.pdf",
							  "Histograms/egammaD3PD/JF17_Zee_SS_OL.pdf"};

	bool emgSETruth[2] = {false,false};
	bool emgTruthTruth[2] = {false,true};
	bool truthFile;

	TFile *_file0;
	Int_t iEmg,iOLFile,nBranches,iBranch;
	TTree *tree;
	TObjArray *toa;
	TBranch *tb;
	TH1F *histos[2][N_EGAMMA_BRANCHES];

  	for (iEmg=1;iEmg<2;iEmg++)
  	{
  		for (iOLFile=0;iOLFile<2;iOLFile++)
  		{
  			if (iOLFile == 0)
  			{
  				truthFile = false;
	  			_file0 = TFile::Open(emgSEFiles[0]);
	  			cout << "Analizing: " << emgSEFiles[0] << endl;
	  		}
	  		else
	  		{
	  		  	truthFile = true;
	  			_file0 = TFile::Open(emgTruthFiles[1]);
	  			cout << "Analizing: " << emgTruthFiles[1] << endl;	
	  		}

	  		cout << "The name of the first TTree is: " << egammaD3PD->GetName() << endl;

			//tree->Print();
			//mc = new mcClass(tree);
			toa = egammaD3PD->GetListOfBranches();
			nBranches = egammaD3PD->GetNbranches();

			for (iBranch=0;iBranch<nBranches;iBranch++)
			{
				tb = (TBranch *) toa->At(iBranch);
				if ((truthFile && emgTruthTruth[iEmg]))
				{
					egammaD3PD->Draw(tb->GetName(),"(el_truth_mothertype==23) && (abs(el_truth_type)==11)","norm;goff");
				}
				else
				{
					egammaD3PD->Draw(tb->GetName(),"","norm;goff");
				}
				histos[iOLFile][iBranch] = (TH1F *) htemp->Clone();
			}
		}

		cout << "Plotting the histograms" << endl;
		TCanvas *canvas = new TCanvas();
		//canvas->Divide(sqrt(N_EGAMMA_BRANCHES)+1,sqrt(N_EGAMMA_BRANCHES)+1,0,0);
		//canvas->Divide(4,3,0,0);
		canvas->DivideSquare(N_EGAMMA_BRANCHES);
		for (iBranch=0;iBranch<N_EGAMMA_BRANCHES;iBranch++)
		{
			//if ((iBranch <31) || (iBranch > 43) || (iBranch==42)) continue;
			canvas->cd(iBranch+1);
			TLegend *leg = new TLegend(.98,.75,.7,.6);
			histos[0][iBranch]->SetLineColor(kRed);
			histos[1][iBranch]->SetLineColor(kBlue);
			histos[0][iBranch]->SetLineWidth(0.1);
			histos[1][iBranch]->SetLineWidth(0.1);
	      	if (histos[0][iBranch]->GetMaximum() >= histos[1][iBranch]->GetMaximum())
	      	{
	        	histos[0][iBranch]->Draw("histo");  
	         	histos[1][iBranch]->Draw("samehisto");
	      	}
	      	else
	      	{
	         	histos[1][iBranch]->Draw("histo");  
	         	histos[0][iBranch]->Draw("samehisto");
	      	}
  			leg->AddEntry(histos[0][iBranch], "JF17 Background", "l");
	        leg->AddEntry(histos[1][iBranch], "Zee Truth", "l");
      		leg->Draw();
		}

		cout << "Writing..." << endl;
		canvas->Print(outputNames[2]);
		cout << "Generated! :D" << endl;
  	}
}

void genPlotFilesFromMcDirFilesRingerVars()
{
	TString mcNames[2] = {"/work/storres/mc14_13TeV.129160.Pythia8_AU2CTEQ6L1_perf_JF17.recon.e3084_s2045_s2008_r5989_ntupleEGamma.root",
						  "/work/storres/mc14_13TeV.147446.PowhegPythia8_AZNLO_Zee_DiLeptonFilter.recon.e3059_s2045_s2008_r5989_ntupleEGamma.root"};
	char mcPrefixON[] = "Histograms/MC_RINGER_OL/mc_RINGER_";

	TFile *_file0;
	TList *tlk;
	Int_t iMc,nKeys,iKey,nBranches,iBranch,nHistos,iHisto;
	TTree *tree;
	mcClass *mc;
	TObjArray *toa;
	TBranch *tb;
	TDirectoryFile *tdf;
	TList *tldirs;
	Int_t lll;
	TH1F *histos[3][20][100];
	TCanvas *canvas[20];
	Int_t iCanvas;
	char * histoname;
	Float_t alpha = 0.5;
	nHistos = 100;
	iBranch = 42;
	cout << "Retrieving information..." << endl;
  	for (iMc=0;iMc<2;iMc++)
  	{
  		_file0 = TFile::Open(mcNames[iMc]);
  		cout << "Analizing: " << mcNames[iMc] << endl;
  		cout << "The name of the Directory File is: " << NavNtuple->GetName() << endl;
  		tlk = NavNtuple->GetListOfKeys();
  		nKeys = tlk->GetEntries();
  		cout << "The number of directories it contains: " << nKeys << endl;
  		for (iKey=0;iKey<nKeys;iKey++)
  		{
  			NavNtuple->GetObject(tlk->At(iKey)->GetName(),tree);
  			//tree->Print();
			//mc = new mcClass(tree);
			toa = tree->GetListOfBranches();
			nBranches = tree->GetNbranches();
			//cout << "iBranch: " << iBranch << endl;
			tb = (TBranch *) toa->At(iBranch);
			for (iHisto=0;iHisto<nHistos;iHisto++)
			{
				histoname = Form("%s_%d_%s_%s_%d",NavNtuple->GetName(),iMc,tlk->At(iKey)->GetName(),tb->GetName(),iHisto);
				tree->Draw(Form("%s[%d]>>%s",tb->GetName(),iHisto,histoname));
				histos[iMc][iKey][iHisto] = (TH1F *) gPad->GetPrimitive(histoname);
				if (histos[iMc][iKey][iHisto] == NULL) histos[iMc][iKey][iHisto] = new TH1F();
			}
			//cout << "histo" << endl;
			//cout << tldirs->Print() << endl;
  		}
  	}
  	cout << "All the information was retrived!" << endl;

  	cout << "Ploting..." << endl;
  	cout << "nKeys -> " << nKeys << endl;
  	cout << "nBranches -> " << nBranches << endl;
   	for (iKey=0;iKey<nKeys;iKey++)
  	{
  		canvas[iKey] = new TCanvas();
  		//canvas[iKey]->Divide(sqrt(nBranches)+1,sqrt(nBranches)+1,0,0);
  		canvas[iKey]->DivideSquare(nHistos);
  		iCanvas=1;
  		for (iHisto=0;iHisto<nHistos;iHisto++)
  		{
  			canvas[iKey]->cd(iCanvas++);
  			cout << iKey << "..." << iHisto << "..."<< endl;
  			cout << histos[0][iKey][iHisto] << endl;
  			cout << histos[1][iKey][iHisto] << endl;
  			//if ((histos[0][iKey][iBranch] != NULL) && (histos[1][iKey][iBranch] != NULL))
  			//{	  			
			TLegend *leg = new TLegend(.98,.75,.7,.6);
			histos[0][iKey][iHisto]->SetLineColor(kRed);
			histos[0][iKey][iHisto]->SetFillColorAlpha(kRed,alpha);
			histos[1][iKey][iHisto]->SetLineColor(kBlue);
			histos[1][iKey][iHisto]->SetFillColorAlpha(kBlue,alpha);
			histos[0][iKey][iHisto]->SetLineWidth(.3);
			histos[1][iKey][iHisto]->SetLineWidth(.3);
	      	if (histos[0][iKey][iHisto]->GetMaximum() >= histos[1][iKey][iHisto]->GetMaximum())
	      	{
	        	histos[0][iKey][iHisto]->DrawNormalized("histo");  
	         	histos[1][iKey][iHisto]->DrawNormalized("samehisto");
	      	}
	      	else
	      	{
	         	histos[1][iKey][iHisto]->DrawNormalized("histo");  
	         	histos[0][iKey][iHisto]->DrawNormalized("samehisto");
	      	}
  			leg->AddEntry(histos[0][iKey][iHisto], "JF17 Background (NavNtuple)", "l");
	        leg->AddEntry(histos[1][iKey][iHisto], "Zee Truth (NavNtuple)", "l");
      		leg->Draw();
      		//}
  		}
		cout << "Writing..." << endl;
		canvas[iKey]->Print(Form("%s_%s_OL.pdf",mcPrefixON,tlk->At(iKey)->GetName()));
		cout << "Generated! :D" << endl;
  	}

  	cout << "Great! :D" << endl;
  	
  	return;
 }

void macroDist()
{
	//distFromEgammas();
	//distFromMcDirFiles();
	//distOverLappedFromEgammas();
	genPlotFilesFromMcDirFiles();
	//genPlotFilesFromMcDirFilesRingerVars();
}