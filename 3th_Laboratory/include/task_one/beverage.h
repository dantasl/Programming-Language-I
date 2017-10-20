#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include "product.h"

class Beverage : public Product
{
	public:
		Beverage();
		Beverage(string _code, string _description, short _price, short _alcoholContent);
		~Beverage();

	private:
		short m_alcoholContent;

	public:
		short getAlcoholContent();
		void setAlcoholContent(short const _alcoholContent);

	private:
		ostream& print(ostream &o) const;
};

#endif