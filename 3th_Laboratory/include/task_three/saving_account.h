#ifndef _SAVING_ACCOUNT_H
#define _SAVING_ACCOUNT_H

#include "account.h"

class Saving_Account : public Account
{
	private:
		ostream& print(ostream &o) const;

	public:
		Saving_Account();
		Saving_Account(string _agency, string _number);
		~Saving_Account();
		double getLimit();
		double getAvailableLimit();
		void setLimit(double const _limit);
		void setAvailableLimit(double const _availableLimit);
};

#endif