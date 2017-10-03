/**
 * @file	game.h
 * @brief	Defining the prototype for "game()" function.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @author  MATHEUS RANGEL DE MELO
 * @since	13/09/2017
 * @date	13/09/2017
 */
#ifndef _GAME_H_
#define _GAME_H_

#include <iostream>
#include <iterator>
#include <vector>
#include <memory>
#include "player.h"

	/**
	 * @brief Method that simulates the Pig Dice game.
	 *        Instantiate n players from class Player and call method "roll"
	 *        from class Dice while there's active players on the game.
	 * @param number_of_players Number of players to be instantiated from class "Player".
	 * @param breakpoint Maximum score that a player should achieve in a specific match.
	 */
	void game(int const number_of_players, int const breakpoint);

	/**
	 * @brief Printing score and telling which player won.
	 *        Now is time to run through the vector printing the score of every
	 *        player and we have three possibilities for telling which of them won.
	 *		  If at least one player has its score below the breakpoint and the others
	 *        have crossed the limit, that player is the winner. (1)
	 *        If none of the players crossed the limit, the one with the score closest
	 *        to the breakpoint is the winner. (2)
	 *        If all the players have crossed the limit, the one with the smallest score
	 *        is the winner. (3)
	 * @param player Reference to vector containing all the players.
	 */
	void check_winner_print_scores(std::shared_ptr<std::vector<Player>> player);
	/**
	 * @brief Check the pointers of "d1" and "d2"
	 * @param Dice weak_ptr.
	 */
	void checking(std::weak_ptr<std::vector<Player>> wp);
#endif
