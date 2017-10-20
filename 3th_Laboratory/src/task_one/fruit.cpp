#include <iomanip>
#include "task_one/fruit.h"

Fruit::Fruit() {}

Fruit::Fruit(string _code, string _description, double _price, string _date, int _shelfLife)
	: Product(_code, _description, _price)
	, m_date(_date)
	, m_shelfLife(_shelfLife)
	{ /* empty... */ }

Fruit::~Fruit() {}

string Fruit::getDate() { return m_date; }

int Fruit::getShelfLife() { return m_shelfLife; }

void Fruit::setDate(string const _date) { m_date = _date; }

void Fruit::setShelfLife(int const _shelfLife) { m_shelfLife = _shelfLife; }
 
ostream& Fruit::print(ostream &o) const
{
	o   << setfill (' ') << setw (10) << m_barcode << " | " 
		<< setfill ('.') << setw (20) << m_description << " | " 
		<< setfill (' ') << setw (5) << m_price << " | "
		<< setfill (' ') << setw (10) << m_date << " | " 
		<< setfill (' ') << setw (3) << m_shelfLife;
	return o;
}