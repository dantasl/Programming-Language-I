/**
 * @file    print_elements.h
 * @brief   This file implements the function print_elements().
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   04/11/2017
 * @date    04/11/2017
 */

#ifndef _PRINT_ELEMENTS_H_
#define _PRINT_ELEMENTS_H_

#include <iostream>

/**
 * @brief This function will print a label (any given string provided by the user e.g. "CSV Set")
 * and then will iterate over each element from a container, printing the element followed by
 * a separator (any given char provided by the user e.g ';' ).
 * @param collection Any container with a set of elements (e.g. vector or list)
 * @param label String to be printed as label. If provided none, default is string ""
 * @param separator Char to be printed between elements. If provided none, default is char ' '
 */
template < typename TContainer >
void print_elements (const TContainer& collection, const char* label="", const char separator=' ')
{
	std::cout << label;
	for( auto i(collection.begin()); i != collection.end(); ++i )
		std::cout << *i << separator;
	std::cout << std::endl;
}

#endif