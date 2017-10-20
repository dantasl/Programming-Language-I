/**
 * @file	main.cpp
 * @brief	Main function of Pig Dice game.
 *			Establishes dialog with user, gets the number of players and the maximum score achievable by match.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	30/08/2017
 * @date	30/08/2017
 */

#include "pig_dice/dice.h"
#include "pig_dice/game.h"
#include <iostream>

int main()
{
	int number_of_players;
	int breakpoint = 60;
	char option;
	std::cout << std::endl << "Hello, there! Please, enter the number of players of Pig Dice: ";
	std::cin >> number_of_players;

	std::cout << std::endl << "We have a default breakpoint value of 60. Would you like to provide another?";
	std::cout << std::endl << "(y for yes or n for no): ";
	std::cin >> option;

	while(option != 'y' and option != 'n')
	{
		std::cout << std::endl << "Invalid option! Remember: y for yes and n for no. Type again!" << std::endl;
  	std::cin >> option;
	}

	if(option == 'y')
	{
		std::cout << std::endl << "Type the new breakpoint: ";
		std::cin >> breakpoint;
	}

	game(number_of_players, breakpoint);
}