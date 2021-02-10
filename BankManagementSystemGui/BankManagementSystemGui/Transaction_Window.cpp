#include <Transaction_Window.h>
#include <Find_Customer_Window.h>
#include <wx/radiobut.h>
#include <ctime>

enum{Id_Withdraw = 1, ID_Transaction_Type, ID_Amount};

Transaction_Window::Transaction_Window(wxWindow* parent):wxDialog(parent,wxID_ANY,"Transaction Window"){
	
	wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);


	wxArrayString strings;
	strings.Add(wxT("Deposit"));
	strings.Add(wxT("Withdraw"));
	
	wxRadioBox* transactionType = new wxRadioBox(this,
									ID_Transaction_Type,
									"Select type of Transaction",
									wxDefaultPosition,
									wxDefaultSize,
									strings,
									2,1);
	
	topSizer->Add(transactionType,0,wxALL,10);
	
	topSizer->Add(new wxStaticText(this,wxID_ANY,"Amount"));
	topSizer->Add(new wxTextCtrl(this,ID_Amount),
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

bool Transaction_Window::TransferDataFromWindow(){
	wxRadioBox* transaction_type_Ctrl = static_cast<wxRadioBox*>(FindWindowById(ID_Transaction_Type,this));
	transaction_type = transaction_type_Ctrl->GetSelection();
	
	wxTextCtrl* amount_Ctrl = static_cast<wxTextCtrl*>(FindWindowById(ID_Amount,this));
	std::string amount_text = static_cast<std::string> (amount_Ctrl->GetValue());
	
	amount = atof(amount_text.c_str());
	
	return true;
	}

void Transaction_Window::button_save_transaction(wxCommandEvent& event){
	
	Find_Customer_Window* f = static_cast<Find_Customer_Window*> (GetParent());
	TransferDataFromWindow();
	Account* acc = f->getCurrentAccount();
	
	time_t now = time(0);
	char* dt = ctime(&now);
	
	switch(transaction_type){
		
		case 0:
			acc->deposit(amount);
			break;
		
		case 1:
			acc->withdraw(amount);
			amount = (-1.0)*amount;
			break;
		default:
			std::cout << "Error";
	}	
	
	Transaction trans = Transaction(amount,dt);
	acc->getBankTransactions().push_back(trans);
	
	Close();
	
	}
	
wxBEGIN_EVENT_TABLE(Transaction_Window,wxDialog)
	EVT_BUTTON(wxID_SAVE,Transaction_Window::button_save_transaction)
wxEND_EVENT_TABLE()	