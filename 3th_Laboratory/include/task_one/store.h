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
		Store();
		~Store();
		vector<shared_ptr<Product>> getProducts();
		void addProduct(shared_ptr<Product> p);
		void printProducts();
		shared_ptr<Product> searchProduct(string _barcode);
		void deleteProduct(string _barcode);
		void readBeverages();
		void readClothes();
		void readFruits();
};

#endif