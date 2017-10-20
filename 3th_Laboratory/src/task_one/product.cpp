#include "task_one/product.h"

Product::Product() {}

Product::~Product() {}

Product::Product(string _code, string _description, short _price)
	: m_barcode(_code)
	, m_description(_description)
	, m_price(_price) 
	{ /* empty... */ }

string Product::getBarcode() { return m_barcode; }
	
string Product::getDescription() { return m_description; }

double Product::getPrice() { return m_price; }
	
void Product::setBarcode(string const _code) { m_barcode = _code; }

void Product::setDescription(string const _description) { m_description = _description; }

void Product::setPrice(double const _price) {	m_price = _price; }

ostream& operator<< (ostream &o, Product const &p) 
{
	return p.print(o);
}

double Product::operator+ (Product &p)
{
	return this->m_price + p.getPrice();
}

double Product::operator- (Product &p)
{
	return this->m_price - p.getPrice();
}

bool Product::operator== (Product &p)
{
	return this->m_barcode.compare( p.getBarcode() ) == 0;
}