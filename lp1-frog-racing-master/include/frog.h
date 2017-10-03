/**
 * @file	frog.h
 * @brief	Definition of class Frog.
 * 		    Specifies it's attributes and methods.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	19/08/2017
 * @date	19/08/2017
 */

#ifndef _FROG_H_
#define _FROG_H_

#include <random>
#include <ctime>

class Frog
{
  private:
    int identifier; /*!< Unique frog's identifier. Initialized in constructor. */
    int travelled_distance; /*!< Since the frog hasn't started to run yet, his travelled distance must be initialized as 0. */
    int jumps; /*!< Since the frog hasn't started to jump yet, his amount of jumps must be initialized as 0. */
    int max_distance_jump; /*!< Sets the maximum distance that a frog can jump. Initialized in constructor. */
    /**
      * @brief Block that configures and generates the random number.
      */
    std::random_device rd;
    std::default_random_engine gen;
    std::uniform_int_distribution<> dis;
  public:
    /**
     * @brief Method constructor from class Frog.
     * @param identifer Frog's unique identifer.
     * @param max_distance_jump Maximum distance that a frog can jump.
     */
    Frog(int identifier, int max_distance_jump);

    /**
     * @brief Static attribute that defines the total distance for a race.
     */
    static int race_distance;

    /**
     * @brief Getter for attribute identifier.
     * @return Attribute identifier.
     */
    int getIdentifier();

    /**
     * @brief Getter for attribute travelled_distance.
     * @return Attribute travelled_distance.
     */
    int getTravelled_Distance();

    /**
     * @brief Getter for attribute jumps.
     * @return Attribute jumps.
     */
    int getJumps();

    /**
     * @brief Getter for attribute max_distance_jump.
     * @return Attribute max_distance_jump.
     */
    int getMax_Distance_Jump();

    /**
     * @brief Getter for static attribute race_distance.
     * @return Attribute race_distance.
     */
    static int getRace_Distance();

    /**
     * @brief Method to randomly calculate the distance for the new jump.
     *        Generates a random number from 1 to the max_distance_jump, verifies
     *        if the frog can make that jump and then calls for method setJumps()
     *        and setTravelled_Distance().
     */
    void jump();

    /**
     * @brief Setter for attribute identifier.
     */
    void setIdentifier(int identifier);

    /**
     * @brief Setter for attribute travelled_distance.
     *        Receives the distance from the frog's new jump and increments with
     *        the previous travelled_distance.
     */
    void setTravelled_Distance(int travelled_distance);

    /**
     * @brief Setter for attribute max_distance_jump.
     */
    void setMax_Distance_Jump(int max_distance_jump);

    /**
     * @brief Setter for attribute jumps.
     *        Increments +1 in the previous amount of jumps.
     */
    void setJumps();
};

#endif
