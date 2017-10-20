#include <iomanip>
#include "task_one/beverage.h"

Beverage::Beverage() {}

Beverage::Beverage(string _code, string _description, double _price, int _alcoholContent)
	: Product(_code, _description, _price)
	, m_alcoholContent(_alcoholContent)
	{ /* empty... */ }

Beverage::~Beverage() {}

int Beverage::getAlcoholContent() { return m_alcoholContent; }
void Beverage::setAlcoholContent(int const _alcoholContent)
{ 
	m_alcoholContent = _alcoholContent;
}
 
ostream& Beverage::print(ostream &o) const
{
	o   << setfill (' ') << setw (10) << m_barcode << " | " 
		<< setfill ('.') << setw (20) << m_description << " | " 
		<< setfill (' ') << setw (5) << m_price << " | "
		<< setfill (' ') << setw (3) << m_alcoholContent;
	return o;
}