/**
 * @file	main.cpp
 * @brief	Driver code for testing class Product and its implementations. 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include <iostream>
#include <vector>
#include <memory>
#include "task_one/product.h"
#include "task_one/fruit.h"
#include "task_one/beverage.h"
#include "task_one/clothing.h"
#include "task_one/store.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Store store;

	// Pre-loading products. Don't worry, an error saying some products were not added is suposed to appear.
	cout << "Adding products from .dat files into your Store." << endl << endl;
	store.readFruits();
	store.readBeverages();
	store.readClothes();

	cout << endl << "Check out your brand new catalog: " << endl << endl;
	store.printProducts();

	auto temp = store.getProducts();
	cout << endl << "The first two items of your inventory are worth: $" 
		 << *temp.at(0) + *temp.at(1) << endl;
	cout << endl << "The difference of price between your two last items is worth: $"
		 << *temp.at(temp.size() - 1) - *temp.at(temp.size() - 2) << endl;

	cout << endl << "Now, we are going to search in our catalog the product with barcode 033012017-15." << endl;
	auto search = store.searchProduct("033012017-15");
	if (search != nullptr) cout << endl << "Found it!" << endl << *search << endl;

	cout << endl << "Next, let's delete this product! Remember its barcode: 033012017-15." << endl;
	store.deleteProduct("033012017-15");

	cout << endl << "Let's see if the product really was deleted: " << endl << endl;
	store.printProducts();

	cout << endl << "That's it, he ain't there anymore! But... what if we want to search for him again?" << endl;
	auto search_two = store.searchProduct("033012017-15");
	if (search_two != nullptr) cout << endl << "Oops, looks like I was wrong..." << endl << *search_two << endl;

	cout << endl << endl << "That's all, folks! Thanks for testing. =)" << endl;
}