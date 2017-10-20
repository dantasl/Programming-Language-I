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

	lista.addProduct(make_shared<Fruit>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.addProduct(make_shared<Fruit>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.addProduct(make_shared<Fruit>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.addProduct(make_shared<Fruit>("001002005-11","Limao verde",2.30,"01/10/2017",25));

	lista.printProducts();
}