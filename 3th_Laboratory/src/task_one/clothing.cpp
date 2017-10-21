#include <iomanip>
#include "task_one/clothing.h"

Clothing::Clothing() {}

Clothing::Clothing(string _code, string _description, double _price, string _brand, string _gender, string _size)
	: Product(_code, _description, _price)
	, m_brand(_brand)
	, m_gender(_gender)
	, m_size(_size)
	{ /* empty... */ }

Clothing::~Clothing() {}

string Clothing::getBrand() { return m_brand; }
string Clothing::getGender() { return m_gender; }
string Clothing::getSize() { return m_size; }
void Clothing::setBrand(string _brand) { m_brand = _brand; }
void Clothing::setGender(string _gender) { m_gender = _gender; }
void Clothing::setSize(string _size) { m_size = _size; }

ostream& Clothing::print(ostream &o) const
{
	o   << setfill (' ') << setw (10) << m_barcode << " | " 
		<< setfill ('.') << setw (20) << m_description << " | " 
		<< setfill (' ') << setw (6) << m_price << " | "
		<< setfill ('.') << setw (20) << m_brand << " | "
		<< setfill (' ') << setw(1) << m_gender << " | "
		<< setfill (' ') << setw(1) << m_size;
	return o;
}