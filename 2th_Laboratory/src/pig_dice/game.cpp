/**
 * @file	game.cpp
 * @brief	Simulating the Pig Dice game.
 * 		    Rolling dices; creating players and verifying if they can still be in the game.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	30/08/2017
 * @date	30/08/2017
 */

#include "pig_dice/game.h"
#include "pig_dice/dice.h"
#include "pig_dice/player.h"

void game(int const number_of_players, int const breakpoint)
{
	std::vector<Player>::iterator i;
	std::vector<Player> player;
	player.resize(number_of_players);
	int result_dice;
	char quit;
	i = player.begin(); /*!< Initializes iterator at first position of vector player. */

	Dice d1;
	Dice d2;

	/**
	 * @brief Verifying breakpoint.
	 *        We're using a default value of 60 for the maximum score that a player should achieve.
	 *        If the user has provided another value, we should set the static attribute max_points.
	 *        Since it is static, changing it's value in any object from class Player will reflect
	 *        in all the others.
	 */
	if(breakpoint!=Player::max_points)
		player[0].setMax_Points(breakpoint);

	while(i < player.end())
	{
		if(i -> is_Active())
		{
			/**
			 * @brief Rolling the dices.
			 * 		  It is said on documentation that the player must roll two dices.
			 */
			d1.roll();
			d2.roll();
			result_dice = d1 + d2;

			std::cout << std::endl << "Player #" << i -> getId() << ", it is time to roll the dices! " << std::endl;
			std::cout << "Dice #1: " << d1.getValue() << std::endl << "Dice #2: " << d2.getValue() << std::endl;

			/**
			 * @brief Setting score.
			 *        After rolling the two dices, the summation between them must be
			 *        incremented with the previous score of the player.
			 */
			i -> setScore(result_dice);

			std::cout << "Your current score is: " << i -> getScore() << std::endl;

			/**
			 * @brief Did he win?
			 * 		  If Player's new score is exactly equal to the maximum score of the match, he won already!
			 */
			if(i -> getScore() == Player::max_points)
			{
				std::cout << "YOU WON! You were the first to hit exactly " << Player::max_points << " points!" << std::endl;
				break;
			}

			/**
			 * @brief Did he lose?
			 * 		  If Player's new score is greater than the maximum score of the match, he lost already!
			 */
			else if(i -> getScore() > Player::max_points)
			{
				std::cout << "Bad news! You crossed the breakpoint of " << Player::max_points << " and it is game over." << std::endl;
				quit = 'p';
			}

			/**
			 * @brief Does the player is still able to roll new dices?
			 *		  Well, if his new score is lesser than the maximum allowed, he sure can!
			 */
			else
			{
				std::cout << "Okay, you're still in the game. Would you like to continue or to pass?" << std::endl;
				std::cout << "(Type c for continue and p for pass): ";
				std::cin >> quit;

				while(quit != 'c' and quit != 'p')
				{
					std::cout << std::endl << "Invalid option! Type again: c to continue, p for pass: ";
			  	std::cin >> quit;
				}
			}
		}

		/**
		 * @brief Deciding which player will play next.
		 *        There are two ways for a player to enter this if statement.
		 *        The first: he freely chose to pass (quit) the match.
		 *        The second: his score is greater than the breakpoint.
		 *        In any of these cases, this player will no longer be in the match, so we elimate him.
		 *        The setActive() method will receive false.
		 */
		if(quit == 'p')
		{
			i -> setActive(false);
			++i;
		}
	}
	check_winner_print_scores(player);
}

void check_winner_print_scores(std::vector<Player>& player)
{
	std::vector<Player>::iterator j;
	j = player.begin();

	/**
	 * bp stands for breakpoint.
	 */
	int score_below_bp = 0;
	int score_above_bp = player[0].getScore();
	int score_below_at = 0;
	int score_above_at = 0;
	int winner_at = 0;

	std::cout << std::endl << "==================== GAMEOVER ====================" << std::endl;
	std::cout << std::endl << "Printing the match score: " << std::endl << std::endl;

	for(; j < player.end(); ++j)
	{
		std::cout << "Player #" << j->getId() << ": " << j->getScore() << " points." << std::endl;
		if( j->getScore() <= Player::max_points and j->getScore() > score_below_bp ) /*!< This covers condition (1) and (2), as specified in game.h */
		{
			score_below_bp = j->getScore();
			score_below_at = j->getId();
		}
		else if( j->getScore() > Player::max_points and j->getScore() < score_above_bp ) /*!< This covers condition (3), as specified in game.h */
		{
			score_above_bp = j->getScore();
			score_above_at = j->getId();
		}
	}

	if(score_below_bp == 0) /*!< If there's no player with score below breakpoint, then the index winner is at score_above_at. */
		winner_at = score_above_at;
	else
		winner_at = score_below_at;

	std::cout << std::endl << "AND THE WINNER IS: PLAYER #" << player[winner_at-1].getId();
	std::cout << " WITH " << player[winner_at-1].getScore() << " POINTS!" << std::endl;
	std::cout << std::endl << "==================================================" << std::endl;
}
