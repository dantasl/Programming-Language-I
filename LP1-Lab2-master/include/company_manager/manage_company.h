/**
 * @file    manage_company.h
 * @brief   Definition of the prototypes responsible for managing class Company and Employee.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   02/09/2017
 * @date    02/09/2017
 */

#ifndef _MANAGE_COMPANY_H_
#define _MANAGE_COMPANY_H_

#include <iostream>
#include <vector>
#include <iomanip>
#include "company.h"

/**
	* Forwards the user's option and calls for the right method to execute each one of them.
	* \param option Integer with value between 0 and 7, each value representing one different action.
	* \param companies Vector containing all the companies created by the user
*/	
void manage_company(const int option, std::vector<Company*> &companies);

/**
    * Checks if the Company's ID that will be provided by the user exists or not.
    * In order to do so, I chose to check if the input is on the range of the vector.
    * It's good to remember that the ID does not correspond to its actual index on the vector,
    * but the ID - 1 does. 
    * Now we just need to check if this value is between 0 and the size of the vector. If it 
    * is, then we say it exists. If not, returns -1, representing failure.
    * \param companies The vector to check the range (begin and end) and compare with the user's input.
	* \return -1 in case the ID is outside the range
	* \return ID-1 (which is the actual index to the ID position on the vector) in case the ID is inside the range
*/
int check_range(std::vector<Company*> &companies);

/**
	* This overloaded ">>" receives Date structure and asks the user to provide the values, while checks
    * if they're valid or not.
	\param in Input streamer
	\param date_input Date structure in which the values will be inserted.
*/	
std::istream& operator>>(std::istream &in, Date& date_input);

#endif