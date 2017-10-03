/**
 * @file	dice.h
 * @brief	Definition of class Dice.
 * 		    Specifies it's attributes and methods.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	30/08/2017
 * @date	30/08/2017
 */
#ifndef _DICE_H_
#define _DICE_H_

#include <random>
#include <ctime>
class Dice
{
	private:
		int value; /*!< Value of dice after rolling it. */
	public:
		/**
	      * @brief Block that configures and generates the random number.
	      */
		static std::random_device rd;
		static std::mt19937 gen;
		static std::uniform_int_distribution<> dis;
		/**
	     * @brief Constructor method for class Dice.
		 *        Generates first random number and sets attribute "value" with the result.
	     */
		Dice();

		/**
		 * @brief Overloading constructor method.
		 * 		  Overloading the constructor method so a Dice can be initiated with a given value.
		 *        It will be useful when adding members of class Dice.
		 * @param val Initializes attribute "value" with this parameter.
		 */
		Dice(int const val);

		/**
		 * @brief Overloading the "+" operator.
		 *		  Now it will be possible to add two objects from class Dice.
		 */
		Dice operator+(Dice const &d);

		/**
		 * @brief Overloading the "+" operator again.
		 *        Now it will be possible to add a regular int value with an object from class Dice.
		 */
		int operator+(int const &val);

		/**
		 * @brief Overloading the "int" typecast.
		 *		  When typecasting an object from class Dice as "int", it will return the attribute "value".
		 */
		operator int();

		/**
	     * @brief Getter for attribute value.
	     * @return Attribute "value".
	     */
		int getValue();

		/**
	     * @brief Method that rolls the dice.
		 *        Generates a random number between 1 and 6 and changes attribute "value" with the result.
	     * @return Attribute "value".
	     */
		int roll();
};
#endif
