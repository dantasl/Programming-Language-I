/**
 * @file	clothing.h
 * @brief	Defining function prototypes for subclass Clothing from superclass Product. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _CLOTHING_H_
#define _CLOTHING_H_

#include "product.h"

class Clothing : public Product
{
	public:
		/**
		 * @brief Default constructor.
		 */
		Clothing();

		/**
		 * @brief Parameterized constructor.
		 *		  Initializes all attributes from superclass and subclass.
		 * @param _code Barcode of the Product.
		 * @param _description Name of the Product.
		 * @param _price Price of the Product.
		 * @param _brand Name cloth's brand.
		 * @param _gender Gender for which the cloth was designed. Its values can be 'M' (Male) of 'F' (Female).
		 * @param _size Size of the cloth. Its values can be 'L' (Large), 'S' (Small) or 'M' (Medium)
		 */
		Clothing(string _code, string _description, double _price, string _brand, string _gender, string _size);

		/**
		 * @brief Default destructor.
		 */
		~Clothing();

	private:
		string m_brand;
		string m_gender;
		string m_size;

	public:
		/**
		 * @brief Getter for attribute m_brand.
		 * @return Attribute m_brand.
		 */
		string getBrand();

		/**
		 * @brief Getter for attribute m_gender.
		 * @return Attribute m_gender.
		 */
		string getGender();

		/**
		 * @brief Getter for attribute m_size.
		 * @return Attribute m_size.
		 */
		string getSize();

		/**
		 * @brief Setter for attribute m_brand.
		 * @param _brand New value for m_brand.
		 */
		void setBrand(string _brand);

		/**
		 * @brief Setter for attribute m_gender.
		 * @param _gender New value for m_gender.
		 */
		void setGender(string _gender);

		/**
		 * @brief Setter for attribute m_size.
		 * @param _size New value for m_size.
		 */
		void setSize(string _size);

	private:
		/**
		 * @brief Overloading insertion operator. 
		 *		  Prints all attributes from this class and its superclass.
		 * @param o Insertion streamer.
		 */
		ostream& print(ostream &o) const;
};

#endif