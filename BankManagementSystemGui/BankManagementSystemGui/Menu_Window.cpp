#include <Menu_Window.h>
#include <New_Account_Window.h>

enum {ID_New_Account = 1, ID_Edit, ID_Transaction, ID_Erase, ID_See, ID_Exit};

Menu_Window::Menu_Window():wxFrame(NULL,wxID_ANY,wxT("Main Menu")){
	
	wxBoxSizer* buttonSizer = new wxBoxSizer(wxVERTICAL);
	
	buttonSizer->Add(new wxButton(this,ID_New_Account,"Create new account"),
				0,
				wxALL,
				10);
	
	buttonSizer->Add(new wxButton(this,ID_Edit,"Update information on existig account"),
				0,
				wxALL,
				10);
	
	buttonSizer->Add(new wxButton(this,ID_Transaction,"For transactions"),
				0,
				wxALL,
				10);
	/*
	buttonSizer->Add(new wxButton(this,wxID_ANY,"Check the details of existing account"),
				0,
				wxALL,
				10);
	*/
	buttonSizer->Add(new wxButton(this,ID_Erase,"Removing existing account"),
				0,
				wxALL,
				10);
	
	buttonSizer->Add(new wxButton(this,ID_See,"View customer's list"),
				0,
				wxALL,
				10);
	
	buttonSizer->Add(new wxButton(this,ID_Exit,"Exit"),
				0,
				wxALL,
				10);
	SetSizer(buttonSizer);
	
};

void Menu_Window::button_new_acc(wxCommandEvent& event){
	New_Account_Window* new_account_window = new New_Account_Window(this);
	new_account_window->Show(true);
	}


void Menu_Window::button_transact(wxCommandEvent& event){
	Find_Customer_Window* find_customer_window = new Find_Customer_Window(this);
	find_customer_window->Show(true);
	ID_button_pressed = ID_Transaction;
	}

void Menu_Window::button_erase(wxCommandEvent& event){
	Find_Customer_Window* find_customer_window = new Find_Customer_Window(this);
	find_customer_window->Show(true);
	ID_button_pressed = ID_Erase;
	}

void Menu_Window::button_see(wxCommandEvent& event){
	Find_Customer_Window* find_customer_window = new Find_Customer_Window(this);
	find_customer_window->Show(true);
	ID_button_pressed = ID_See;
		}

void Menu_Window::button_edit(wxCommandEvent& event){
	Find_Customer_Window* find_customer_window = new Find_Customer_Window(this);
	find_customer_window->Show(true);
	ID_button_pressed = ID_Edit;
	}

void Menu_Window::menu_exit(wxCommandEvent& event){
	Close();
	}
	

//std::vector<Account*> &Menu_Window::getAllAccounts(){return bank_accounts;}
std::vector<Account> &Menu_Window::getAllAccounts1(){return bank_accounts1;}

	
int Menu_Window::getId_button_pressed(){
	return this->ID_button_pressed;
	}

wxBEGIN_EVENT_TABLE(Menu_Window,wxFrame)
	EVT_BUTTON(ID_New_Account,Menu_Window::button_new_acc)
	EVT_BUTTON(ID_Edit,Menu_Window::button_edit)
	EVT_BUTTON(ID_Transaction,Menu_Window::button_transact)
	EVT_BUTTON(ID_Erase,Menu_Window::button_erase)
	EVT_BUTTON(ID_See,Menu_Window::button_see)
	EVT_BUTTON(ID_Exit,Menu_Window::menu_exit)
wxEND_EVENT_TABLE()