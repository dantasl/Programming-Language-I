/**
 * @file    show_primes.h
 * @brief   This file implements a functor isPrime() and the function show_prime().
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   05/11/2017
 * @date    05/11/2017
 */

#ifndef _SHOW_PRIMES_H_
#define _SHOW_PRIMES_H_

#include <vector>
#include <iostream>
#include <algorithm>

/**
 * @brief This functor checks if a number is prime or not.
 * @return true If is prime (can only be divided by himself and one)
 * @return false Otherwise
 */
class isPrime
{
	public:
		isPrime() {}
		bool operator()(int n) const 
		{
			for(int i = 2; i <= n / 2; ++i)
			{
			    if(n % i == 0)
			    	return false;
			}
			return true;
		}
};

/**
 * @brief This function fills a vector and uses find_if combined with a functor to check
 * if each element in [begin, last) is a prime number or not. In case find_if can't find
 * any prime number, the return will be an iterator pointing to numbers.end(). Since we do
 * not want to print any possible garbage, we must check for this possibility.
 * @param i_size Limit of numbers to be checked.
 */
void show_primes(unsigned int i_size)
{
	std::vector<int> numbers ( i_size );
	std::iota( numbers.begin(), numbers.end(), 1 );	
	auto curr_prime_number = std::begin(numbers);
	std::cout << "Numeros primos [1-" << i_size << "]: ";
	while( curr_prime_number < std::end(numbers) )
	{
		curr_prime_number = std::find_if (curr_prime_number, numbers.end(), isPrime());
		if( curr_prime_number < numbers.end() )
			std::cout << *curr_prime_number << " ";
		++curr_prime_number;
	}
	std::cout << std::endl;
}

#endif