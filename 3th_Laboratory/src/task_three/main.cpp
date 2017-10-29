/**
 * @file	main.cpp
 * @brief	Receiving user's first choices and forwarding them to interface.cpp 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_three/agency.h"
#include "task_three/interface.h"

int main(int argc, char const *argv[])
{
	vector<Agency*> agency;
	int option = 0;
	while (option != 2)
	{	
		cout << endl << endl <<"============================= MENU =============================" << endl;
		cout << ">> Welcome to MyBank. First, choose/create an agency: " << endl;
		cout << "> 0 - Create agency" << endl;
		cout << "> 1 - Choose agency" << endl;
		cout << "> 2 - Leave the program" << endl;
		cin >> option;
		while(option < 0 or option > 2)
		{
			cout << endl << "So... your input was invalid. Consider trying again." << endl;
			cin >> option;
		}
		if (option == 2) break;	
		option == 0 ? create_agency(agency) : choose_agency(agency);
	}
	cout << endl << "Thanks for using this code. Enjoy the rest of your life." << endl;	
}