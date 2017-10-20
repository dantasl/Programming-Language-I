#ifndef _CLOTHING_H_
#define _CLOTHING_H_

#include "product.h"

class Clothing : public Product
{
	public:
		Clothing();
		Clothing(string _code, string _description, short _price, string _brand, char _gender, short _size);
		~Clothing();

	private:
		string m_brand;
		char m_gender;
		short m_size;

	public:
		string getBrand();
		char getGender();
		short getSize();
		void setBrand(string _brand);
		void setGender(char _gender);
		void setSize(short _size);

	private:
		ostream& print(ostream &o) const;
};

#endif