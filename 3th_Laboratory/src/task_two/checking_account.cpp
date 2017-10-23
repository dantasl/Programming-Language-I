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

string Checking_Account::getAgency() { return agency; }

string Checking_Account::getNumber() { return number; }

Status Checking_Account::getStatus() { return status; }

double Checking_Account::getBalance() { return balance; }

double Checking_Account::getLimit() { return limit; }

double Checking_Account::getAvailableLimit() { return available_limit; }

void Checking_Account::setStatus(Status const _status) { status = _status; }

void Checking_Account::setBalance(double const _balance) { balance = _balance; }

void Checking_Account::setLimit(double const _limit) { limit = _limit; }

void Checking_Account::setAvailableLimit(double const _availableLimit) { available_limit = _availableLimit; }

void Checking_Account::addTransaction(Transaction* t)
{
	transactions.push_back(t);
}

bool Checking_Account::operator== (Checking_Account &c)
{
	return this->number.compare( c.getNumber() ) == 0;
}

ostream& operator<<(ostream &o, Checking_Account& c)
{
	if ( c.transactions.size() == 0 ) { o << endl << "No operations made yet." << endl; return o; }
	for( auto i = c.transactions.begin(); i != c.transactions.end(); ++i )
	{
		string style = (**i).getStyle() == Style::debit ? "Debit " : "Credit ";
		o 	<< (**i).getDescription() << " - R$" << (**i).getMoney() << "   Operation: " << style
			<< " New Balance: R$" << c.balance << " New Available Limit " << c.available_limit << endl;
	}
	return o;	
}