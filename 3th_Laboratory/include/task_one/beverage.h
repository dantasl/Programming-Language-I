/**
 * @file	beverage.h
 * @brief	Defining function prototypes for subclass Beverage from superclass Product. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include "product.h"

class Beverage : public Product
{
	public:
		/**
		 * @brief Default constructor.
		 */
		Beverage();

		/**
		 * @brief Parameterized constructor.
		 *		  Initializes all attributes from superclass and subclass.
		 * @param _code Barcode of the Product.
		 * @param _description Name of the Product.
		 * @param _price Price of the Product.
		 * @param _alcoholContent Alcohol Content of the Beverage.
		 */
		Beverage(string _code, string _description, double _price, int _alcoholContent);

		/**
		 * @brief Default destructor.
		 */
		~Beverage();

	private:
		int m_alcoholContent;

	public:
		/**
		 * @brief Getter for attribute m_alcoholContent.
		 * @return Attribute m_alcoholContent.
		 */
		int getAlcoholContent();

		/**
		 * @brief Setter for attribute m_alcoholContent.
		 * @param _alcoholContent New value for m_alcoholContent.
		 */
		void setAlcoholContent(int const _alcoholContent);

	private:
		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class and its superclass.
		 * @param o Insertion streamer.
		 */
		ostream& print(ostream &o) const;
};

#endif