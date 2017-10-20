#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include "product.h"

class Beverage : public Product
{
	public:
		Beverage();
		Beverage(string _code, string _description, double _price, int _alcoholContent);
		~Beverage();

	private:
		int m_alcoholContent;

	public:
		int getAlcoholContent();
		void setAlcoholContent(int const _alcoholContent);

	private:
		ostream& print(ostream &o) const;
};

#endif