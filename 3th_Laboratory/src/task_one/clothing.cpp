#include <iomanip>
#include "task_one/clothing.h"

Clothing::Clothing() {}

Clothing::Clothing(string _code, string _description, double _price, string _brand, char* _gender, char* _size)
	: Product(_code, _description, _price)
	, m_brand(_brand)
	, m_gender(_gender)
	, m_size(_size)
	{ /* empty... */ }

Clothing::~Clothing() {}

string Clothing::getBrand() { return m_brand; }
char* Clothing::getGender() { return m_gender; }
char* Clothing::getSize() { return m_size; }
void Clothing::setBrand(string _brand) { m_brand = _brand; }
void Clothing::setGender(char _gender) { m_gender = _gender; }
void Clothing::setSize(short _size) { m_size = _size; }

ostream& Clothing::print(ostream &o) const
{
	o   << setfill (' ') << setw (10) << m_barcode << " | " 
		<< setfill ('.') << setw (20) << m_description << " | " 
		<< setfill (' ') << setw (5) << m_price << " | "
		<< setfill (' ') << setw (3) << m_alcoholContent;
	return o;
}