#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

using namespace std;

typedef enum status { special, common } Status;

#include <string>
#include <ostream>
#include "transaction.h"

class Account
{
	protected:
		string agency;
		string number;
		double balance;
		vector<Transaction*> transactions;
		
	public:
		Account();
		Account(string _agency, string _number);
		virtual ~Account();
		string getAgency();
		string getNumber();
		double getBalance();
		vector<Transaction*> getTransaction();
		void setBalance(double const _balance);
		void addTransaction(Transaction* t);
		bool operator== (Account &c);
		virtual double getAvailableLimit() = 0;
		virtual double getLimit() = 0;
		virtual void setLimit(double const _limit) = 0;
		virtual void setAvailableLimit(double const _availableLimit) = 0;
		friend ostream& operator<<(ostream &o, Account const &c);

	private:
		virtual ostream& print(ostream&) const = 0;	
};


#endif