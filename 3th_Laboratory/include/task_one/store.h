/**
 * @file	store.h
 * @brief	This class shall act as an interface between user,
 *			superclass Product and its subclasses. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#ifndef _STORE_H_
#define _STORE_H_

#include "product.h"
#include "clothing.h"
#include "fruit.h"
#include "beverage.h"
#include <vector>
#include <memory>
#include <iostream>
#include <fstream>
#include <sstream>
#include <numeric>

class Store
{
	private:
		vector<shared_ptr<Product>> catalog;
	
	public:
		/**
		 * @brief Default constructor.
		 */
		Store();

		/**
		 * @brief Default destructor.
		 */
		~Store();

		/**
		 * @brief Getter for attribute catalog.
		 * @return Attribute catalog.
		 */
		vector<shared_ptr<Product>> getProducts();

		/**
		 * @brief This function receives a shared_ptr of Product and
		 *		  checks if this Product is already inserted on catalog.
		 *		  If not, inserts it. Otherwise, shows error message.
		 * @param p Shared pointer of Product.
		 */
		void addProduct(shared_ptr<Product> p);

		/**
		 * @brief This function simply invoques the overloaded insertion operator
		 * 		  on attribute catalog, printing all Products stored on it.
		 */
		void printProducts();

		/**
		 * @brief This function receives a barcode and searchs on catalog for a Product
		 *		  with the matching result.
		 * @param _barcode The barcode to search.
		 */	
		shared_ptr<Product> searchProduct(string _barcode);

		/**
		 * @brief This function receives a barcode, invoques the search on it and 
		 * 		  if the Product was found, erases it from the catalog. If not,
		 *		  shows error message.
		 * @param _barcode The Product barcode to delete.
		 */
		void deleteProduct(string _barcode);

		/**
		 * @brief This function reads a file called beverages.dat and extracts all of its data.
		 * 		  With this data, an object of type Beverage is created and then added to the
		 *		  catalog.
		 */
		void readBeverages();

		/**
		 * @brief This function reads a file called clothes.dat and extracts all of its data.
		 * 		  With this data, an object of type Clothing is created and then added to the
		 *		  catalog.
		 */
		void readClothes();

		/**
		 * @brief This function reads a file called fruits.dat and extracts all of its data.
		 * 		  With this data, an object of type Fruit is created and then added to the
		 *		  catalog.
		 */
		void readFruits();
};

#endif