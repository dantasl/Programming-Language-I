/**
 * @file	player.h
 * @brief	Definition of class Player.
 * 		    Specifies it's attributes and methods.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	30/08/2017
 * @date	30/08/2017
 */
#ifndef _PLAYER_H_
#define _PLAYER_H_
class Player
{
	private:
		int id; /*!< Player's unique identification. */
		int score; /*!< Keeps track of how many points the player scored with the dices. */
		bool is_active; /*!< Tells if the player is still in the game or not. */
	public:
		/**
		 * @brief Acts like a breakpoint and defines the maximum score tha a player should achieve.
		 */
		static int max_points;

		/**
		 * @brief Keeps track of how many Player instances there are.
		 */
		static int current_id;

		/**
	     * @brief Constructor method for class Player.
		 *        Set the player ID and initializes "score" as 0 and "is_active" as true.
	     */
		Player();

		/**
		 * @brief Getter for attribute "id".
		 * @return Attribute "id".
		 */
		int getId();

		/**
		 * @brief Getter for attribute "score".
		 * @return Attribute "score".
		 */
		int getScore();

		/**
		 * @brief Setter for attribute "score".
		 *		  Increments the previous "score" attribute with the parameter "new_score".
		 * @param new_score New attribute score, resulted from the sum between two dices.
		 * @return Attribute "score" with the new incremented value.
		 */
		int setScore(int const new_score);

		/**
		 * @brief Setter for static attribute "max_score"
		 * @param breakpoint The maximum score that a player should achieve.
		 */
		void setMax_Points(int const breakpoint);

		/**
		 * @brief Getter for attribute "is_active".
		 * @return Attribute "is_active", expecting true or false.
		 */
		bool is_Active();

		/**
         * @brief Setter for attribute "is_active".
         * @param state Receives a boolean variable and sets the "is_active" attribute with its value.
         */
		void setActive(bool const state);
};
#endif
