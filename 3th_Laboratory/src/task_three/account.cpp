#include "task_three/account.h"

Account::Account() {}

Account::Account(string _agency, string _number)
{
	agency = _agency;
	number = _number;
	balance = 0.00;
}

Account::~Account() {}

string Account::getAgency() { return agency; }

string Account::getNumber() { return number; }

double Account::getBalance() { return balance; }

vector<Transaction*> Account::getTransaction() { return transactions; }

void Account::setBalance(double const _balance) { balance = _balance; }

void Account::addTransaction(Transaction* t)
{
	transactions.push_back(t);
}

bool Account::operator== (Account &c)
{
	return this->number.compare( c.getNumber() ) == 0;
}