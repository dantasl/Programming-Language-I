#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>
using namespace std;

class Product
{
	public:		
		Product();
		Product(string _code, string _description, short _price);
		virtual ~Product();

	protected:		
		string m_barcode;
		string m_description;
		double m_price;

	public:
		string getBarcode();
		string getDescription();
		double getPrice();		
		void setBarcode(string _code);
		void setDescription(string _description);
		void setPrice(double _price);		
		friend ostream& operator<< (ostream &o, Product const &t);
		double operator+ (Product &p);
		double operator- (Product &p);
		bool operator== (Product &p);
		  
	private:
		virtual ostream& print(ostream&) const = 0;
};
 
#endif