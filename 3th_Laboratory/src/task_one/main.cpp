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
	Store lista;

	lista.readFruits();
	lista.readBeverages();
	lista.readClothes();

	lista.printProducts();

	//cout << "Procurando produtos pelo codigo de barras: " << endl;
	//shared_ptr<Product> p = lista.searchProduct("001002003-45");
	//if (p != nullptr) cout << *p << endl;
}