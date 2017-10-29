/**
 * @file	in_checking_account.cpp
 * @brief	Implementing functions described in checking_account.h 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_three/in_checking_account.h"
#include <iostream>

Checking_Account::Checking_Account() {}

Checking_Account::Checking_Account(string _agency, string _number, Status _status, double _limit)
	: Account(_agency, _number)
{
	status = _status;
	limit = _limit;
	balance = 0.00;
	available_limit = _limit;
}

Checking_Account::~Checking_Account() {}

Status Checking_Account::getStatus() { return status; }

double Checking_Account::getLimit() { return limit; }

double Checking_Account::getAvailableLimit() { return available_limit; }

void Checking_Account::setStatus(Status const _status) { status = _status; }

void Checking_Account::setLimit(double const _limit) { limit = _limit; }

void Checking_Account::setAvailableLimit(double const _availableLimit) { available_limit = _availableLimit; }

ostream& Checking_Account::print(ostream &o) const
{
	if ( transactions.size() == 0 ) { o << endl << "No operations made yet." << endl; return o; }
	for( auto i = transactions.begin(); i != transactions.end(); ++i )
	{
		string style = (**i).getStyle() == Style::debit ? "Debit " : "Credit ";
		o 	<< (**i).getDescription() << " - R$" << (**i).getMoney() << "   Operation: " << style
			<< " New Balance: R$" << balance << " New Available Limit " << available_limit << endl;
	}
	return o;
}