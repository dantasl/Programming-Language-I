#ifndef _STORE_H_
#define _STORE_H_

#include "product.h"
#include <vector>
#include <memory>

class Store
{
	private:
		vector<shared_ptr<Product>> catalog;
	
	public:
		Store();
		~Store();
		void addProduct(shared_ptr<Product> p);
		void printProducts();
};

#endif