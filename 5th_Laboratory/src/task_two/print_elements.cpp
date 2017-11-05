/**
 * @file    print_elements.cpp
 * @brief   This file tests the implementation of function print_elements().
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   04/11/2017
 * @date    04/11/2017
 */

#include "task_two/print_elements.h"

#include <set>
using std::set;

int main(int argc, char const *argv[])
{
	set<int> numeros;
	numeros.insert(3);
	numeros.insert(1);
	numeros.insert(4);
	numeros.insert(1);
	numeros.insert(2);
	numeros.insert(5);
	print_elements(numeros, "Set: ");
	print_elements(numeros, "CSV Set: ", ';');
	print_elements(numeros, "Non-sense set: ", '@');
	return 0;
}