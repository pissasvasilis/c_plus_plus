#include <Edit_Window.h>
#include <Find_Customer_Window.h>

enum{ID_Address = 1, ID_Phone_Number};


Edit_Window::Edit_Window(wxWindow* parent):wxDialog(parent,wxID_ANY,"Edit Window"){
		
	Find_Customer_Window* f = static_cast<Find_Customer_Window*>(GetParent());
	Account* acc = f->getCurrentAccount();

	
	wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);

	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Edit Address"),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxTextCtrl(this,ID_Address,acc->getAddress()),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Edit Phone"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxTextCtrl(this,ID_Phone_Number,acc->getPhoneNumber()),
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
	
	topSizer->Add(bottomSizer,wxALIGN_CENTER_HORIZONTAL|wxALL,10);
	
	
	SetSizer(topSizer);
	topSizer->Fit(this);
	};

bool Edit_Window::TransferDataFromWindow(){
	wxTextCtrl* address_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Address,this));
	wxTextCtrl* phone_number_Ctrl = static_cast<wxTextCtrl*> (FindWindowById(ID_Phone_Number,this));
	
	address = static_cast<std::string> (address_Ctrl->GetValue());
	phone_number = static_cast<std::string> (phone_number_Ctrl->GetValue());
	
	return true;
	}

void Edit_Window::button_save_edit_acc(wxCommandEvent& event){
	TransferDataFromWindow();

	Find_Customer_Window* f = static_cast<Find_Customer_Window*>(GetParent());
	Account* acc = f->getCurrentAccount();
	
	acc->setAddress(address);
	acc->setPhoneNumber(phone_number);
	Close();
	}

wxBEGIN_EVENT_TABLE(Edit_Window,wxDialog)
	EVT_BUTTON(wxID_SAVE,Edit_Window::button_save_edit_acc)
wxEND_EVENT_TABLE()
