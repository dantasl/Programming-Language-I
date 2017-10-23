#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

using namespace std;

#include "transaction.h"
#include <string>

typedef enum status { special, common } Status;

class Checking_Account
{
	private:
		string agency;
		string number;
		Status status;
		double limit;
		double balance;
		vector<Transaction> transactions;
		double available_limit;

	public:
		Checking_Account();
		Checking_Account(string _agency, string _number, Status _status, double _limit);
		~Checking_Account();
		string getAgency();
		Transaction getTransaction();
		string getNumber();
		Status getStatus();
		double getBalance();
		double getLimit();
		double getAvailableLimit();
		void setStatus(Status const _status); //only setter that would make sense were implemented
		void setBalance(double const _balance);
		void setLimit(double const _limit);
		void setAvailableLimit(double const _availableLimit);
		bool operator== (Checking_Account &c);

};

#endif