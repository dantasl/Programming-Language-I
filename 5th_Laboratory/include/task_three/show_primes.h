#ifndef _SHOW_PRIMES_H_
#define _SHOW_PRIMES_H_

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

#endif