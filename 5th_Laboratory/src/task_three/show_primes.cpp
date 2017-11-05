#include "task_three/show_primes.h"

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

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

	// Treating user's param and creating a vector filled with numbers in param's range.
	// ========================================================================================
	std::stringstream size;
	size << *(argv + 1);	
	unsigned int i_size;
	size >> i_size;
	std::vector<int> numbers ( i_size );
	std::iota( numbers.begin(), numbers.end(), 1 );
	// ========================================================================================

	// Using find_if with functor isPrime to print all prime numbers in range.
	// ========================================================================================
	auto curr_prime_number = std::begin(numbers);
	std::cout << "Numeros primos [1-" << i_size << "]: ";
	while( curr_prime_number != std::end(numbers) )
	{
		curr_prime_number = std::find_if (curr_prime_number, numbers.end(), isPrime());
		std::cout << &curr_prime_number << " ";
	}
	std::cout << std::endl;
	// ========================================================================================	
}