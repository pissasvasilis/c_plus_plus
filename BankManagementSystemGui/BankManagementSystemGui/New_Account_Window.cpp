#include <New_Account_Window.h>
#include <wx/datectrl.h>
#include <Account.h>
#include <Menu_Window.h>
#include <iostream>
#include <typeinfo>

enum{ID_First_Name = 1, ID_Last_Name, ID_Birthday,
	 ID_Citizen_Number, ID_Address, ID_Init_Amount, ID_Phone_Number};


New_Account_Window::New_Account_Window(wxWindow* parent):wxDialog(parent,wxID_ANY,"New Account"){
	
	wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"First Name"),
				0,
				wxALL,
				10);
				
	wxTextCtrl* first_Name = new wxTextCtrl(this,ID_First_Name);
	
	topSizer->Add(first_Name,
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Last Name:"),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxTextCtrl(this,ID_Last_Name),
				0,
				wxALL,
				10);
	
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Birthday"),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxDatePickerCtrl(this,ID_Birthday),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Citizen Number"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxTextCtrl(this,ID_Citizen_Number),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Address"),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxTextCtrl(this,ID_Address),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Phone"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxTextCtrl(this,ID_Phone_Number),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Initial Amount"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxTextCtrl(this,ID_Init_Amount),
				0,
				wxALL,
				10);
			
	wxBoxSizer* bottomSizer = new wxBoxSizer(wxHORIZONTAL);
	
	bottomSizer->Add(new wxButton(this,wxID_CANCEL,"Cancel"),
				0,
				wxALL,
				10);
	
	bottomSizer->Add(new wxButton(this,wxID_SAVE,"Save"),
				0,
				wxALL,
				10);
				
	topSizer->Add(bottomSizer,0,wxALIGN_CENTER);
	SetSizer(topSizer);
	topSizer->Fit(this);
	
	};

bool New_Account_Window::TransferDataFromWindow(){
	wxTextCtrl* first_Name_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_First_Name ,this));
	wxTextCtrl* last_Name_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Last_Name,this));
	wxDatePickerCtrl* birthday_Ctrl = static_cast<wxDatePickerCtrl*> (FindWindowById(ID_Birthday,this));
	wxTextCtrl* citizen_number_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Citizen_Number,this));	
	wxTextCtrl* address_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Address,this));
	wxTextCtrl* phone_number_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Phone_Number,this));
	wxTextCtrl* init_amount_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Init_Amount,this));
	
	
	firstName = static_cast<std::string> (first_Name_Ctrl->GetValue());
	lastName = static_cast<std::string> (last_Name_Ctrl->GetValue());
	
	time_t current_time = birthday_Ctrl->GetValue().GetTimeNow();
	birthday = ctime(&current_time);
	
	citizen_number = static_cast<std::string> (citizen_number_Ctrl->GetValue());
	address = static_cast<std::string> (address_Ctrl->GetValue());
	phone_number = static_cast<std::string> (phone_number_Ctrl->GetValue());
	
	std::string init_amount_text = static_cast<std::string> (init_amount_Ctrl->GetValue());
	init_amount = atof(init_amount_text.c_str());
	
	
	return true;
	};

void New_Account_Window::button_save_new_acc(wxCommandEvent& event){
	TransferDataFromWindow();
	
	std::string full_name = "";
	full_name.append(firstName);
	full_name.append(" ");
	full_name.append(lastName);
/*	
	Account* acc = new Account();
	acc->setName(full_name);
	acc->setBirthday(birthday);
	acc->setCitizenNumber(citizen_number);
	acc->setAddress(address);
	acc->setPhoneNumber(phone_number);
	acc->deposit(init_amount);
	*/
	
	Account acc1 = Account();
	acc1.setName(full_name);
	acc1.setBirthday(birthday);
	acc1.setCitizenNumber(citizen_number);
	acc1.setAddress(address);
	acc1.setPhoneNumber(phone_number);
	acc1.deposit(init_amount);
	
	Menu_Window* m = static_cast <Menu_Window*> (GetParent());
	
	//std::vector<Account*> &allAccounts = m->getAllAccounts();
	//allAccounts.push_back(acc);
	
	std::vector<Account> &allAccounts1 = m->getAllAccounts1();
	allAccounts1.push_back(acc1);
	//allAccounts1->push_back(acc1);

	Close();
	};
 
void New_Account_Window::button_cancel_new_acc(wxCommandEvent& event){
	};
	
wxBEGIN_EVENT_TABLE(New_Account_Window,wxDialog)
	EVT_BUTTON(wxID_SAVE,New_Account_Window::button_save_new_acc)
wxEND_EVENT_TABLE()