#include <iostream>
#include <ctime>
#include <Acc_Utils.h>
#include <Account.h>

//void menu(){
//	int choice = 0;
//	std::vector<Account> bank_accounts;
//	Menu_Window* startMenu = new Menu_Window();
//	startMenu->Show(true);
/*
	do{
		std::cout << "CUSTOMER ACCOUNT BANKING MANAGMENT SYSTEM" << std::endl;
		std::cout << "\n";
		std::cout << "/////////WELCOME TO THE MAIN MENU/////////" << std::endl;
		std::cout << "\n";
		std::cout << "1. Create new account" << std::endl;
		std::cout << "2. Update information on an existing account" << std::endl;
		std::cout << "3. For transactions" << std::endl;
		std::cout << "4. Check the deatails of existing account" << std::endl;
		std::cout << "5. Removing existing account" << std::endl;
		std::cout << "6. View customer's list" << std::endl;
		std::cout << "7. Exit" << std::endl;
		std::cout << "\n\n";
		std::cout << "Enter your choice:";
		
		std::cin >> choice;
		
	switch(choice){
		
		case 1:
			new_acc(bank_accounts);
			break;
		case 2:
			edit(bank_accounts);
			break;
		case 3:
			transcat(bank_accounts);
			break;
		case 4:
			see(bank_accounts);
			break;
		case 5:
			erase(bank_accounts);
			break;
		case 6:
			view_list(bank_accounts);
			break;
		case 7:
			std::cout << "Bye!" << std::endl;
			break;
		default:
			std::cout << "Enter a number between 1-7"<< std::endl;
			std::cout << "\n";
	}
	
	}while(choice != 7  );

 
 }
*/

void new_acc(std::vector<Account> &bank_accounts_){

	bank_accounts_.push_back(Account());
	
	}
	
void view_list(const std::vector<Account> &bank_accounts_){

std::cout << "CUSTOMER'S BANKING INFORMATIONS" << std::endl;

	if(!bank_accounts_.size()){
		std::cout << "There are no bank accounts!"; 
		}else{
		
	for(auto &acc:bank_accounts_){
		acc.getAccountInformation() ;
		}		
	}
		std::cout << "\n\n";
	}

void transcat(std::vector<Account> &bank_accounts_){
int customer_position =-1;	
std::cout << "Enter the position of customer that you want to declare transaction"<< std::endl;
std::cin >> customer_position;

Account& edited_account = bank_accounts_[customer_position];


int customer_answer = 0;
double amount = 0;

std::cout << "For deposit press 1 / For withdraw press 2" << std::endl;	
std::cin >> customer_answer;


if(customer_answer == 1){
	std::cout << "Enter the amount that you want to deposit" << std::endl;
	std::cin >> amount; 
	time_t now = time(0);
	char* dt = ctime(&now);
	Transaction trans = Transaction(amount,dt);
	edited_account.getBankTransactions().push_back(trans);
	edited_account.deposit(amount);
	std::cout << "You have deposit: " << trans.getAmount() << " at " <<  trans.getDate() << std::endl;
	}	
	
if(customer_answer == 2){
	std::cout << "Enter the amount that you want to withdraw" << std::endl;
	std::cin >> amount; 
	time_t now = time(0);
	char* dt = ctime(&now);
	Transaction trans = Transaction(-1*amount,dt);
	edited_account.getBankTransactions().push_back(trans);
	edited_account.withdraw(amount);
	std::cout << "You have withdraw: " << trans.getAmount() << " at " <<  trans.getDate() << std::endl;
	}	
}

/*
void erase(std::vector<Account> &bank_accounts_){

int customer_position =-1;	
std::cout << "Enter the position of customer that you want to erase" << std::endl;
std::cin >> customer_position;

bank_accounts_.erase(bank_accounts_.begin()+customer_position);

std::cout << "Customer at position: " << customer_position << "has been erased" << std::endl;
}*/

void edit(std::vector<Account> &bank_accounts_){

int customer_position =-1;	
std::cout << "Enter the position of customer that you want to edit" << std::endl;
std::cin >> customer_position;

Account& edited_account = bank_accounts_[customer_position];
char customer_answer = 'N';

std::string new_customer_address = edited_account.getAddress();
std::cout << "Do you want to edit customer address Y or N?" << std::endl ;
std::cin >> customer_answer;
if(customer_answer == 'y' || customer_answer == 'Y'){
	std::cout << "Enter new customer address" << std::endl;
	std::cin >> new_customer_address;
	edited_account.setAddress(new_customer_address);
	customer_answer = 'N';
	}

std::string new_customer_phone_number = edited_account.getPhoneNumber();
std::cout << "Do you want to edit customer phone number Y or N?" << std::endl ;
std::cin >> customer_answer;
if(customer_answer == 'y' || customer_answer == 'Y'){
	std::cout << "Enter new customer phone number" << std::endl;
	std::cin >> new_customer_phone_number;
	edited_account.setPhoneNumber(new_customer_phone_number);
	customer_answer = 'N';
	}

std::cout << "Customer address at position: " << customer_position << " is " << new_customer_address << std::endl;
std::cout << "Customer phone number at position: " << customer_position << " is " << new_customer_phone_number << std::endl;

	}
	
void see(std::vector<Account> &bank_accounts_){
int customer_position =-1;	
std::cout << "Enter the position of customer that you want to edit" << std::endl;
std::cin >> customer_position;
	
std::vector<Transaction>  customer_transactions = bank_accounts_[customer_position].getBankTransactions();	
	for(Transaction &trans:customer_transactions){
		
		std::string kind_Transaction = trans.getAmount() > 0 ? " deposit " : " withdraw ";
		int symbol = trans.getAmount() > 0 ? 1 : -1; 
		
		std::cout << "You have"<< kind_Transaction << symbol * trans.getAmount() << " at " << trans.getDate();
		}
	}