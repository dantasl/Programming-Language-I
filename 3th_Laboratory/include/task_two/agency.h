#ifndef _AGENCY_H_
#define _AGENCY_H_

using namespace std;

#include "checking_account.h"
#include "transaction.h"
#include <memory>
#include <vector>
#include <iostream>
#include <iomanip>
	
class Agency
{
	private:
		vector<shared_ptr<Checking_Account>> accounts;
		string agency_number;

	public:
		Agency(); //done
		Agency(string number);
		~Agency(); //done
		string getNumber();
		void createAccount(); //done
		vector<shared_ptr<Checking_Account>>::iterator findAccount(string const number); //done
		void deleteAccount(string const number); //done
		void cashOut(string const number, double const money); //done
		void cashIn(string const number, double const money); //done
		void checkAvailableLimit(string const number); //done
		void transference(string const number, string const other, double money); //done
		void checkBalance(string const number); //done
		void printTransactionHistory();

};

#endif