/**
 * @file	in_account.cpp
 * @brief	Implementing functions described in account.h 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_three/in_account.h"

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

ostream& operator<< (ostream &o, Account const &c) 
{
	return c.print(o);
}

bool Account::operator== (Account &c)
{
	return this->number.compare( c.getNumber() ) == 0;
}