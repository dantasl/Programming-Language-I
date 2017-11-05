/**
 * @file    closest_to_mean.h
 * @brief   This file implements the function closest2mean.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   04/11/2017
 * @date    04/11/2017
 */

#ifndef _CLOSEST_TO_MEAN_H_
#define _CLOSEST_TO_MEAN_H_

#include <algorithm>

/**
 * @brief This function receives a range [first, last) and calculates its average
 * by calling std::accumulate (to know the summation between all elements) and
 * dividing the value by the number of elements (discovered with std::distance).
 * With the range's average discovered, now is time to iterate over each element
 * and discover which of them is closest to the mean. We do that by creating an
 * InputIterator variable called "closest" and making it point to the first element
 * of the range. "closest" will only be updated when the absolute value (std::abs)
 * of mean minus the current element of iteration be less than mean minus the last closest
 * to the mean element. In that case, "closest" will now point to that element's memory address.
 * ATTENTION: this function only works if the elements contents are numeric values
 * i.e. integer, floats or doubles.
 * @param first Iterator that points to the beginning of the range.
 * @param last Iterator that points to the last + 1 element of the range.
 * @return closest InputIterator holding the closest to mean element.
 */
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last)
{
	float mean = std::accumulate(first, last, 0.0) / ( std::distance(first, last) );
	auto closest = first;
	for( auto i(first); i != last; ++i )
	{
		if ( std::abs( mean - (*i) ) < std::abs( mean - *closest ) )
			closest = i;
	}
	return closest;	
}

#endif