#include "task_three/saving_account.h"

Saving_Account::Saving_Account() {}
Saving_Account::Saving_Account(string _agency, string _number)
	: Account(_agency, _number)
	{ /* empty */ }
Saving_Account::~Saving_Account() {}

double Saving_Account::getAvailableLimit(){ return 0.00; }
double Saving_Account::getLimit(){ return 0.00; }

void Saving_Account::setLimit(double const _limit) { /* empty for this account type */ }

void Saving_Account::setAvailableLimit(double const _limit) { /* empty for this account type */ }

ostream& Saving_Account::print(ostream &o) const
{
	if ( transactions.size() == 0 ) { o << endl << "No operations made yet." << endl; return o; }
	for( auto i = transactions.begin(); i != transactions.end(); ++i )
	{
		string style = (**i).getStyle() == Style::debit ? "Debit " : "Credit ";
		o 	<< (**i).getDescription() << " - R$" << (**i).getMoney() << "   Operation: " << style
			<< " New Balance: R$" << endl;
	}
	return o;
}