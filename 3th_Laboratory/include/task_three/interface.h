/**
 * @file	interface.h
 * @brief	This set of functions shall act as an interface between user,
 *			class Account and its implementations.   
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include "agency.h"
#include "checking_account.h"
#include "transaction.h"

/**
 * @brief This function receives a vector of type agency, asks and treats the necessary
 * 		  parameters to create an agency and them checks if there's any other agency with the
 * 		  same number. If so, raises error message. Otherwise, adds to the vector of agencies
 *		  the new input.
 * @param agency The vector of agencies where the new input will be allocated.	
 */
void create_agency(vector<Agency*> &agency);

/**
 * @brief This function outputs to the user the list of all agencies created in the program.
 *		  Then the user can choose in which agency he wants to perform his further actions.
 * @param agency The vector where the agencies are stored.
 */
void choose_agency(vector<Agency*> &agency);

/**
 * @brief This function outputs to the user a list of options that he may perform while inside
 *		  the agency and stores the user's choice.
 * @param agency The vector where the agencies are stored.
 */
void menu_agency(Agency* &agency);

/**
 * @brief This function asks the user to provide the account number that he wants to perform
 * 		  further actions.
 * @return A string with the user's input.
 */
string readNumber();

/**
 * @brief This function asks the user to provide the ammount of money that he wants to move
 * 		  in further actions.
 * @return A double with the user's input.
 */
double getMoney();

/**
 * @brief This function receives the user's input provided in menu_agency() and redirects it
 * 		  to the corresponding function.
 * @param agency The vector where the agencies are stored.
 * @param option The previous user's choice received in menu_agency().
 */
void operate_agency(Agency* &agency, int option);

#endif