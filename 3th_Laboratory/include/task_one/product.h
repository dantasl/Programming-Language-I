/**
 * @file	product.h
 * @brief	Defining function prototypes for base class Product. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>
using namespace std;

class Product
{
	public:
		/**
		 * @brief Default constructor.
		 */		
		Product();
		/**
		 * @brief Parameterized constructor.
		 *		  Initializes all attributes from superclass and subclass.
		 * @param _code Barcode of the Product.
		 * @param _description Name of the Product.
		 * @param _price Price of the Product.
		 */
		Product(string _code, string _description, double _price);

		/**
		 * @brief Virtual default destructor.
		 */
		virtual ~Product();

	protected:		
		string m_barcode;
		string m_description;
		double m_price;

	public:
		/**
		 * @brief Getter for attribute m_barcode.
		 * @return Attribute m_barcode.
		 */
		string getBarcode();

		/**
		 * @brief Getter for attribute m_description.
		 * @return Attribute m_date.
		 */
		string getDescription();

		/**
		 * @brief Getter for attribute m_price.
		 * @return Attribute m_price.
		 */
		double getPrice();

		/**
		 * @brief Setter for attribute m_barcode.
		 * @param _code New m_barcode.
		 */		
		void setBarcode(string _code);

		/**
		 * @brief Setter for attribute m_description.
		 * @param _data New m_description.
		 */
		void setDescription(string _description);

		/**
		 * @brief Setter for attribute m_price.
		 * @param _data New m_price.
		 */
		void setPrice(double _price);

		/**
		 * @brief Overloading insertion operator. 
		 *		  Calls function print() for the subclass.
		 * @param o Insertion streamer.
		 * @param t Object from class Product
		 */	
		friend ostream& operator<< (ostream &o, Product const &t);

		/**
		 * @brief Overloading + operator. 
		 *		  When called, sums the price of two values.
		 * @param p Object from class Produc.
		 * @return Sum between p.m_price and this->m_price.
		 */
		double operator+ (Product &p);

		/**
		 * @brief Overloading - operator. 
		 *		  When called, subtracts the price of two values.
		 * @param p Object from class Produc.
		 * @return Subtraction between p.m_price and this->m_price.
		 */
		double operator- (Product &p);

		/**
		 * @brief Overloading == operator. 
		 *		  When called, compares barcodes of two Products.
		 * @param p Object from class Produc.
		 * @return true If p.m_barcode is equal to this->m_barcode.
		 * @return false Otherwise.
		 */
		bool operator== (Product &p);
		  
	private:
		/**
		 * @brief Creating pure virtual function print(). 
		 *		  Any subclass from Product must implement its own version
		 *		  of this function.
		 * @param o Insertion streamer.
		 */
		virtual ostream& print(ostream&) const = 0;
};
 
#endif