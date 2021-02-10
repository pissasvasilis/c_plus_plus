#include <Find_Customer_Window.h>
#include <See_Window.h>
#include <Transaction_Window.h>
#include <Edit_Window.h>

enum{ID_Account_number = 1, ID_OK};


Find_Customer_Window::Find_Customer_Window(wxWindow* parent):wxDialog(parent,wxID_ANY,"Account Details"){
	
	wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);
	
	topSizer->Add(new wxStaticText(this, wxID_STATIC, "Enter the number of account"),
				0,
				wxALL,
				10);
				
	wxTextCtrl* account_number = new wxTextCtrl(this,ID_Account_number);
	topSizer->Add(account_number, 0, wxALL, 10);

	topSizer->Add(new wxButton(this,ID_OK,"OK"),0,wxALL,10);

	this->SetSizer(topSizer);
	}

bool Find_Customer_Window::TransferDataFromWindow(){
	wxTextCtrl* account_number_Ctrl = static_cast<wxTextCtrl*>(FindWindowById(ID_Account_number,this));
	std::string account_number_Text = static_cast<std::string>(account_number_Ctrl->GetValue());
	account_number = atoi(account_number_Text.c_str());
	
	//Menu_Window* m = static_cast<Menu_Window*> (GetParent());
	//std::vector<Account*> &bank_accounts_= m->getAllAccounts();
	//acc = bank_accounts_[account_number];
	
	Menu_Window* m = static_cast<Menu_Window*> (GetParent());
	std::vector<Account> &bank_accounts= m->getAllAccounts1();
	acc = &bank_accounts[account_number];

	ID_button_pressed = m->getId_button_pressed();
	
	return true;
	}

void Find_Customer_Window::button_ok(wxCommandEvent& event){
	TransferDataFromWindow();
	
	if(ID_button_pressed == 2){
	Edit_Window* d = new Edit_Window(this);
	d->Show();
	Close();
		
	}else if (ID_button_pressed == 3){	
	Transaction_Window* d = new Transaction_Window(this);
	d->Show();
	Close();
	
	}else if (ID_button_pressed == 4){
	
	Menu_Window* m = static_cast<Menu_Window*> (GetParent());
	std::vector<Account> &bank_accounts = m->getAllAccounts1();
	bank_accounts.erase(bank_accounts.begin() + account_number);
	bank_accounts.shrink_to_fit();
	
	std::string account_number_str = std::to_string(account_number);
	std::string erase_message = "Customer no " + account_number_str;
	erase_message.append(" deleted!");
	
	wxMessageDialog* d = new wxMessageDialog(this,erase_message);
	d->ShowModal();
	Close();
	
	}else if(ID_button_pressed == 5){
	See_Window* d = new See_Window(this);
	d->Show();
	d->execute();
	Close();
	
	}else{
	std::cout << "Error";	
	}	
	
	}

void Find_Customer_Window::button_quit(wxCommandEvent& event){
	Close();
	}

Account* Find_Customer_Window::getCurrentAccount(){return acc;}

int Find_Customer_Window::getId_button_pressed(){
	return ID_button_pressed;
	}
	
wxBEGIN_EVENT_TABLE(Find_Customer_Window,wxDialog)
	EVT_BUTTON(ID_OK,Find_Customer_Window::button_ok)
	EVT_MENU(wxID_EXIT,Find_Customer_Window::button_quit)
wxEND_EVENT_TABLE()	