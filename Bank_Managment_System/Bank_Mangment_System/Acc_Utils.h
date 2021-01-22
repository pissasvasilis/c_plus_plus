#ifndef _ACC_UTILS_H_
#define _ACC_UTILS_H_
#include<vector>
#include<Account.h>

void menu();
void new_acc(std::vector<Account> &bank_accounts_);
void view_list(const std::vector<Account> &bank_accounts_);
void edit(std::vector<Account> &bank_accounts_);
void transcat(std::vector<Account> &bank_accounts_);
void erase(std::vector<Account> &bank_accounts_);
void see(std::vector<Account> &bank_accounts_);

#endif