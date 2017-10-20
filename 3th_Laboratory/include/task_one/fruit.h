#ifndef _FRUIT_H_
#define _FRUIT_H_

#include "product.h"

class Fruit : public Product
{
	public:
		Fruit();
		Fruit(string _code, string _description, short _price, string _date, short _shelfLife);
		~Fruit();

	private:
		string m_date;
		short m_shelfLife;

	public:
		string getDate();
		short getShelfLife();
		void setDate(string const _data);
		void setShelfLife(short const _validade);

	private:
		ostream& print(ostream &o) const;
};

#endif