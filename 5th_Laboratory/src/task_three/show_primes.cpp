/**
 * @file    show_primes.cpp
 * @brief   Receives and treats user's params, converting them to a number and calling
 			show_primes() function.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   05/11/2017
 * @date    05/11/2017
 */

#include "task_three/show_primes.h"

#include <sstream>

int main(int argc, char const **argv)
{
	// Program must take exactly two params: executable name and the limit of the range.
	// ========================================================================================
	if (argc != 2)
	{
		std::cerr << "Invalid arguments passed." << std::endl;
		abort();
	}
	// ========================================================================================

	// Treating user's param and calling show_primes function.
	// ========================================================================================
	std::stringstream size;
	size << *(argv + 1);	
	unsigned int i_size;
	size >> i_size;
	show_primes(i_size);
	// ========================================================================================	
}