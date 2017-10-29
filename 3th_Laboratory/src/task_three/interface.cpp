/**
 * @file	interface.cpp
 * @brief	Implementing functions described in interface.h 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_two/interface.h"

void create_agency(vector<Agency*> &agency)
{
	string number;
	
	cout << endl;
	cout << "For this you only have to inform the agency's number (you can include dots and hyphens too):" << endl;
	cin >> number;
	while( number.empty() )
	{
		cout << endl << "So... you tried to provide an empty number. Do not do that again, please." << endl;
		cin >> number;
	}
	
	for(auto i = agency.begin(); i != agency.end(); ++i)
	{
		if( (**i).getNumber().compare(number) == 0 )
		{
			cout << endl << "This number is in use. You would know that if you had checked the list before." << endl;
			return;
		}	
	}

	agency.push_back(new Agency(number));
	cout << endl << "New agency created. Hooray.";	
}

void choose_agency(vector<Agency*> &agency)
{
	int cont = 0, option = 0;

	if (agency.size() == 0) { cout << endl << "No agencies created yet." << endl; return; }
	
	cout << endl << "Listing available agencies: " << endl << endl;
	for(auto i = agency.begin(); i != agency.end(); ++i, ++cont)
		cout << "Option " << cont + 1 << ": " << (**i).getNumber() << endl;
	cout << "Option 0: Return to the previous menu." << endl;
	cout << endl << "Type in your option: " << endl;

	cin >> option;

	while( option < 0 or (unsigned) option > agency.size() )
	{
		cout << endl << "Invalid option. Retry: " << endl;
		cin >> option;
	}

	if (option == 0) return;

	menu_agency( agency[ option - 1 ] );	
}

void menu_agency(Agency* &agency)
{
	int option = 1;
	while (option != 0)
	{	
		cout << endl << endl << ">> Welcome to the Agency. These are your options:" << endl;
		cout << "> 1 - Create account." << endl;
		cout << "> 2 - Print bank statement." << endl;
		cout << "> 3 - Remove one account." << endl;
		cout << "> 4 - Check balance." << endl;
		cout << "> 5 - Check limit and available limit." << endl;
		cout << "> 6 - Make a deposit." << endl;
		cout << "> 7 - Cash out." << endl;		
		cout << "> 8 - Make a transference." << endl;		
		cout << "> 0 - Return to the first menu." << endl;
		cin >> option;
		
		while(option < 0 or option > 8)
		{
			cout << endl << "So... your input was invalid. Consider trying again." << endl;
			cin >> option;
		}

		if (option == 0) return;

		operate_agency(agency, option);
	}
}

string readNumber()
{
	string number;
	cout << endl << "Enter the number of the account: " << endl;
	cin >> number;
	while( number.empty() )
	{
		cout << endl << "So... your input was invalid. Consider trying again." << endl;
		cin >> number;
	}
	return number;	
}

double getMoney()
{
	double money;
	cout << endl << "Enter how much money you want to move: " << endl;
	cin >> money;
	while( money < 0.00 )
	{
		cout << endl << "So... your input was invalid. Consider trying again." << endl;
		cin >> money;
	}
	return money;	
}

void operate_agency(Agency* &agency, int option)
{
	string number, number_two;
	double money;

	if (option >= 2 and option <= 7)
		number = readNumber();

	switch(option)
	{
		case 1:
			agency->createAccount();
			break;
		case 2:
			agency->printBankStatement(number);
			break;
		case 3:
			agency->deleteAccount(number);
			break;
		case 4:
			agency->checkBalance(number);
			break;
		case 5:
			agency->checkAvailableLimit(number);	
			break;	
		case 6:
			money = getMoney();
			agency->cashIn(number, money);
			break;
		case 7:
			money = getMoney();
			agency->cashOut(number, money);
			break;
		case 8:
			money = getMoney();
			cout << endl << "First, tell which count is making the transference. " << endl;
			number = readNumber();
			cout << endl << "Now, tell which count is receiveing the money. " << endl;
			number_two = readNumber();
			agency->transference(number, number_two, money);
			break;
		default:
			break;		
	}
}