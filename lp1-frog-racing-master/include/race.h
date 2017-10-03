/**
 * @file	race.h
 * @brief	Defining the prototype for race function.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	19/08/2017
 * @date	19/08/2017
 */

#ifndef _RACE_H_
#define _RACE_H_
  #include <iostream>
  /**
   * @brief Method that simulates the frog racing.
   *        Instantiate three objects from class Frog and call method jump
   *        until one of the frogs reach the total race distance.
   * @param distance Race total distance.
   * @param max_distance_jump Maximum distance that a frog can jump.
   */
  void race(int distance, int max_distance_jump);
#endif
