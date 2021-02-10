#ifndef _FIND_CUSTOMER_WINDOW_H_
#define _FIND_CUSTOMER_WINDOW_H_
#include <wx/wx.h>
#include <Account.h>
#include <Menu_Window.h>

class Find_Customer_Window : public wxDialog{
private:	
	int account_number;
	Account* acc ;
	int ID_button_pressed ; 
	
public:
	Find_Customer_Window(wxWindow* parent);
	Account* getCurrentAccount();
	int getId_button_pressed();
	
private:
	wxDECLARE_EVENT_TABLE();
	void button_ok(wxCommandEvent& event);
	void button_quit(wxCommandEvent& event);
	bool TransferDataFromWindow();
};

#endif