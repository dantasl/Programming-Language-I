#ifndef _CLOSEST_TO_MEAN_H_
#define _CLOSEST_TO_MEAN_H_

#include <algorithm>

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