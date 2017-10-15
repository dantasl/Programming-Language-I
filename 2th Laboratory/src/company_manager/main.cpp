/**
 * @file    main.cpp
 * @brief   Main function for Company Manager.
 *          Shows a menu to the user while he does not decide to quit.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   02/09/2017
 * @date    02/09/2017
 */

#include "company_manager/manage_company.h"
#include <iostream>

/**
    * Main function.
    * Keeps a dialog with the user showing him a menu while he does not decide to quit.
    * The user must provide a valid number between 0 and 7, each corresponding to an option.
*/    
int main()
{
    std::vector<Company*> companies;
    int option = -1;
    while(option != 0)
    {
        std::cout << std::endl << "============================= MENU =============================" << std::endl;
        std::cout << "Welcome, manager! Here's the list of available funcionalities: " << std::endl;
        std::cout << "1 -> Create company" << std::endl;
        std::cout << "2 -> List companies" << std::endl;
        std::cout << "3 -> Add employee to company" << std::endl;
        std::cout << "4 -> List employees of a certain company" << std::endl;
        std::cout << "5 -> Give a raise in all employees of a certain company" << std::endl;
        std::cout << "6 -> List employees of a certain company by experience" << std::endl;
        std::cout << "7 -> Compute average number of employees per company" << std::endl;
        std::cout << "0 -> Leave menu" << std::endl;

        std::cout << std::endl << "What do you want to do?" << std::endl;
        std::cin >> option;

        while(option < 0 or option > 7)
        {
            std::cout << std::endl << "Invalid input! Read the menu and enter a valid option: " << std::endl;
            std::cin >> option;
        }
        manage_company(option, companies);
    }
    std::cout << std::endl << "================================================================" << std::endl;
}