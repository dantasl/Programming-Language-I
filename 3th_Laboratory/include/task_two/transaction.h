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
		Transaction( string _description, double _money, Style _style );
		~Transaction();	
		string getDescription();
		double getMoney();
		Style getStyle();
		void setDescription(string const _description);
		void setMoney(double const _money);
		void setStyle(Style const _style);
};

#endif