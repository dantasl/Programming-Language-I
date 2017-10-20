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
		string barcode, description, shelfLife, price, date;
		getline(fruits, barcode, ';');
		getline(fruits, description, ';');
		getline(fruits, price, ';');
		getline(fruits, date, ';');
		getline(fruits, shelfLife, ';');
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
		string barcode, description, price, alcoholContent;
		getline(beverages, barcode, ';');
		getline(beverages, description, ';');
		getline(beverages, price, ';');
		getline(beverages, alcoholContent, ';');
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
		string barcode, description, price, brand;
		string gender, size;
		getline(clothes, barcode, ';');
		getline(clothes, description, ';');
		getline(clothes, price, ';');
		getline(clothes, brand, ';');
		getline(clothes, gender, ';');
		getline(clothes, size, ';');

		//converting strings to char
		char *g = new char[1];
		strcpy(g, gender.c_str());

		char *s = new char[1];
		strcpy(s, size.c_str());

		addProduct( make_shared<Clothing>( barcode, description, stod(price), brand, g, s ) );

		delete[] g;
		delete[] s;
	}
}