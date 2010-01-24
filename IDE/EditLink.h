#ifndef EDITLINK_H
#define EDITLINK_H

//(*Headers(EditLink)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)
#include "GDL/Event.h"

class EditLink: public wxDialog
{
	public:

		EditLink(wxWindow* parent, Event & pEvent);
		virtual ~EditLink();

		//(*Declarations(EditLink)
		wxButton* OkBt;
		wxStaticText* StaticText2;
		wxRadioButton* AllEventsCheck;
		wxTextCtrl* NomSceneEdit;
		wxTextCtrl* EndEdit;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxStaticLine* StaticLine2;
		wxTextCtrl* StartEdit;
		wxRadioButton* OnlyEventsCheck;
		wxStaticText* StaticText5;
		wxStaticLine* StaticLine1;
		wxButton* AnnulerBt;
		wxStaticText* StaticText4;
		wxStaticBitmap* StaticBitmap3;
		wxButton* AideBt;
		//*)

		Event & eventToEdit;

	protected:

		//(*Identifiers(EditLink)
		static const long ID_STATICBITMAP3;
		static const long ID_STATICTEXT3;
		static const long ID_PANEL1;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICLINE1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		//*)

	private:

		//(*Handlers(EditLink)
		void OnAideBtClick(wxCommandEvent& event);
		void OnAnnulerBtClick(wxCommandEvent& event);
		void OnOkBtClick(wxCommandEvent& event);
		void OnStartEditText(wxCommandEvent& event);
		void OnEndEditText(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif