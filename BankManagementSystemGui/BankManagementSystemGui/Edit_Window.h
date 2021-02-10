#ifndef _EDIT_WINDOW_
#define _EDIT_WINDOW_
#include <string>

#include <wx/wx.h>
class Edit_Window:public wxDialog{
private:
	std::string address;
	std::string phone_number;
public:
	Edit_Window(wxWindow* parent);
private:
	void button_save_edit_acc(wxCommandEvent& event);
	void button_cancel_edit_acc(wxCommandEvent& event);
	bool TransferDataFromWindow();
	wxDECLARE_EVENT_TABLE();
	};

#endif