#include <iostream>
#include <Account.h>

Account::Account(){
	std::cout << "Enter customer name:";
	std::cin >> name;
	
	std::cout << "Enter customer birtday:";
	std::cin >> birthday;
	
	std::cout << "Enter customer citizen number:";
	std::cin >> citizen_number;
	
	std::cout << "Enter customer address:";
	std::cin >> address;
	
	std::cout << "Enter customer phone nunber:";
	std::cin >> phone_number;
	
	std::cout << "Deposit initial amount:";
	std::cin >> balance;
	
	++account_number;
	
	};

bool Account::deposit(double amount){
		
		if(amount < 0){
			return false;
		}else{
			balance += amount;
			return true;
			}
		}
bool Account::withdraw(double amount){
		
		if(amount < 0){
			return false;
		}else{
			balance -= amount;
			return true;
			}
		}

std::string Account::getName() const{	
	return name;
	}

std::string Account::getBirthday() const {
	return birthday;
	}
	
std::string Account::getCitizenNumber() const{
	return citizen_number;
	}

std::string Account::getAddress() const{
	return address;
	}
	
std::string Account::getPhoneNumber() const{
	return phone_number;
	}

double Account::getBalance() const{
	return balance;
	}

int Account::account_number {-1};

int Account::getAccountNumber() const{
	return account_number;
	}

void Account::setAddress(std::string address_){
	this->address = address_;
	}

void Account::setPhoneNumber(std::string phone_number_){
	this->phone_number = phone_number_;
	}

void Account::getAccountInformation() const{
	std::cout << "Account Number: " << this->getAccountNumber() << std::endl;
	std::cout << "Name: " << this->getName() << std::endl ;
	std::cout << "Birthday: " << this->getBirthday() << std::endl ;
	std::cout << "Address: " << this->getAddress() << std::endl ;
	std::cout << "Phone number: " << this->getPhoneNumber() << std::endl ;
	}

std::vector<Transaction>& Account::getBankTransactions(){
	return bank_transactions;
	}