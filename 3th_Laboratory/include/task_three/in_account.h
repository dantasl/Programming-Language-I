/**
 * @file	in_account.h
 * @brief	Creating and defining prototypes for superclass Account. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

using namespace std;

typedef enum status { special, common } Status;

#include <string>
#include <ostream>
#include <iostream>
#include "in_transaction.h"

class Account
{
	protected:
		string agency;
		string number;
		double balance;
		vector<Transaction*> transactions;
		
	public:
		/**
		 * @brief Default constructor.
		 */
		Account();

		/**
		 * @brief Parameterized constructor.
		 * @param _agency The agency number that manages this account.
		 * @param _number The number of the present account.
		 */
		Account(string _agency, string _number);

		/**
		 * @brief Virtual default destructor.
		 */
		virtual ~Account();

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
		 * @brief Getter for attribute balance.
		 * @return Attribute balance.
		 */
		double getBalance();

		/**
		 * @brief Getter for attribute transactions.
		 * @return Attribute transactions.
		 */
		vector<Transaction*> getTransaction();

		/**
		 * @brief Setter for attribute balance.
		 * @param _balance New value for attribute balance.
		 */
		void setBalance(double const _balance);

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
		bool operator== (Account &c);

		/** VIRTUAL METHODS THAT CAN BE IMPLEMENTED IN SUBCLASSES */
		virtual double getLimit() { return 0.0; }
		virtual double getAvailableLimit() { return 0.0; }
		virtual void setLimit(double limit) { }
		virtual void setAvailableLimit(double available_limit) { }

		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class.
		 * @param o Insertion streamer.
		 * @param c Object that will have its attributes printed.
		 */
		friend ostream& operator<<(ostream &o, Account const &c);

	private:
		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class and its superclass.
		 * @param o Insertion streamer.
		 */
		virtual ostream& print(ostream&) const = 0;	
};

#endif