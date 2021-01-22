#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <vector>
#include <Transaction.h>

class Account{
private:
	std::string name;
	std::string birthday ;
	std::string citizen_number ;
	std::string address ;
	std::string phone_number;
	double balance;
	static int account_number;
	std::vector<Transaction> bank_transactions;
	
public:
	Account();
	bool deposit(double amount);
	bool withdraw(double amount);
	std::string getName() const;
	std::string getBirthday() const;
	std::string getCitizenNumber() const;
	std::string getAddress() const;
	std::string getPhoneNumber() const;
	double getBalance() const;
	int getAccountNumber() const;
	void setAddress(std::string address_);
	void setPhoneNumber(std::string phone_number_);
	void getAccountInformation() const;
	std::vector<Transaction>& getBankTransactions();

};
#endif