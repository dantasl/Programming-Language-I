#include "task_two/agency.h"

Agency::Agency() {}
Agency::~Agency() {}

void Agency::createAccount() 
{
	string number;
	double overdraft;
	int stat;
	
	cout << "Enter the account number (you can write it with dots and hyphens): " << endl;
	cin >> number;
	
	cout << "Enter the the limit for overdraft: " << endl;
	cin >> overdraft;
	
	cout << "You are creating an special or a common account?" << endl;
	cout << "Special = 0, Common = 1 " << endl;
	cin >> stat;
	while(stat > 1 or stat < 0)
	{
		cout << "Invalid option. Please try again: " << endl;
		cin >> stat;
	}
	Status s = stat == 0 ? Status::special : Status::common;	

	auto new_account = make_shared<Checking_Account>(agency_number, number, s, overdraft);

	for(auto i = accounts.begin(); i != accounts.end(); ++i)
	{
		if(**i == *new_account) 
		{ 
			cout << "Could not create account. Same number already used in this agency." << endl;
			return;
		}
	}

	accounts.push_back(new_account);
	cout << "Account successfully created!" << endl;
}

vector<shared_ptr<Checking_Account>>::iterator Agency::findAccount(string const number)
{
	for (auto i = accounts.begin(); i != accounts.end(); ++i)
	{
		if ( (**i).getNumber().compare(number) == 0 )
			return i;
	}
	vector<shared_ptr<Checking_Account>>::iterator i(accounts.end());
	return i;	
}

void Agency::deleteAccount(string const number)
{
	char c;
	auto account = findAccount(number);
	if(account != accounts.end())
	{
		cout << "Account found. This is an irreversible action. You trully want to do this? (y/n)" << endl;
		cin >> c;
		while(c != 'y' and c != 'n')
		{
			cout << "Invalid option. Please try again: " << endl;
			cin >> c;
		}
		if(c == 'n') { cout << "Okay, you chose to cancel. " << endl; return; }
		else { cout << "Okay, you chose to proceed." << endl; accounts.erase(account); return; }
	}
	cout << "No account with the provided number was found in this agency." << endl;		
}

void Agency::checkBalance(string const number)
{
	auto account = findAccount(number);
	if(account != accounts.end())
	{
		cout << "R$" << (**account).getBalance() << endl;
		return;
	}
	cout << "No account with the provided number was found in this agency." << endl;	
}

void Agency::cashOut(string const number, double const money)
{
	auto account = findAccount(number);
	if(account != accounts.end())
	{
		double cash = (**account).getBalance() - money;
		if(cash < 0.00 and (cash + (**account).getAvailableLimit()) >= 0.00 ){}
		//criar a transação caso o user não tenho feito alguma.	
	}	
}