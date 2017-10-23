#include "task_two/interface.h"

void create_agency(vector<Agency*> &agency)
{
	string number;
	
	cout << "For this you only have to inform the agency's number (you can include dots and hyphens too):" << endl;
	cin >> number;
	while( number.empty() )
	{
		cout << "So... you tried to provide an empty number. Do not do that again, please." << endl;
		cin >> number;
	}
	
	for(auto i = agency.begin(); i != agency.end(); ++i)
	{
		if( (**i).getNumber().compare(number) == 0 )
		{
			cout << "This number is in use. You would know that if you had checked the list before." << endl;
			return;
		}	
	}

	agency.push_back(new Agency(number));
	cout << "New agency created. Hooray." << endl << endl;	
}

void choose_agency(vector<Agency*> &agency)
{
	int cont = 0, option;
	
	cout << endl << "Listing available agencies: " << endl << endl;
	for(auto i = agency.begin(); i != agency.end(); ++i, ++cont)
		cout << "Option: " << cont + 1 << " Number: " << (**i).getNumber() << endl;
	cout << "Option: 0 ------- Return to the previous menu." << endl;
	cout << endl << "Type in your option: " << endl;

	cin >> option;

	while(option < 0 and option > (option + 1) )
	{
		cout << "Invalid option. Retry: " << endl;
		cin >> option;
	}

	if (option == 0) return;

	menu_agency( agency[ option - 1 ] );	
}

void menu_agency(Agency* &agency)
{
	
}