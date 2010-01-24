#include "ImportImage.h"

//(*InternalHeaders(ImportImage)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)
#include <wx/filedlg.h>
#include <wx/log.h>
#include <wx/animate.h>
#include <wx/animate.h>
#include <wx/filename.h>

#include "StdAlgo.h"


//(*IdInit(ImportImage)
const long ImportImage::ID_STATICBITMAP1 = wxNewId();
const long ImportImage::ID_STATICTEXT1 = wxNewId();
const long ImportImage::ID_PANEL1 = wxNewId();
const long ImportImage::ID_STATICLINE1 = wxNewId();
const long ImportImage::ID_STATICTEXT3 = wxNewId();
const long ImportImage::ID_TEXTCTRL1 = wxNewId();
const long ImportImage::ID_BUTTON1 = wxNewId();
const long ImportImage::ID_STATICTEXT4 = wxNewId();
const long ImportImage::ID_TEXTCTRL2 = wxNewId();
const long ImportImage::ID_STATICTEXT5 = wxNewId();
const long ImportImage::ID_STATICTEXT2 = wxNewId();
const long ImportImage::ID_BUTTON2 = wxNewId();
const long ImportImage::ID_PANEL2 = wxNewId();
const long ImportImage::ID_STATICTEXT10 = wxNewId();
const long ImportImage::ID_STATICTEXT6 = wxNewId();
const long ImportImage::ID_TEXTCTRL3 = wxNewId();
const long ImportImage::ID_BUTTON4 = wxNewId();
const long ImportImage::ID_STATICTEXT7 = wxNewId();
const long ImportImage::ID_TEXTCTRL4 = wxNewId();
const long ImportImage::ID_STATICTEXT8 = wxNewId();
const long ImportImage::ID_STATICTEXT9 = wxNewId();
const long ImportImage::ID_BUTTON5 = wxNewId();
const long ImportImage::ID_PANEL3 = wxNewId();
const long ImportImage::ID_STATICTEXT11 = wxNewId();
const long ImportImage::ID_TEXTCTRL5 = wxNewId();
const long ImportImage::ID_BUTTON6 = wxNewId();
const long ImportImage::ID_STATICTEXT14 = wxNewId();
const long ImportImage::ID_TEXTCTRL8 = wxNewId();
const long ImportImage::ID_STATICTEXT15 = wxNewId();
const long ImportImage::ID_TEXTCTRL9 = wxNewId();
const long ImportImage::ID_STATICTEXT12 = wxNewId();
const long ImportImage::ID_TEXTCTRL6 = wxNewId();
const long ImportImage::ID_STATICTEXT13 = wxNewId();
const long ImportImage::ID_TEXTCTRL7 = wxNewId();
const long ImportImage::ID_STATICTEXT16 = wxNewId();
const long ImportImage::ID_TEXTCTRL10 = wxNewId();
const long ImportImage::ID_STATICTEXT17 = wxNewId();
const long ImportImage::ID_TEXTCTRL11 = wxNewId();
const long ImportImage::ID_STATICTEXT18 = wxNewId();
const long ImportImage::ID_TEXTCTRL12 = wxNewId();
const long ImportImage::ID_STATICTEXT19 = wxNewId();
const long ImportImage::ID_TEXTCTRL13 = wxNewId();
const long ImportImage::ID_CHECKBOX1 = wxNewId();
const long ImportImage::ID_STATICTEXT22 = wxNewId();
const long ImportImage::ID_BUTTON8 = wxNewId();
const long ImportImage::ID_STATICTEXT20 = wxNewId();
const long ImportImage::ID_TEXTCTRL14 = wxNewId();
const long ImportImage::ID_STATICTEXT21 = wxNewId();
const long ImportImage::ID_BUTTON7 = wxNewId();
const long ImportImage::ID_PANEL4 = wxNewId();
const long ImportImage::ID_NOTEBOOK1 = wxNewId();
const long ImportImage::ID_STATICLINE2 = wxNewId();
const long ImportImage::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ImportImage,wxDialog)
	//(*EventTable(ImportImage)
	//*)
END_EVENT_TABLE()

ImportImage::ImportImage(wxWindow* parent, int pageSelected)
{
	//(*Initialize(ImportImage)
	wxStaticBoxSizer* StaticBoxSizer2;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer16;
	wxFlexGridSizer* FlexGridSizer24;
	wxFlexGridSizer* FlexGridSizer19;
	wxFlexGridSizer* FlexGridSizer23;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxFlexGridSizer* FlexGridSizer10;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer22;
	wxFlexGridSizer* FlexGridSizer9;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer7;
	wxStaticBoxSizer* StaticBoxSizer7;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxStaticBoxSizer* StaticBoxSizer6;
	wxFlexGridSizer* FlexGridSizer15;
	wxFlexGridSizer* FlexGridSizer18;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer21;
	wxFlexGridSizer* FlexGridSizer14;
	wxFlexGridSizer* FlexGridSizer20;
	wxFlexGridSizer* FlexGridSizer13;
	wxFlexGridSizer* FlexGridSizer12;
	wxFlexGridSizer* FlexGridSizer6;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer11;
	wxFlexGridSizer* FlexGridSizer17;
	wxStaticBoxSizer* StaticBoxSizer5;
	
	Create(parent, wxID_ANY, _("Importer des images"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(1);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(420,54), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("res/imagewizard.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	FlexGridSizer6->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("L\'importation d\'images permet de g�n�rer \nrapidement vos images ou objets � partir \nde fichiers anim�s ou sp�cifiques."), wxDefaultPosition, wxSize(295,53), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	FlexGridSizer6->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer6);
	FlexGridSizer6->SetSizeHints(Panel1);
	FlexGridSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 1, 0, 0);
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxPoint(74,44), wxSize(268,103), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	FlexGridSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	FlexGridSizer3->AddGrowableRow(3);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer4->AddGrowableCol(1);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Gif anim� :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer4->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FileGIFEdit = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(138,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer4->Add(FileGIFEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BrowseGIFBt = new wxButton(Panel2, ID_BUTTON1, _("Parcourir..."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer4->Add(BrowseGIFBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer5 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("D�composer en plusieurs images nomm�es :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer5->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	DecomposeGIFEdit = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer5->Add(DecomposeGIFEdit, 1, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("X.png"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer5->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel2, _("Aper�u"));
	FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
	nbImageGIFBt = new wxStaticText(Panel2, ID_STATICTEXT2, _("Nombre d\'images :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer7->Add(nbImageGIFBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer3->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	DecomposeGIFBt = new wxButton(Panel2, ID_BUTTON2, _("D�composer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer3->Add(DecomposeGIFBt, 1, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5);
	Panel2->SetSizer(FlexGridSizer3);
	FlexGridSizer3->SetSizeHints(Panel2);
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxPoint(110,3), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	FlexGridSizer9 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer9->AddGrowableCol(0);
	FlexGridSizer9->AddGrowableRow(4);
	StaticText9 = new wxStaticText(Panel3, ID_STATICTEXT10, _("Game Develop d�compose les feuilles de sprites de personnages\nayant 4 directions avec 4 images chacune."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	FlexGridSizer9->Add(StaticText9, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer10->AddGrowableCol(1);
	StaticText2 = new wxStaticText(Panel3, ID_STATICTEXT6, _("Image :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer10->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	fileRPGEdit = new wxTextCtrl(Panel3, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(138,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer10->Add(fileRPGEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	browseRPGBt = new wxButton(Panel3, ID_BUTTON4, _("Parcourir..."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	FlexGridSizer10->Add(browseRPGBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9->Add(FlexGridSizer10, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer11 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText6 = new wxStaticText(Panel3, ID_STATICTEXT7, _("D�composer en plusieurs images nomm�es :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer11->Add(StaticText6, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	decomposeRPGEdit = new wxTextCtrl(Panel3, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	FlexGridSizer11->Add(decomposeRPGEdit, 1, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText7 = new wxStaticText(Panel3, ID_STATICTEXT8, _("X.png"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer11->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9->Add(FlexGridSizer11, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, Panel3, _("Aper�u"));
	FlexGridSizer12 = new wxFlexGridSizer(0, 3, 0, 0);
	tailleImageRPGEdit = new wxStaticText(Panel3, ID_STATICTEXT9, _("Taille d\'une image :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer12->Add(tailleImageRPGEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(FlexGridSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer9->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	DecomposeRPGBt = new wxButton(Panel3, ID_BUTTON5, _("D�composer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	FlexGridSizer9->Add(DecomposeRPGBt, 1, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5);
	Panel3->SetSizer(FlexGridSizer9);
	FlexGridSizer9->Fit(Panel3);
	FlexGridSizer9->SetSizeHints(Panel3);
	Panel4 = new wxPanel(Notebook1, ID_PANEL4, wxPoint(235,16), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	FlexGridSizer13 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer13->AddGrowableCol(0);
	FlexGridSizer14 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer14->AddGrowableCol(1);
	StaticText8 = new wxStaticText(Panel4, ID_STATICTEXT11, _("Image :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer14->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	fileSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	FlexGridSizer14->Add(fileSSEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BrowseSSBt = new wxButton(Panel4, ID_BUTTON6, _("Parcourir..."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	FlexGridSizer14->Add(BrowseSSBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer13->Add(FlexGridSizer14, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer15 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, Panel4, _("Taille d\'une image"));
	FlexGridSizer17 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer17->AddGrowableCol(0);
	StaticText12 = new wxStaticText(Panel4, ID_STATICTEXT14, _("Taille ( pixels ):"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	FlexGridSizer17->Add(StaticText12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer18 = new wxFlexGridSizer(0, 3, 0, 0);
	widthSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL8, _("32"), wxDefaultPosition, wxSize(40,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	FlexGridSizer18->Add(widthSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText13 = new wxStaticText(Panel4, ID_STATICTEXT15, _("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	FlexGridSizer18->Add(StaticText13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	heightSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL9, _("32"), wxDefaultPosition, wxSize(40,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	FlexGridSizer18->Add(heightSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer4->Add(FlexGridSizer17, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer15->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, Panel4, _("Nombre d\'images"));
	FlexGridSizer16 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticText10 = new wxStaticText(Panel4, ID_STATICTEXT12, _("Nombre de colonnes d\'images :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer16->Add(StaticText10, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	columnsSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL6, _("0"), wxDefaultPosition, wxSize(47,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	FlexGridSizer16->Add(columnsSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText11 = new wxStaticText(Panel4, ID_STATICTEXT13, _("Nombre de lignes d\'images :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	FlexGridSizer16->Add(StaticText11, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	linesSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL7, _("1"), wxDefaultPosition, wxSize(47,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	FlexGridSizer16->Add(linesSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(FlexGridSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer15->Add(StaticBoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer5 = new wxStaticBoxSizer(wxHORIZONTAL, Panel4, _("Origine de la d�coupe"));
	FlexGridSizer20 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer20->AddGrowableCol(0);
	StaticText14 = new wxStaticText(Panel4, ID_STATICTEXT16, _("Origine ( pixels ):"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	FlexGridSizer20->Add(StaticText14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer19 = new wxFlexGridSizer(0, 3, 0, 0);
	origineXEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL10, _("0"), wxDefaultPosition, wxSize(40,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	FlexGridSizer19->Add(origineXEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText15 = new wxStaticText(Panel4, ID_STATICTEXT17, _(";"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	FlexGridSizer19->Add(StaticText15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	origineYEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL11, _("0"), wxDefaultPosition, wxSize(40,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	FlexGridSizer19->Add(origineYEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer20->Add(FlexGridSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer5->Add(FlexGridSizer20, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer15->Add(StaticBoxSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer6 = new wxStaticBoxSizer(wxHORIZONTAL, Panel4, _("Espacement entre chaque image"));
	FlexGridSizer21 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer21->AddGrowableCol(0);
	FlexGridSizer22 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticText16 = new wxStaticText(Panel4, ID_STATICTEXT18, _("Espace horizontal ( pixels ):"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	FlexGridSizer22->Add(StaticText16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	spaceHSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL12, _("0"), wxDefaultPosition, wxSize(47,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	FlexGridSizer22->Add(spaceHSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText17 = new wxStaticText(Panel4, ID_STATICTEXT19, _("Espace vertical ( pixels ):"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	FlexGridSizer22->Add(StaticText17, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	spaceVSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL13, _("0"), wxDefaultPosition, wxSize(47,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	FlexGridSizer22->Add(spaceVSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer22, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer6->Add(FlexGridSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer15->Add(StaticBoxSizer6, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer13->Add(FlexGridSizer15, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer7 = new wxStaticBoxSizer(wxHORIZONTAL, Panel4, _("Rendre une couleur transparente"));
	FlexGridSizer24 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer24->AddGrowableCol(0);
	hasMaskSSCheck = new wxCheckBox(Panel4, ID_CHECKBOX1, _("Rendre une couleur transparente :"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	hasMaskSSCheck->SetValue(false);
	FlexGridSizer24->Add(hasMaskSSCheck, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	colorSSTxt = new wxStaticText(Panel4, ID_STATICTEXT22, _("( ; ; )"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	FlexGridSizer24->Add(colorSSTxt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	chooseColorMaskSSBt = new wxButton(Panel4, ID_BUTTON8, _("Choisir"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	FlexGridSizer24->Add(chooseColorMaskSSBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer7->Add(FlexGridSizer24, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer13->Add(StaticBoxSizer7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23 = new wxFlexGridSizer(0, 4, 0, 0);
	StaticText18 = new wxStaticText(Panel4, ID_STATICTEXT20, _("D�composer en :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	FlexGridSizer23->Add(StaticText18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	decomposeSSEdit = new wxTextCtrl(Panel4, ID_TEXTCTRL14, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	FlexGridSizer23->Add(decomposeSSEdit, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText19 = new wxStaticText(Panel4, ID_STATICTEXT21, _("X.png"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	FlexGridSizer23->Add(StaticText19, 1, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	DecomposeSSBt = new wxButton(Panel4, ID_BUTTON7, _("D�composer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	FlexGridSizer23->Add(DecomposeSSBt, 1, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5);
	FlexGridSizer13->Add(FlexGridSizer23, 1, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 0);
	Panel4->SetSizer(FlexGridSizer13);
	FlexGridSizer13->Fit(Panel4);
	FlexGridSizer13->SetSizeHints(Panel4);
	Notebook1->AddPage(Panel2, _("Gif anim�"), false);
	Notebook1->AddPage(Panel3, _("Feuille de sprite RPG Maker"), false);
	Notebook1->AddPage(Panel4, _("Feuille de sprite g�n�rique"), false);
	FlexGridSizer2->Add(Notebook1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer8->AddGrowableCol(0);
	FermerBt = new wxButton(this, ID_BUTTON3, _("Fermer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer8->Add(FermerBt, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer8, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(FlexGridSizer1);
	colorDialog = new wxColourDialog(this);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ImportImage::OnFileGIFEditText);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnBrowseGIFBtClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnDecomposeGIFBtClick);
	Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ImportImage::OnfileRPGEditText);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnbrowseRPGBtClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnDecomposeRPGEditClick);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnBrowseSSBtClick);
	Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ImportImage::OnhasMaskSSCheckClick);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnchooseColorMaskSSBtClick);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnDecomposeSSBtClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ImportImage::OnFermerBtClick);
	//*)

	Notebook1->SetSelection(pageSelected);
}

ImportImage::~ImportImage()
{
	//(*Destroy(ImportImage)
	//*)
}


////////////////////////////////////////////////////////////
///Fermeture
////////////////////////////////////////////////////////////
void ImportImage::OnFermerBtClick(wxCommandEvent& event)
{
    EndModal(0);
}

////////////////////////////////////////////////////////////
///Choix d'un fichier GIF
////////////////////////////////////////////////////////////
void ImportImage::OnBrowseGIFBtClick(wxCommandEvent& event)
{
    wxFileDialog dialog(this, _("Choisissez le GIF anim� � d�composer"), "", "", "GIF anim� (*.gif)|*.gif");
    dialog.ShowModal();

    if ( dialog.GetPath() != "" )
        FileGIFEdit->SetValue( dialog.GetPath() );

}

////////////////////////////////////////////////////////////
///Mise � jour en temps r�el du nombre d'image d'un fichier gif
////////////////////////////////////////////////////////////
void ImportImage::OnFileGIFEditText(wxCommandEvent& event)
{
    wxAnimation animation;
    if ( animation.LoadFile(FileGIFEdit->GetValue()) )
        nbImageGIFBt->SetLabel(_("Nombre d'images : ")+st(animation.GetFrameCount()));
    else
        nbImageGIFBt->SetLabel(_("Nombre d'images : ?"));
}

////////////////////////////////////////////////////////////
///D�composition du fichier GIF
////////////////////////////////////////////////////////////
void ImportImage::OnDecomposeGIFBtClick(wxCommandEvent& event)
{
    wxAnimation animation;
    if ( !animation.LoadFile(FileGIFEdit->GetValue()) )
    {
        wxLogWarning(_("Impossible d'ouvrir le fichier GIF !"));
        return;
    }

    wxFileName filename(FileGIFEdit->GetValue());
    wxString path = filename.GetPath();

    for (unsigned int i = 0;i<animation.GetFrameCount();++i)
    {
    	wxImage img = animation.GetFrame(i);
    	img.SaveFile(path+"/"+DecomposeGIFEdit->GetValue()+st(i)+".png", wxBITMAP_TYPE_PNG);
    }

    wxLogMessage(_("D�composition du GIF termin� !"));
}

////////////////////////////////////////////////////////////
///Choix du fichier RPG Maker
////////////////////////////////////////////////////////////
void ImportImage::OnbrowseRPGBtClick(wxCommandEvent& event)
{
    wxFileDialog dialog(this, _("Choisissez la feuille de sprite RPG Maker � d�composer"), "", "", "Feuille de sprites RPG Maker (*.*)|*.*");
    dialog.ShowModal();

    if ( dialog.GetPath() != "" )
        fileRPGEdit->SetValue( dialog.GetPath() );
}

////////////////////////////////////////////////////////////
///Choix de la feuille de sprite
////////////////////////////////////////////////////////////
void ImportImage::OnBrowseSSBtClick(wxCommandEvent& event)
{
    wxFileDialog dialog(this, _("Choisissez la feuille de sprite � d�composer"), "", "", "Image Feuille de sprites (*.*)|*.*");
    dialog.ShowModal();

    if ( dialog.GetPath() != "" )
        fileSSEdit->SetValue( dialog.GetPath() );
}

////////////////////////////////////////////////////////////
///Mise � jour en temps r�el de la taille d'une image apr�s d�composition
////////////////////////////////////////////////////////////
void ImportImage::OnfileRPGEditText(wxCommandEvent& event)
{
    wxImage image;
    if ( image.LoadFile(fileRPGEdit->GetValue()) )
        tailleImageRPGEdit->SetLabel(_("Taille d'une image : ")+st(image.GetWidth()/4)+"x"+st(image.GetHeight()/4));
    else
        tailleImageRPGEdit->SetLabel(_("Taille d'une image : ?x?"));
}

////////////////////////////////////////////////////////////
///D�composition de la feuille de sprite RPG Maker
////////////////////////////////////////////////////////////
void ImportImage::OnDecomposeRPGEditClick(wxCommandEvent& event)
{
    wxImage image;
    if ( !image.LoadFile(fileRPGEdit->GetValue()) )
    {
        wxLogWarning(_("Impossible d'ouvrir le fichier !"));
        return;
    }

    wxFileName filename(fileRPGEdit->GetValue());
    wxString path = filename.GetPath();

    for (unsigned int j = 0;j<4;++j)
    {
        for (unsigned int i = 0;i<4;++i)
        {
            //On r�cup�re la sous image
            wxImage subImage = image.GetSubImage(wxRect(image.GetWidth()/4*i,
                                                        image.GetHeight()/4*j,
                                                        image.GetWidth()/4,
                                                        image.GetHeight()/4));

            //La direction est not� sous forme Down, Left, Right, Up
            string direc = "";
            if ( j == 0 ) direc = "D";
            if ( j == 1 ) direc = "L";
            if ( j == 2 ) direc = "R";
            if ( j == 3 ) direc = "U";
            subImage.SaveFile(path+"/"+decomposeRPGEdit->GetValue()+direc+st(i)+".png", wxBITMAP_TYPE_PNG);
        }
    }

    wxLogMessage(_("La d�composition de l'image est termin�e !"));
}

////////////////////////////////////////////////////////////
///D�composition d'une feuille de sprite g�n�rique
////////////////////////////////////////////////////////////
void ImportImage::OnDecomposeSSBtClick(wxCommandEvent& event)
{
    wxImage image;
    if ( !image.LoadFile(fileSSEdit->GetValue()) )
    {
        wxLogWarning(_("Impossible d'ouvrir le fichier !"));
        return;
    }

    if ( hasMaskSSCheck->GetValue() )
    {
        image.SetMaskColour(maskR, maskG, maskB);
        image.SetMask(true);
    }

    wxFileName filename(fileSSEdit->GetValue());
    wxString path = filename.GetPath();

    int lineNb = toInt(static_cast<string>(linesSSEdit->GetValue()));
    if ( lineNb <= 0 )
    {
        wxLogWarning(_("Le nombre de ligne est invalide : Le minimum est une ligne."));
        return;
    }

    int columnNb = toInt(static_cast<string>(columnsSSEdit->GetValue()));
    if ( columnNb <= 0 )
    {
        wxLogWarning(_("Le nombre de colonnes est invalide : Le minimum est une colonne."));
        return;
    }

    int origineX = toInt(static_cast<string>(origineXEdit->GetValue()));
    int origineY = toInt(static_cast<string>(origineYEdit->GetValue()));

    int width = toInt(static_cast<string>(widthSSEdit->GetValue()));
    int height = toInt(static_cast<string>(heightSSEdit->GetValue()));
    if ( width <= 0 || height <= 0)
    {
        wxLogWarning(_("La taille d'un sprite est invalide."));
        return;
    }

    int spaceH = toInt(static_cast<string>(spaceHSSEdit->GetValue()));
    if ( spaceH < 0 )
    {
        wxLogWarning(_("L'espacement horizontal est invalide ( doit �tre sup�rieur ou �gal � 0 )."));
        return;
    }
    int spaceV = toInt(static_cast<string>(spaceVSSEdit->GetValue()));
    if ( spaceV < 0 )
    {
        wxLogWarning(_("L'espacement vertical est invalide ( doit �tre sup�rieur ou �gal � 0 )."));
        return;
    }

    //D�composition ligne par ligne
    int Y = origineY;
    for (unsigned int line = 0;line<static_cast<unsigned>(lineNb);++line)
    {
        int X = origineX;
        for (unsigned int column = 0;column<static_cast<unsigned>(columnNb);++column)
        {
            wxRect imageRect;
            imageRect.SetX(X);
            imageRect.SetY(Y);
            imageRect.SetWidth(width);
            imageRect.SetHeight(height);

            image.GetSubImage(imageRect).SaveFile(path+"/"+decomposeSSEdit->GetValue()+"l"+toString(line)+"c"+toString(column)+".png", wxBITMAP_TYPE_PNG);

            X += width + spaceH;
        }
        Y += height + spaceV;
    }

}

void ImportImage::OnhasMaskSSCheckClick(wxCommandEvent& event)
{
}

void ImportImage::OnchooseColorMaskSSBtClick(wxCommandEvent& event)
{
    wxColour color = wxGetColourFromUser(this, wxColour(0,0,0));
    if ( color.IsOk() )
    {
        wxString r; r << static_cast<int>(color.Red());
        wxString v; v << static_cast<int>(color.Green());
        wxString b; b << static_cast<int>(color.Blue());

        colorSSTxt->SetLabel(r+";"+v+";"+b);

        maskR = color.Red();
        maskG = color.Green();
        maskB = color.Blue();
    }
}