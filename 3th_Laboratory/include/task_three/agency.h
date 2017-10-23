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
		Agency();
		Agency(string number);
		~Agency();
		string getNumber();
		void createAccount();
		vector<shared_ptr<Checking_Account>>::iterator findAccount(string const number);
		void deleteAccount(string const number);
		void checkBalance(string const number);
		void checkAvailableLimit(string const number);
		void cashOut(string const number, double const money);
		void cashIn(string const number, double const money);		
		void transference(string const number, string const other, double money);		
		void printBankStatement(string const number);
};

#endif