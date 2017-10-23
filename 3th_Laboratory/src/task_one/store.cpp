/**
 * @file	store.cpp
 * @brief	Implementing functions described in store.h 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_one/store.h"

Store::Store() {}
Store::~Store() {}

vector<shared_ptr<Product>> Store::getProducts() { return catalog; }

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
	if ( catalog.size() == 0 ) { cout << "Your catalog is currently empty... " << endl << endl; return; }
	for (auto i = catalog.begin(); i != catalog.end(); ++i)
		cout << (**i) << endl;
}

shared_ptr<Product> Store::searchProduct(string _barcode)
{
	for(auto i = catalog.begin(); i != catalog.end(); ++i)
	{
		if( (**i).getBarcode().compare(_barcode) == 0 )
			return *i;
	}
	cout << "The product with the provided barcode was not found." << endl;
	return nullptr;	
}

void Store::deleteProduct(string _barcode)
{
	for(auto i = catalog.begin(); i != catalog.end(); ++i)
	{
		if( (**i).getBarcode().compare(_barcode) == 0 )
		{
			catalog.erase(i);
			cout << endl << "Successfully deleted the product!" << endl;
			return;
		}	
			
	}
	cout << "The product with the provided barcode was not found." << endl;
}

void Store::readFruits()
{
	ifstream fruits;
	fruits.open("files/fruits.dat");
	if (fruits.bad()) 
	{
		cerr << "Could not open vital file fruits.dat. Can not proceed, aborting." << endl;
		exit(EXIT_FAILURE);
	}

	string line;	
	while ( getline(fruits, line) )
	{
		stringstream aux(line);
		string barcode, description, shelfLife, price, date;

		getline(aux, barcode, ';');
		getline(aux, description, ';');
		getline(aux, price, ';');
		getline(aux, date, ';');
		getline(aux, shelfLife, ';');

		addProduct( make_shared<Fruit>( barcode, description, stod(price), date, stoi(shelfLife) ) );
	}	
}

void Store::readBeverages()
{
	ifstream beverages;
	beverages.open("files/beverages.dat");
	if (beverages.bad()) 
	{
		cerr << "Could not open vital file beverages.dat. Can not proceed, aborting." << endl;
		exit(EXIT_FAILURE);
	}

	string line;	
	while ( getline(beverages, line) )
	{
		stringstream aux(line);
		string barcode, description, price, alcoholContent;
		
		getline(aux, barcode, ';');
		getline(aux, description, ';');
		getline(aux, price, ';');
		getline(aux, alcoholContent, ';');
		
		addProduct( make_shared<Beverage>( barcode, description, stod(price), stoi(alcoholContent) ) );
	}
}

void Store::readClothes()
{
	ifstream clothes;
	clothes.open("files/clothes.dat");
	if (clothes.bad()) 
	{
		cerr << "Could not open vital file clothes.dat. Can not proceed, aborting." << endl;
		exit(EXIT_FAILURE);
	}

	string line;	
	while ( getline(clothes, line) )
	{
		stringstream aux(line);
		string barcode, description, price, brand, gender, size;

		getline(aux, barcode, ';');
		getline(aux, description, ';');
		getline(aux, price, ';');
		getline(aux, brand, ';');
		getline(aux, gender, ';');
		getline(aux, size, ';');		

		addProduct( make_shared<Clothing>( barcode, description, stod(price), brand, gender, size ) );
	}
}