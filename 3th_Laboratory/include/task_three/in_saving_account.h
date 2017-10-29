/**
 * @file	in_saving_account.h
 * @brief	Creating subclass Saving_Account from superclass Account. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _SAVING_ACCOUNT_H
#define _SAVING_ACCOUNT_H

#include "in_account.h"

class Saving_Account : public Account
{
	private:
		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class and its superclass.
		 * @param o Insertion streamer.
		 */
		ostream& print(ostream &o) const;

	public:
		/**
		 * @brief Default constructor.
		 */
		Saving_Account();

		/**
		 * @brief Parameterized constructor.
		 * @param _agency The agency number that manages this account.
		 * @param _number The number of the present account.
		 */
		Saving_Account(string _agency, string _number);

		/**
		 * @brief Default destructor.
		 */
		~Saving_Account();
};

#endif