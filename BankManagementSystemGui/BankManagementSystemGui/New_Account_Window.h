#ifndef _NEW_ACCOUNT_WINDOW_H
#define _NEW_ACCOUNT_WINDOW_H
#include <wx/wx.h>
#include <Menu_Window.h>
#include <string>
#include <stdlib.h>
#include <iostream>

class New_Account_Window : public wxDialog{
	                                                                                                                                                                                //nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnDECLARE_CLASS(New_Account_Window);
private:
	std::string firstName; 
	std::string lastName;
	std::string birthday;
	std::string citizen_number;
	std::string address;
	std::string phone_number;
	double init_amount;
	
public:
	New_Account_Window(wxWindow* parent);
private:
	void button_save_new_acc(wxCommandEvent& event);
	void button_cancel_new_acc(wxCommandEvent& event);
	bool TransferDataFromWindow();
	wxDECLARE_EVENT_TABLE();
	};
#endif

