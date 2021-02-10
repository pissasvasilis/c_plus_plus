#ifndef _MENU_WINDOW_H_
#define _MENU_WINDOW_H_
#include <wx/wx.h>
#include <vector>
#include <Account.h>
#include <Find_Customer_Window.h>

class Menu_Window : public wxFrame{

private:	
	//std::vector<Account*> bank_accounts;
	std::vector<Account> bank_accounts1;		
	int ID_button_pressed;
public:	
	Menu_Window();
	//std::vector<Account*> &getAllAccounts();
	std::vector<Account> &getAllAccounts1();
	int getId_button_pressed();	
private:
	wxDECLARE_EVENT_TABLE();
	void button_new_acc(wxCommandEvent& event);
	void button_edit(wxCommandEvent& event);
	void button_transact(wxCommandEvent& event);
	void button_erase(wxCommandEvent& event);
	void button_see(wxCommandEvent& event);
	void menu_exit(wxCommandEvent& event);	
	};
	
#endif