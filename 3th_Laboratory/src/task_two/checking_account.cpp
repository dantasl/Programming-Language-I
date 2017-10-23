#include "task_two/checking_account.h"

Checking_Account::Checking_Account() {}

Checking_Account::Checking_Account(string _agency, string _number, Status _status, double _limit)
{
	agency = _agency;
	number = _number;
	status = _status;
	limit = _limit;
	balance = 0.00;
	available_limit = _limit;
}

Checking_Account::~Checking_Account() {}

string Checking_Account::getNumber() { return number; }

double Checking_Account::getLimit() { return limit; }

double Checking_Account::getBalance() { return balance; }

double Checking_Account::getAvailableLimit() { return available_limit; }

void Checking_Account::setBalance(double const _balance) { balance = _balance; }

void Checking_Account::setAvailableLimit(double const _availableLimit) { available_limit = _availableLimit; }

bool Checking_Account::operator== (Checking_Account &c)
{
	return this->number.compare( c.getNumber() ) == 0;
}	