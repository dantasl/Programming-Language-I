#include "task_one/store.h"
#include <iostream>

Store::Store() {}
Store::~Store() {}

void Store::addProduct(shared_ptr<Product> p)
{
	if ( catalog.size() == 0 ) { catalog.push_back(p); return; }
	for (auto i = catalog.begin(); i != catalog.end(); ++i)
	{
		if(**i == *p) 
		{ 
			cerr << "Product with same barcode found. Your attempt to add a new product failed." << endl;
			return;
		}
	}
	catalog.push_back(p);	
}

void Store::printProducts()
{
	for (auto i = catalog.begin(); i != catalog.end(); ++i)
		cout << (**i) << endl;
}