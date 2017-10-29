/**
 * @file	agency.h
 * @brief	Creating class Agency, responsable for managing Account operations. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _AGENCY_H_
#define _AGENCY_H_

using namespace std;

#include "checking_account.h"
#include "saving_account.h"
#include "transaction.h"
#include <memory>
#include <vector>
#include <iostream>
#include <iomanip>
	
class Agency
{
	private:
		vector<shared_ptr<Account>> accounts;
		string agency_number;

	public:
		/**
		 * @brief Default constructor.
		 */
		Agency();

		/**
		 * @brief Parameterized constructor.
		 * @param number Initialises Agency with agency_number setted as number.
		 */
		Agency(string number);

		/**
		 * @brief Default destructor.
		 */
		~Agency();

		/**
		 * @brief Getter for attribute agency_number.
		 * @return Attribute agency_number.
		 */
		string getNumber();

		/**
		 *  @brief This function verifies if there's already one Account with the same
		 *  number stored on the accounts vector. If so, shows error message. 
		 *  Otherwise, adds object to attribute accounts.
		 */
		void addAccount(const shared_ptr<Account> &a);

		/**
		 * @brief This function ask for the necessary parameters to create an Account object.
		 */
		void createAccount();

		/**
		 * @brief This function checks if a given account number is stored on accounts vector.
		 *		  If so, returns an iterator pointing to the object. Otherwise, return an iterator
		 *		  pointing to accounts.end().
		 * @param number String containing the account number to search for.
		 * @return Iterator pointing to the object or to accounts.end().
		 */
		vector<shared_ptr<Account>>::iterator findAccount(string const number);

		/**
		 * @brief This function deletes the Account object with the given account number
		 * 		  from accounts vector.
		 * @param number String containing the account number to delete.
		 */
		void deleteAccount(string const number);

		/**
		 * @brief This function checks and prints the balance of an Account object with the given
		 *		  account number in accounts vector.
		 * @param number String containing the account number to check and print balance.
		 */
		void checkBalance(string const number);

		/**
		 * @brief This function checks and prints the available limit of an Account object
		 * 		  with the given account number in accounts vector.
		 * @param number String containing the account number to check and print available limit.
		 */
		void checkAvailableLimit(string const number);

		/**
		 * @brief This function withdrawls money from an Account object. Given a certain ammount
		 *		  of money, the function checks if the object has a balance and/or available limit
		 *		  enough to support the operation. If so, instantiates a Transaction object of type
		 *		  debit and updates new balance and available limit. Otherwise, shows error message.
		 * @param number String containing the account number to perform withdrawl.
		 * @param money Ammount of money to cash out from account. 	
		 */
		void cashOut(string const number, double const money);

		/**
		 * @brief This function increments money in an Account object. Given a certain ammount
		 *		  of money, the function increments the object's balance. In case the available
		 *		  limit is less than the limit (means that the object is using overdraft), updates
		 *        this attribute too. Also, the function instantiates a Transaction object of type
		 * 		  credit.
		 * @param number String containing the account number to perform deposit.
		 * @param money Ammount of money to cash into account.
		 */
		void cashIn(string const number, double const money);

		/**
		 * @brief This function performs two main actions: withdrawl money from an Account object
		 * 		  and cash in money in another Account object. All steps and procedures to
		 *		  perform this actions are already implemented in function cashOut() and cashIn().
		 * @param number String containing number of the account that is making the transference.
		 * @param other String containing number of the account that is receiving the transferece.
		 * @param money Ammount of money to cash out of one account and cash into another account.
		 */				
		void transference(string const number, string const other, double money);

		/**
		 * @brief This function simply invoques the overloaded insertion operator
		 * 		  on Account object, printing all attributes of its Transaction vector.
		 */		
		void printBankStatement(string const number);
};

#endif