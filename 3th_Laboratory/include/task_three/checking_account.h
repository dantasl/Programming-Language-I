#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "account.h"

typedef enum status { special, common } Status;

class Checking_Account : public Account
{
	private:
		Status status;
		double limit;
		double available_limit;
		ostream& print(ostream &o) const;

	public:
		Checking_Account();
		Checking_Account(string _agency, string _number, Status _status, double _limit);
		~Checking_Account();
		Status getStatus();
		double getLimit();
		double getAvailableLimit();
		void setStatus(Status const _status);
		void setLimit(double const _limit);
		void setAvailableLimit(double const _availableLimit);
};

#endif