#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_

typedef enum style { credit, debit } Style;

using namespace std;

#include <string>
#include <vector>

class Transaction
{
	private:
		string description;
		double money;
		Style style;

	public:
		Transaction();
		~Transaction();	
};

#endif