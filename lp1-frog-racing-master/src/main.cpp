/**
 * @file	main.cpp
 * @brief	Main function.
 * 		    Receives from the user the race distance and the max distance that a frog can jump.
 *        Then, call race function.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	19/08/2017
 * @date	19/08/2017
 */

#include <iostream>
#include "race.h"
int main(){
  int max_distance_jump = 2;
  int distance = 90;
  char option;
  
  std::cout << std::endl << "Welcome to the Frog Racing!";
  std::cout << std::endl << "The frogs need to know how long is the race.";
  std::cout << std::endl << "We have a default value of 90, but would you like to provide another?";
  std::cout << std::endl << "Type y for yes and n for no." << std::endl;
  std::cin >> option;

  while(option != 'y' and option != 'n')
  {
  	std::cout << std::endl << "Invalid option! Remember: y for yes and n for no. Type again!" << std::endl;
  	std::cin >> option;
  }

  if(option == 'y')
  {
  	std::cout << std::endl << "Type the race distance: ";
  	std::cin >> distance;
  }

  std::cout << std::endl << "Now, the frogs need to know how long they can jump.";
  std::cout << std::endl << "We also have a default value of 2, but would you like to provide another?";
  std::cout << std::endl << "Type y for yes and n for no." << std::endl;
  std::cin >> option;

  while(option != 'y' and option != 'n')
  {
  	std::cout << std::endl << "Invalid option! Remember: y for yes and n for no. Type again!" << std::endl;
  	std::cin >> option;
  }

  if(option == 'y')
  {
  	std::cout << std::endl << "Type the maximum distance that a frog can jump: ";
  	std::cin >> max_distance_jump;
  }

  race(distance, max_distance_jump);
  return 0;
}