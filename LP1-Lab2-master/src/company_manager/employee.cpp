/**
 * @file    employee.cpp
 * @brief   Implementation of class Employee.
 *          Implements it's attributes and methods.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   02/09/2017
 * @date    02/09/2017
 */

#include "company_manager/employee.h"
#include <iostream>
#include <list>

int Employee::current_id = 1;

Employee::Employee(){}

Employee::Employee(std::string const name_employee, double const pay, Date const date_admission, std::string const cpf)
{
    this->name_employee = name_employee;
    this->pay = pay;
    this->date_admission = date_admission;
    this->cpf = cpf;
    id = current_id++;
}

int Employee::getId_Employee(){ return id; }
Date Employee::getDate_Admission(){ return date_admission; }
std::string Employee::getCpf(){ return cpf; }
std::string Employee::getName_Employee(){ return name_employee; }
double Employee::getPay(){ return pay; }

void Employee::setCpf(std::string const cpf){ this->cpf = cpf; }
void Employee::setName_Employee(std::string const name_employee)
{
    this->name_employee = name_employee;
}
void Employee::setPay(double const pay){ this->pay = pay; }

std::istream& operator>>(std::istream &i, Employee& e)
{
    std::cout << std::endl << "Enter the name of the employee: " << std::endl;
    i.ignore();
    std::getline(i, e.name_employee);
    while(e.name_employee.length() == 0)
    {
        std::cout << std::endl << "You can't left this value empty!" << std::endl;
        std::getline(i, e.name_employee);
    }

    std::cout << std::endl << "Enter his CPF (or Social Security Number): " << std::endl;
    std::getline(i, e.cpf);
    while(e.cpf.length() == 0)
    {
        std::cout << std::endl << "You can't left this value empty!" << std::endl;
        std::getline(i, e.cpf);
    }    

    std::cout << std::endl << "Enter his paying: " << std::endl;
    i >> e.pay;
    while(e.pay <= 0)
    {
        std::cout << std::endl << "This employee must earn something! Retry: " << std::endl;
        i >> e.pay;
    }

    std::cout << std::endl << "Enter the day os his admission: " << std::endl;
    i >> e.date_admission.day_of_admission;
    while(e.date_admission.day_of_admission < 1 or e.date_admission.day_of_admission > 31)
    {
        std::cout << std::endl << "Please, enter a valid day. Retry: " << std::endl;
        i >> e.date_admission.day_of_admission;
    }

    std::cout << std::endl << "Enter the month os his admission: " << std::endl;
    i >> e.date_admission.month_of_admission;
    while(e.date_admission.month_of_admission < 1 or e.date_admission.month_of_admission > 12)
    {
        std::cout << std::endl << "Please, enter a valid month. Retry: " << std::endl;
        i >> e.date_admission.month_of_admission;
    }

    std::cout << std::endl << "Enter the year of his admission: " << std::endl;
    i >> e.date_admission.year_of_admission;

    e.id=Employee::current_id++;

    return i;
}