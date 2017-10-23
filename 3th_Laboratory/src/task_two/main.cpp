#include "task_two/agency.h"
#include "task_two/interface.h"

int main(int argc, char const *argv[])
{
	vector<Agency*> agency;
	int option = 0;
	while (option != 2)
	{	
		cout << "============================= MENU =============================" << endl;
		cout << ">> Welcome to MyBank. First, choose/create an agency: " << endl;
		cout << "> 0 - Create agency" << endl;
		cout << "> 1 - Choose agency" << endl;
		cout << "> 2 - Leave the program" << endl;
		cin >> option;
		while(option < 0 and option > 2)
		{
			cout << "So... your input was invalid. Consider trying again." << endl;
			cin >> option;
		}
		if (option == 2) break;	
		option == 0 ? create_agency(agency) : choose_agency(agency);
	}
	cout << "Thanks for using this code. Enjoy the rest of your life." << endl;	
}