/**
 * @file	checking_account.h
 * @brief	Creating and defining prototypes for class Checking_Agency. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

using namespace std;

#include "transaction.h"
#include <ostream>
#include <string>

typedef enum status { special, common } Status;

class Checking_Account
{
	private:
		string agency;
		string number;
		Status status;
		double limit;
		double balance;
		vector<Transaction*> transactions;
		double available_limit;

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
		 * @brief Getter for attribute agency.
		 * @return Attribute agency.
		 */
		string getAgency();

		/**
		 * @brief Getter for attribute number.
		 * @return Attribute number.
		 */
		string getNumber();

		/**
		 * @brief Getter for attribute status.
		 * @return Attribute status.
		 */
		Status getStatus();

		/**
		 * @brief Getter for attribute balance.
		 * @return Attribute balance.
		 */
		double getBalance();

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
		 * @brief Setter for attribute balance.
		 * @param _balance New value for attribute balance.
		 */
		void setBalance(double const _balance);

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

		/**
		 * @brief This function receives a Transaction object and then adds it
		 *		  to the transactions vector.
		 * @param t Transaction object that will be added to the vector.
		 */
		void addTransaction(Transaction* t);

		/** @brief Overloading operator == to check if two Checking_Account objects possess
		 *		   the same account number.
		 * @return true If the accounts number are equals.
		 * @return false Otherwise.
		 */	
		bool operator== (Checking_Account &c);

		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class.
		 * @param o Insertion streamer.
		 * @param c Object that will have its attributes printed.
		 */
		friend ostream& operator<<(ostream &o, Checking_Account& c);
};

#endif