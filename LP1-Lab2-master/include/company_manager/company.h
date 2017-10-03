/**
 * @file	company.h
 * @brief	Definition of class Company.
 * 		    Specifies it's attributes and methods.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	02/09/2017
 * @date	02/09/2017
 */

#ifndef _COMPANY_H_
#define _COMPANY_H_

#include <list>
#include <iterator>
#include <string>
#include <vector>
#include "employee.h"

class Company
{
    private:
        std::string name_company;
        std::string cnpj;
        std::list<Employee> employees;
        int id;
    public:
        /** \brief Default Constructor. */
        Company();
        /**
            * \brief Parameterized Constructor.
            * \param new_name_company Initializes attribute name_company with this value.
            * \param cnpj Initializes attribute cnpj with this value.
        */
        Company(const std::string new_name_company, const std::string cnpj);

        /** \brief Acts as counter, its value is incremented when a new Company is instantiated. */
        static int current_id;

        /** \return Attribute employees. */
        std::list<Employee> get_Employees();
        /** \return Attribute name_company. */
        std::string getName_Company();
        /** \return Attribute cnpj. */
        std::string getCnpj();
        /** \return Attribute id. */
        int getId_Company();

        /**
            * \brief Overloading operator == to compare Employees. \n
            * Iterates over the list containing all the employees of a company and checks if the cpf
            * of any member of the list is equal to the cpf of the parameter emp.
            * \param emp Object from class Employee.
            * \param le List containing all the employees from a Company.
            * \return true, if emp's cpf already inside the list.
            * \return false, otherwise.
        */
        friend bool operator==(Employee &emp, std::list<Employee> &le);
        /**
            * \brief Overloading operator == to compare Companies. \n
            * Iterates over the vector containing all the companies created and checks if the cnpj
            * of any member of the vector is equal to the cnpj of the parameter comp.
            * \param comp Object from class Company.
            * \param cp Vector containing all the objects from Company created.
            * \return true, if comp's cnpj already inside the vector.
            * \return false, otherwise.
        */
        friend bool operator==(Company &comp, std::vector<Company*> &cp);
        /**
            * \brief Overloading operator << to print objects from Company.
            * This overloaded "<<" will receive an object from Company and shall print all of its attributes.
            * After this, it will iterate over each of the Company's list of employees and prints all of its values.  
            * \param o The output stream.
            * \param c Object from Company that will have its values printed.
        */
        friend std::ostream& operator<< (std::ostream &o, Company& c);
        /**
            * \brief Overloading operator >> to insert data in object from Company.
            * This overloaded ">>" receives an object from Company and asks the user to provide the values, while checks
            * if they're valid or not.
            * \param is The input stream.
            * \param c Object from Company in which the values will be inserted.
        */
        friend std::istream& operator>>(std::istream &is, Company &c);

        /** \param new_name_company String containing the new name for the company. */
        void setName_Company(const std::string new_name_company);
        /** \param new_cnpj String containing the new CNPJ for the company. */
        void setCnpj(const std::string new_cnpj);

        /**
            * \brief Adding a new Employee to a Company.
            * First we must check if the new employee has an unique cpf on the employees list from Company. 
            * This is easily achievable since I overloaded the operator "==".
            * If the cpf is unique in the list, he will be added. If not, shows error message.
            * \param new_employee Object from Employee that will be inserted on the employees list.
        */
        void addEmployee(Employee new_employee);
        /**
            * \brief Shows the employees admitted in the last 90 days.
            * In order to do so, we must receive from the user the current date. I was not able to figure out
            * how to make the date difference by myself, so I got inspired by the algorithm described in this
            * link (acessed in September 5, 2017): <https://stackoverflow.com/a/9988487/8109020>
            * Of course I've made some changes in order to make it work for my case, but basically this link
            * gives you all the insight you need to understand, so I will avoid redundance here.
            * \param date_input Struct containing the current date.
        */
        void show_employees_experience(Date date_input);
        /**
            * \brief Raising salary for all the employees of this Company.
            * First the user must input the percentual of how much he wants to raise in all employees.
            * Then, this function iterates over each employee from the list, gets his current pay,
            * calculates the new pay based on the percentual and finally set the new value back to the
            * employee's pay.
            * \param new_salary Integer containing how much % the salary will be increased.
        */
        void give_Raise(int new_salary);
};
#endif