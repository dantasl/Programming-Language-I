/**
 * @file	employee.h
 * @brief	Definition of class Employee.
 * 		    Specifies it's attributes and methods.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	02/09/2017
 * @date	02/09/2017
 */

#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>

/**
    * \brief Struct that holds the components of a date.
    * Used to input current date and when the employee was admitted.
*/
struct Date
{
    int day_of_admission;
    int month_of_admission;
    int year_of_admission;
};

class Employee
{
    private:
        std::string name_employee;
        double pay;
        Date date_admission;
        int id;
        std::string cpf; /** Brazilian equivalent to the Social Security Number */
    public:
        /** Default Constructor. */
        Employee();
        /**
            * \brief Parameterized Constructor.
            * \param name_employee Initializes attribute name_employee with this value.
            * \param pay Initializes attribute pay with this value.
            * \param date_admission Initializes attribute date_admission with this value.
            * \param cpf Initializes attribute cpf with this value.
        */
        Employee(std::string const name_employee, double const pay, Date const date_admission, std::string cpf);

        /** Acts as counter, its value is incremented when a new Employee is instantiated. */
        static int current_id;

        /** \return Attribute id. */
        int getId_Employee();
        /** \return Attribute date_admission. */
        Date getDate_Admission();
        /** \return Attribute cpf. */
        std::string getCpf();
        /** \return Attribute name_employee. */
        std::string getName_Employee();
        /** \return Attribute pay. */
        double getPay();

        /** \param cpf String containing the new cpf. */
        void setCpf(std::string const cpf);
        /** \param name_employee String containing the new name_employee. */
        void setName_Employee(std::string const name_employee);
        /** \param pay Double containing the new pay. */
        void setPay(double const pay);

        /** 
            * Overloading operator >> to insert data in an object from Employee.
            * This overloaded ">>" receives an object from Employee and asks the user to provide the values, while checks
            * if they're valid or not.
            * \param i The input stream.
            * \param e Object from Employee in which the data will be inserted.
        */
        friend std::istream& operator>>(std::istream &i, Employee& e);
};
#endif
