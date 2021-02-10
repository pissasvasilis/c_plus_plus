#include <string.h>
#include <See_Window.h>
#include <Find_Customer_Window.h>

See_Window::See_Window(wxWindow* parent):wxDialog(parent,wxID_ANY,"See Window"){
	};

void See_Window::execute(){
	Find_Customer_Window* f = static_cast<Find_Customer_Window*>(GetParent());
	Account* acc = f->getCurrentAccount();

	wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Full Name"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,acc->getName()),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Birthday"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,acc->getBirthday()),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Citizen Number"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,acc->getCitizenNumber()),
				0,
				wxALL,
				10);			
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Address"),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxStaticText(this,wxID_STATIC,acc->getAddress()),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Phone"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,acc->getPhoneNumber()),
				0,
				wxALL,
				10);
				
	topSizer->Add(new wxStaticText(this,wxID_STATIC,"Total Amount"),
				0,
				wxALL,
				10);
	
	topSizer->Add(new wxStaticText(this,wxID_STATIC,std::to_string(acc->getBalance())),
				0,
				wxALL,
				10);
	
	
	std::vector<Transaction>  customer_transactions = acc->getBankTransactions();	
	for(Transaction &trans:customer_transactions){
		
		std::string kind_Transaction = trans.getAmount() > 0 ? " deposit " : " withdraw ";
		int symbol = trans.getAmount() > 0 ? 1 : -1; 
		
		std::string transactionMessage = "You have " + kind_Transaction;
		std::string trans_amount = std::to_string(symbol * trans.getAmount());
		
		transactionMessage += trans_amount;
		transactionMessage.append(" at "),
		transactionMessage += trans.getDate();
		
		topSizer->Add(new wxStaticText(this,wxID_STATIC,transactionMessage),
				0,
				wxALL,
				0);
		
		//std::cout << "You have"<< kind_Transaction << symbol * trans.getAmount() << " at " << trans.getDate();
		}
	
					
	SetSizer(topSizer);
	topSizer->Fit(this);
	}