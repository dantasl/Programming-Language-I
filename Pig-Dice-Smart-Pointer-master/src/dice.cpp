/**
 * @file	dice.cpp
 * @brief	Implementing methods for class Dice.
 * 		    Implements getter, constructor and the "roll" method.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @author  MATHEUS RANGEL DE MELO
 * @since	13/09/2017
 * @date	13/09/2017
 */

#include "dice.h"

/**
 * @brief Initializing components for generating random numbers from 1 to 6.
 */
std::random_device Dice::rd{};
std::mt19937 Dice::gen(Dice::rd());
std::uniform_int_distribution<> Dice::dis(1,6);

Dice::Dice()
{
	value = std::round(dis(gen)); /*!< Generates a random number */
}

Dice::Dice(int const val) {
	value = val;
}

Dice Dice::operator+(Dice const &d)
{
	return Dice( this->value + d.value );
}

int Dice::operator+(int const &val)
{
	return (this->value+val);
}

Dice::operator int() { return value; }

int Dice::getValue(){ return value; }

int Dice::roll()
{
	value = std::round(dis(gen)); /*!< Generates a random number */
	return value;
}
