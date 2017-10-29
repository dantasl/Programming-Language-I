/**
 * @file	in_transaction.h
 * @brief	Creating class Transaction, responsable for identifying cash in and cash out
 *			operations, besides keeping an historic of them. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_

typedef enum style { credit, debit } Style;

using namespace std;

#include <string>
#include <vector>

class Transaction
{
	private:
		string description;
		double money;
		Style style;

	public:
		/**
		 * @brief Default constructor.
		 */
		Transaction();

		/**
		 * @brief Parameterized constructor.
		 * @param _description Tells if the transaction is a cash in or a cash out one.
		 * @param _money Tells how much money was moved in this operation.
		 * @param _style Caracterizes the style of the operation: credit or debit.
		 */
		Transaction( string _description, double _money, Style _style );

		/**
		 * @brief Default destructor.
		 */
		~Transaction();


		/**
		 * @brief Getter for attribute descritpion.
		 * @return Attribute description.
		 */		
		string getDescription();

		/**
		 * @brief Getter for attribute money.
		 * @return Attribute money.
		 */
		double getMoney();

		/**
		 * @brief Getter for attribute style.
		 * @return Attribute style.
		 */
		Style getStyle();

		/**
		 * @brief Setter for attribute description.
		 * @param New value for attribute description.
		 */
		void setDescription(string const _description);

		/**
		 * @brief Setter for attribute money.
		 * @param New value for attribute money.
		 */
		void setMoney(double const _money);

		/**
		 * @brief Setter for attribute style.
		 * @param New value for attribute style.
		 */
		void setStyle(Style const _style);
};

#endif