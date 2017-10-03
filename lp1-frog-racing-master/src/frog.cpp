/**
 * @file	frog.cpp
 * @brief	Definition of methods from class Frog.
 * 		    Specifies getters and setters for Frog's attributes; defines constructor
 *        and method jump.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	19/08/2017
 * @date	19/08/2017
 */

#include "frog.h"
#include <iostream>

int Frog::getRace_Distance()
{
  return race_distance;
}

int Frog::getMax_Distance_Jump()
{
  return max_distance_jump;
}

int Frog::getIdentifier()
{
  return identifier;
}

int Frog::getTravelled_Distance()
{
  return travelled_distance;
}

int Frog::getJumps()
{
  return jumps;
}

void Frog::jump()
{
  int jump = std::round(dis(gen)); /*!< Generates a true random number */
  /**
   * @brief Verifies if the frog can make that jump.
   *        Check if with the new jump the frog will break the race distance limit.
   *        If so, decrements the jump until its new value do not break the limit.
   */
  while((jump + travelled_distance) > race_distance)
    jump--;

  Frog::setJumps(); /*!< Increments the amount of jumps. */
  Frog::setTravelled_Distance(jump); /*!< Increments the distance travelled by the frog. */
}

void Frog::setMax_Distance_Jump(int max_jump)
{
  max_distance_jump = max_jump;
}

void Frog::setIdentifier(int id)
{
  identifier = id;
}

void Frog::setTravelled_Distance(int distance)
{
  travelled_distance += distance;
}

void Frog::setJumps()
{
  ++jumps;
}

Frog::Frog(int id, int max_jump):rd(), gen(rd()), dis(1, max_jump)
{
  jumps = 0;
  travelled_distance = 0;
  identifier = id;
  max_distance_jump = max_jump;
}
