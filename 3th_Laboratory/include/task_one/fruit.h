/**
 * @file	fruit.h
 * @brief	Defining function prototypes for subclass Fruit from superclass Product. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _FRUIT_H_
#define _FRUIT_H_

#include "product.h"

class Fruit : public Product
{
	public:
		/**
		 * @brief Default constructor.
		 */
		Fruit();

		/**
		 * @brief Parameterized constructor.
		 *		  Initializes all attributes from superclass and subclass.
		 * @param _code Barcode of the Product.
		 * @param _description Name of the Product.
		 * @param _price Price of the Product.
		 * @param _date Date storing when the Fruit was harvested
		 * @param _shelfLife Integer representing how many days the fruit has before gets rotten.
		 */
		Fruit(string _code, string _description, double _price, string _date, int _shelfLife);

		/**
		 * @brief Default destructor.
		 */
		~Fruit();

	private:
		string m_date;
		int m_shelfLife;

	public:
		/**
		 * @brief Getter for attribute m_date.
		 * @return Attribute m_date.
		 */
		string getDate();

		/**
		 * @brief Getter for attribute m_shelfLife.
		 * @return Attribute m_shelfLife.
		 */
		int getShelfLife();

		/**
		 * @brief Setter for attribute m_date.
		 * @param _data New date.
		 */
		void setDate(string const _data);

		/**
		 * @brief Setter for attribute m_date.
		 * @param _validade Value containing the new shelf life of the fruit.
		 */
		void setShelfLife(int const _validade);

	private:
		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class and its superclass.
		 * @param o Insertion streamer.
		 */
		ostream& print(ostream &o) const;
};

#endif