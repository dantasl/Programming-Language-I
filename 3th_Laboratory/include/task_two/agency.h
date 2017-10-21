#ifndef _AGENCY_H_
#define _AGENCY_H_

using namespace std;

#include "checking_account.h"
#include "transaction.h"
#include <memory>
#include <vector>
#include <iostream>
	
class Agency
{
	private:
		vector<shared_ptr<Checking_Account>> accounts;
		unsigned int agency_number;

	public:
		Agency(); //done
		~Agency(); //done
		void createAccount(); //done
		vector<shared_ptr<Checking_Account>>::iterator findAccount(string const number); //done
		void deleteAccount(string const number); //done
		void cashOut(string const number, double const money);
		void deposit(double const money);
		void transference(double const money);
		void checkBalance(string const number); //done
		void printTransactionHistory();

};

#endif