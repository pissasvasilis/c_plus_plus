#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_
#include <string>


class Transaction{
private:
	double amount;
	std::string date;

public:
	Transaction(double amount_, std::string date_):amount{amount_},date{date_}{};
	double getAmount();
	std::string getDate();
	};
#endif