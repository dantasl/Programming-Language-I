/**
 * @file	player.cpp
 * @brief	Implementing methods for class Player.
 * 		    Implements getters, setters and constructor.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	30/08/2017
 * @date	30/08/2017
 */

#include "pig_dice/player.h"

Player::Player()
{
	id = current_id++;
	score = 0;
	is_active = true;
}

/**
 * @brief Initializing ID generator.
 *        The static variable current_id will help us keep account of how many players were created.
 *        It will be useful when trying to generate sequential IDs.
 */
int Player::current_id = 1;

/**
 * @brief Defining default maximum score.
 *        Here we set the maximum score as 60, but user can later on provide it's own new value.
 */
int Player::max_points = 60;

bool Player::is_Active(){ return is_active; }

int Player::getId(){ return id; }

int Player::getScore(){	return score; }

int Player::setScore(int new_score)
{
	score += new_score;
	return score;
}

void Player::setMax_Points(int const breakpoint){ max_points = breakpoint; }

void Player::setActive(bool const state) { is_active = state; }
