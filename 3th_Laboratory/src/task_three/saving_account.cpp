/**
 * @file	saving_account.cpp
 * @brief	Implementing functions described in saving_account.cpp 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_three/saving_account.h"

Saving_Account::Saving_Account() {}
Saving_Account::Saving_Account(string _agency, string _number)
	: Account(_agency, _number)
	{ /* empty */ }
Saving_Account::~Saving_Account() {}

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