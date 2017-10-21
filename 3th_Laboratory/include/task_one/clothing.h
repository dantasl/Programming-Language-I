#ifndef _CLOTHING_H_
#define _CLOTHING_H_

#include "product.h"

class Clothing : public Product
{
	public:
		Clothing();
		Clothing(string _code, string _description, double _price, string _brand, string _gender, string _size);
		~Clothing();

	private:
		string m_brand;
		string m_gender;
		string m_size;

	public:
		string getBrand();
		string getGender();
		string getSize();
		void setBrand(string _brand);
		void setGender(string _gender);
		void setSize(string _size);

	private:
		ostream& print(ostream &o) const;
};

#endif