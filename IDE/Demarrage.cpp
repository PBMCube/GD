#include "Demarrage.h"

#ifdef DEBUG
#include "nommgr.h"
#endif

//(*InternalHeaders(Demarrage)






#include <wx/help.h>
#include <wx/fs_zip.h>
#include <wx/config.h>
#include <wx/mimetype.h> // mimetype support
#include <string>
#include <vector>

#ifdef DEBUG

#endif

using namespace std;

//(*IdInit(Demarrage)





























BEGIN_EVENT_TABLE(Demarrage,wxDialog)
	//(*EventTable(Demarrage)
	//*)
END_EVENT_TABLE()

Demarrage::Demarrage(wxWindow* parent)
{
	//(*Initialize(Demarrage)
















































































































































}

Demarrage::~Demarrage()
{
	//(*Destroy(Demarrage)
	//*)
}

void Demarrage::OnGuideBtClick(wxCommandEvent& event)
{
    wxHelpController * help = new wxHelpController;
    help->Initialize("aide.chm");
    help->DisplaySection(16);
}

void Demarrage::OnForumBtClick(wxCommandEvent& event)
{
    wxString link = "http://forum.compilgames.net";
    wxString mimetype = wxEmptyString;
    if (link.StartsWith (_T("http://"))) {
        mimetype = _T("text/html");
    }else if (link.StartsWith (_T("ftp://"))) {
        mimetype = _T("text/html");
    }else if (link.StartsWith (_T("mailto:"))) {
        mimetype = _T("message/rfc822");
    }else{
        return;
    }
    wxFileType *filetype = wxTheMimeTypesManager->GetFileTypeFromMimeType (mimetype);
    if (filetype) {
        wxString cmd;
        if (filetype->GetOpenCommand (&cmd, wxFileType::MessageParameters (link))) {
            cmd.Replace(_T("file://"), wxEmptyString);
            ::wxExecute(cmd);
        }
        delete filetype;
    }
}

void Demarrage::OnExempleBtClick(wxCommandEvent& event)
{
    wxConfigBase *pConfig = wxConfigBase::Get();

    if ( majCheck->GetValue() )
        pConfig->Write("D�marrage/MAJ", "true");
    else
        pConfig->Write("D�marrage/MAJ", "false");

    if ( simpleCheck->GetValue() )
        pConfig->Write("/ModeSimple", true);
    else
        pConfig->Write("/ModeSimple", false);

    EndModal(1);
}

void Demarrage::OnFermerBtClick(wxCommandEvent& event)
{
    wxConfigBase *pConfig = wxConfigBase::Get();

    if ( majCheck->GetValue() )
        pConfig->Write("D�marrage/MAJ", "true");
    else
        pConfig->Write("D�marrage/MAJ", "false");

    if ( simpleCheck->GetValue() )
        pConfig->Write("/ModeSimple", true);
    else
        pConfig->Write("/ModeSimple", false);

    EndModal(0);
}

void Demarrage::OnTutorielBtClick(wxCommandEvent& event)
{
    wxString link = wxGetCwd() + "\\Tutoriel\\Tutoriel.pdf";
    wxString mimetype = "application/pdf";
    wxFileType *filetype = wxTheMimeTypesManager->GetFileTypeFromMimeType (mimetype);
    if (filetype) {
        wxString cmd;
        if (filetype->GetOpenCommand (&cmd, wxFileType::MessageParameters (link))) {
            cmd.Replace(_T("file://"), wxEmptyString);
            ::wxExecute(cmd);
        }
        delete filetype;
    }
}

void Demarrage::OnwikiBtClick(wxCommandEvent& event)
{
    wxString link = "http://wiki.compilgames.net";
    wxString mimetype = wxEmptyString;
    if (link.StartsWith (_T("http://"))) {
        mimetype = _T("text/html");
    }else if (link.StartsWith (_T("ftp://"))) {
        mimetype = _T("text/html");
    }else if (link.StartsWith (_T("mailto:"))) {
        mimetype = _T("message/rfc822");
    }else{
        return;
    }
    wxFileType *filetype = wxTheMimeTypesManager->GetFileTypeFromMimeType (mimetype);
    if (filetype) {
        wxString cmd;
        if (filetype->GetOpenCommand (&cmd, wxFileType::MessageParameters (link))) {
            cmd.Replace(_T("file://"), wxEmptyString);
            ::wxExecute(cmd);
        }
        delete filetype;
    }
}

void Demarrage::OnButton1Click(wxCommandEvent& event)
{
    Notebook1->SetSelection(1);
}

void Demarrage::OnButton2Click(wxCommandEvent& event)
{
    Notebook1->SetSelection(2);
}