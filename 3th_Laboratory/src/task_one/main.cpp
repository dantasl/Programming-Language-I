#include <iostream>
#include <vector>
#include <memory>
#include "task_one/product.h"
#include "task_one/fruit.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Product>> lista;
	
	lista.push_back(make_shared<Fruit>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruit>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruit>("001002005-11","Limao verde",2.30,"01/10/2017",25));

	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;	
	}

	return 0;
}