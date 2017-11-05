/**
 * @file    closest_to_mean.cpp
 * @brief   This file tests the implementation of function closest2mean().
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   04/11/2017
 * @date    04/11/2017
 */

#include "task_one/closest_to_mean.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <string>

int main(int argc, char const *argv[])
{
	{
		// Assigning values to a vector of int and showing the closest to mean element.
		// ========================================================================================
		std::vector<int> v { 1, 2, 3, 30, 40, 50 };
	 	auto result = closest2mean(v.begin(), v.end());
	 	assert( *result == 30 );
	 	std::cout << *result << std::endl;
	 	// ========================================================================================
 	}

 	{
	 	// Assigning values to a vector of double and showing the closest to mean element.
		// ========================================================================================
		std::vector<double> v { 12.2, 2.3, 90.5, 300.5, 40.1, 70.1 };
	 	auto result = closest2mean(v.begin(), v.end());
	 	assert( *result == 90.5 );
	 	std::cout << *result << std::endl;
	 	// ========================================================================================
 	}

 	{
 		// Assigning values to a vector of float and showing the closest to mean element.
		// ========================================================================================
		std::vector<float> v { 15.5, 90.8, 90.8, 32.1, 490.7, 45.1 };
	 	auto result = closest2mean(v.begin(), v.end());
	 	assert( *result == (float) 90.8 );
	 	std::cout << *result << std::endl;
	 	// ========================================================================================
 	}

 	return 0;
}