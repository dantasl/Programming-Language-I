#include "product.h"

Product::Product() {}

Product::~Product() {}

Product::Product(string _code, string _description, short _price)
	: m_cod_barras(_code)
	, m_description(_description)
	, m_price(_price) 
	{ /* empty... */ }

string Product::getCodBarras() { return m_cod_barras; }
	
string Product::getDescricao() { return m_description; }

double Product::getPreco() { return m_price; }
	
void Product::setCodBarras(string const _code) { m_cod_barras = _code; }

void Product::setDescricao(string const _description) { m_description = _description; }

void Product::setPreco(double const _price) {	m_price = _price; }

std::ostream& operator<< (std::ostream &o, Product const &p) 
{
	return p.print(o);
}