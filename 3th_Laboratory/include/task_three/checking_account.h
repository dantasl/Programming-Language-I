/**
 * @file	checking_account.h
 * @brief	Creating and defining prototypes for subclass Checking_Account from
 *			superclass Account. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "account.h"

class Checking_Account : public Account
{
	private:
		Status status;
		double limit;
		double available_limit;

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
		Checking_Account();

		/**
		 * @brief Parameterized constructor.
		 * @param _agency The agency number that manages this account.
		 * @param _number The number of the present account.
		 * @param _status Tells if this is a special or a common account.
		 * @param _limit The maximum ammount of money that this account can go in overdraft.
		 */
		Checking_Account(string _agency, string _number, Status _status, double _limit);

		/**
		 * @brief Default destructor.
		 */
		~Checking_Account();

		/**
		 * @brief Getter for attribute status.
		 * @return Attribute status.
		 */
		Status getStatus();

		/**
		 * @brief Getter for attribute limit.
		 * @return Attribute limit.
		 */
		double getLimit();

		/**
		 * @brief Getter for attribute available_limit.
		 * @return Attribute available_limit.
		 */
		double getAvailableLimit();

		/**
		 * @brief Setter for attribute status.
		 * @param _status New value for attribute status.
		 */
		void setStatus(Status const _status);

		/**
		 * @brief Setter for attribute limit.
		 * @param _limit New value for attribute limit.
		 */
		void setLimit(double const _limit);

		/**
		 * @brief Setter for attribute available_limit.
		 * @param _availableLimit New value for attribute available_limit.
		 */
		void setAvailableLimit(double const _availableLimit);
};

#endif