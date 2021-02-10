#include <iostream>
#include <Account.h>
#include <New_Account_Window.h>


Account::Account(){
	
	//++account_number;
	
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

void Account::setName(std::string name_){
	name = name_;
	}

void Account::setBirthday(std::string birthday_){
	this->birthday = birthday_;
	}

void Account::setCitizenNumber(std::string citizen_number_){
	this->citizen_number = citizen_number_;
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