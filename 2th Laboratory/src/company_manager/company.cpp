/**
 * @file    company.cpp
 * @brief   Implementation of class Company.
 *          Implementing it's attributes and methods.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   02/09/2017
 * @date    02/09/2017
 */

#include "company_manager/company.h"
#include <iostream>
#include <ctime>

int Company::current_id = 1;

/** The reference of this function is described in company.h */    
std::tm convert_to(int day, int month, int year)
{
    std::tm tm = {0};
    tm.tm_mday = day;         // days count from 1
    tm.tm_mon = month - 1;    // months count from January=0
    tm.tm_year = year - 1900; // years count from 1900
    return tm;
}

Company::Company(){ }

Company::Company(const std::string new_name_company, const std::string cnpj)
{
    id = current_id++;
    name_company = new_name_company;
    this->cnpj = cnpj;
}

std::list<Employee> Company::get_Employees(){ return employees; }
std::string Company::getName_Company(){ return name_company; }
std::string Company::getCnpj(){ return cnpj; }
int Company::getId_Company(){ return id; }

bool operator==(Employee &emp, std::list<Employee> &employees)
{
    std::list<Employee>::iterator j;
    j = employees.begin();
    for(; j != employees.end(); ++j)
    {
        if( j->getCpf().compare(emp.getCpf()) == 0 )
            return true;
    }
    return false;
}

bool operator==(Company &comp, std::vector<Company*> &cp)
{
    std::vector<Company*>::iterator g;
    g = cp.begin();
    for(; g != cp.end(); ++g)
    {
        if( (**g).getCnpj().compare(comp.getCnpj()) == 0 )
            return true;
    }
    return false;
}

std::ostream& operator<< (std::ostream &o, Company &c)
{
    std::list<Employee>::iterator k;
    o << std::endl << "Company " << c.getName_Company() << std::endl;
    o << "CNPJ (TIN): " << c.getCnpj() << std::endl;
    o << "Company ID: " << c.getId_Company() << std::endl;
    o << std::endl << "Printing now a list of its employees: " << std::endl;
    for(k = c.employees.begin(); k != c.employees.end(); ++k)
    {
        o << std::endl << "Employee's ID: " << k->getId_Employee() << std::endl;
        o << "Employee's Name: " << k->getName_Employee() << std::endl;
        o << "Employee's Pay: $" << k->getPay() << std::endl;
        o << "Employee's Date of Admission (day/month/year): ";
        o << k->getDate_Admission().day_of_admission << "/";
        o << k->getDate_Admission().month_of_admission << "/";
        o << k->getDate_Admission().year_of_admission << "." << std::endl;
    }
    o << std::endl;
    return o;
}

std::istream& operator>>(std::istream &is, Company &c)
{
    std::cout << std::endl << "Enter name of the company: " << std::endl;
    is.ignore();
    std::getline(is, c.name_company);
    while(c.name_company.length() == 0)
    {
        std::cout << std::endl << "You can't left this value empty!" << std::endl;
        std::getline(is, c.name_company);
    }
    std::cout << std::endl << "Enter CNPJ of the company: " << std::endl;
    std::getline(is, c.cnpj);
    while(c.cnpj.length() == 0)
    {
        std::cout << std::endl << "You can't left this value empty!" << std::endl;
        std::getline(is, c.cnpj);
    }
    return is;
}

void Company::setName_Company(const std::string new_name_company) { name_company = new_name_company; }
void Company::setCnpj(const std::string new_cnpj) { cnpj = new_cnpj; }
  
void Company::addEmployee(Employee new_employee)
{
    if( new_employee == employees)
    {
        std::cout << "ERROR: This employee's CPF already been registered. Try again. "<< std::endl;
        new_employee.current_id--;
    }
    else
    {
        std::cout << std::endl << "Employee successfully created!" << std::endl;
        employees.push_back(new_employee);
    }
}

void Company::show_employees_experience(Date date_input)
{
    std::list<Employee>::iterator c = employees.begin();
    std::tm current_date = convert_to(date_input.day_of_admission,date_input.month_of_admission,date_input.year_of_admission);
    std::time_t time_current_date = std::mktime(&current_date);
    std::tm date_admission;
    std::time_t time_date_admission;
    std::time_t difference;
    Date temp;

    const int seconds_per_day = 86400;

    std::cout << std::endl << "These are the employees hired in the last 90 days: " << std::endl;

    for(; c != employees.end(); ++c)
    {
        temp = c->getDate_Admission();
        date_admission = convert_to(temp.day_of_admission, temp.month_of_admission, temp.year_of_admission);
        time_date_admission = std::mktime(&date_admission);
        difference = (time_current_date - time_date_admission) / seconds_per_day;
        if(difference <= 90)
        {
            std::cout << "ID #" << c->getId_Employee() << std::endl;
            std::cout << "Name: " << c-> getName_Employee() << std::endl;
            std::cout << "Pay: $" << c->getPay() << std::endl;
            std::cout << "CPF (or SSN): " << c->getCpf() << std::endl;
            std::cout << "Admission Date (day/month): " << c->getDate_Admission().day_of_admission;
            std::cout << "/" << c->getDate_Admission().month_of_admission << std::endl;
        }
    }
}
    
void Company::give_Raise(int new_salary)
{
    double pay = 0.0;
    double new_pay = 0.0;
    std::list<Employee>::iterator s;
    for(s = employees.begin(); s != employees.end(); ++s)
    {
        pay = s->getPay();
        new_pay = pay + ( ( (float) new_salary/100.0 ) * pay );
        s->setPay(new_pay);
    }
    std::cout << std::endl << "Successfully increasead all salaries for this company!" << std::endl;
}