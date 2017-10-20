#ifndef _FRUIT_H_
#define _FRUIT_H_

#include "product.h"

class Fruit : public Product
{
	public:
		Fruit();
		Fruit(string _code, string _description, double _price, string _date, int _shelfLife);
		~Fruit();

	private:
		string m_date;
		int m_shelfLife;

	public:
		string getDate();
		int getShelfLife();
		void setDate(string const _data);
		void setShelfLife(int const _validade);

	private:
		ostream& print(ostream &o) const;
};

#endif