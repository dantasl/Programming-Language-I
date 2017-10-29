/**
 * @file    string_manipulation.h
 * @brief   This file defines the prototypes for simple string manipulation and
 *			verifying if string is palindrome or not.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   24/10/2017
 * @date    25/10/2017
 */

#ifndef _STRING_MANIPULATION_H_
#define _STRING_MANIPULATION_H_

#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <cctype>
#include "task_one/stack.h"

using namespace std;

/**
 * @brief This function receives an string, iterates over each char checking if it is a blank space
 * or a punctuaction charactere. If so, calls erase on this element.
 * @param string& The sentence that will be treated.	   
 */
void remove_blank_space_punct_char(string&);

/**
 * @brief This function receives an string and iterates over each char looking for any special characters
 * that matches the values stored on vector special_ones. If found, replace with the value at the corresponding
 * index on vector to_replace.
 * @param string& The sentence that will be treated.
 */
void remove_special_characters(string&);

/**
 * @brief This function receives an string and stacks half of its chars. After this, iterates over the
 * remaining half and in any time it find a char matching with the one stored on stack's top, unpack.
 * A string will be called palindrome if ather this procedure the stack's size is 0.
 * @param string& The sentence in which the checking will be made.
 * @return true If palindrome.
 * @return false Otherwise. 
 */
bool check_palindrome(string&);

#endif