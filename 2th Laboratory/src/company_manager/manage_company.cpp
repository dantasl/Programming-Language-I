/**
 * @file    manage_company.cpp
 * @brief   Receives the user's input and forwards it to one of the 8 available options supported by the algorithm.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   02/09/2017
 * @date    02/09/2017
 */

#include "company_manager/manage_company.h"

void manage_company(const int option, std::vector<Company*> &companies)
{
    std::vector<Company*>::iterator i = companies.begin();
    int check, new_salary;
    Date date_input;
    Employee employee;
    Company company;
    double average = 0.0;
    if(option >= 3 and option <= 6) /** These are the only options that need to check Company's ID. */
    {
        check = check_range(companies);
        if(check == -1) /** -1 indicates that the ID provided by the user is outside the vector of companies. */
            return;
        i = companies.begin() + check; /** Apoints now to the memory address of the Company's ID provided by the user */
    }    
    switch (option) {
        case 1:  
            std::cin >> company;
            if(company == companies)
            {
                std::cout << std::endl << "ERROR: This company's CNPJ already been registered. Try again. "<< std::endl;
            }
            else
            {
                std::cout << std::endl << "Company successfully created!" << std::endl;
                companies.push_back( new Company( company.getName_Company(), company.getCnpj() ) );
            }
            break;
        case 2:
            std::cout << std::endl << "Listing all the companies created: " << std::endl << std::endl;
            for(; i < companies.end(); ++i)
            {
                std::cout << "Company ID: "<< (**i).getId_Company() << "." << std::endl;
                std::cout << "Name: " << (**i).getName_Company() << std::endl;
                std::cout << "CNPJ: " << (**i).getCnpj() << std::endl;
                std::cout << "For a detailed list of its employees, see option 4." << std::endl << std::endl;
            }
            break;
        case 3:
            std::cin >> employee;
            (**i).addEmployee(employee);
            break;
        case 4:
            std::cout << (**i);
            break;
        case 5:
            std::cout << std::endl << "Do you want to increase the salary of employees by how much %?" << std::endl;
            std::cin >> new_salary;
            (**i).give_Raise(new_salary);
            break;
        case 6:
            std::cout << std::endl << "First, you need to input the current date: " << std::endl;
            std::cin >> date_input;
            (**i).show_employees_experience(date_input);
            break;
        case 7:
            std::cout << std::endl << "Total number of companies created: " << (Company::current_id - 1) << std::endl;
            std::cout << "Total number of employees created: " << (Employee::current_id - 1) << std::endl;
            average = (float)(Employee::current_id - 1) / (float)(Company::current_id - 1);
            std::cout << std::endl << "Average of employees per company: " << std::setprecision (2) << average << std::endl;
            break;
        case 0:
            break;
    }
}
    
int check_range(std::vector<Company*> &companies)
{
    unsigned int id = 0;
    std::vector<Company*>::iterator d = companies.begin();
    std::cout << std::endl << "Type employee's Company ID: " << std::endl;
    std::cin >> id;
    if( !( (id - 1) >= 0 and (id - 1) < companies.size()) )
    {
        std::cout << std::endl <<"ERROR: Company not found. Try again." << std::endl;
        return -1;
    }
    return (id - 1);
}

std::istream& operator>>(std::istream &in, Date& date_input)
{
    std::cout << std::endl << "Enter current day: " << std::endl;
    in >> date_input.day_of_admission;
    while(date_input.day_of_admission < 1 or date_input.day_of_admission > 31)
    {
        std::cout << std::endl << "Please, enter a valid day. Retry: " << std::endl;
        in >> date_input.day_of_admission;
    }

    std::cout << std::endl << "Enter current month: " << std::endl;
    in >> date_input.month_of_admission;
    while(date_input.month_of_admission < 1 or date_input.month_of_admission > 12)
    {
        std::cout << std::endl << "Please, enter a valid month. Retry: " << std::endl;
        in >> date_input.month_of_admission;
    }

    std::cout << std::endl << "Enter current year: " << std::endl;
    in >> date_input.year_of_admission;

    return in;
}