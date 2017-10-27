/**
 * @file    arithmetic_manipulation.h
 * @brief   This file defines the prototypes for simple string manipulation in
 *			order to extract operands, operators and perform the necessary actions
 *			between them. 
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   26/10/2017
 * @date    27/10/2017
 */

#ifndef _ARITHMETIC_MANIPULATION_H_
#define _ARITHMETIC_MANIPULATION_H_

using namespace std;

#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <iterator>
#include "task_one/stack.h"

/**
 * @brief This function verifies if a given string is an operator or not.
 * i.e. If its a number between 0 and 9.
 * @param string& Reference to string to be checked.
 * @return true If string's content is in range.
 * @return false Otherwise.
 */
bool is_operator ( const string& );

/**
 * @brief This function verifies if a given string is an operand or not.
 * i.e. If its equal to one of the following: '+', '-' '*', '/', '^', '%'.
 * @param string& Reference to string to be checked.
 * @return true If string's content is in range.
 * @return false Otherwise.
 */
bool is_operand ( const string& );

/**
 * @brief This function receives two numbers and an operand. Then, checks
 * what kind of action the operand asks for and performs it between the two
 * numbers.
 * @param long int First term of binary operation.
 * @param long int Second term of binary operation.
 * @param string& Operand to apply on the terms.
 * @return Result of operand applied to the two terms.
 */
long int execute_operator( long int, long int, const string& );

/**
 * @brief This function iterates over a vector containing all the terms of the
 * postfix equation. It checks if the term is an operand or an operator.
 * If operator, push the term to the stack. If operand, pops the stack twice,
 * calls execute_operator() and then stores the result back on the stack again.
 * At the end of iterations, return the stack's top, where the final result of
 * postfix equation is stored.
 * @param long vector<string>& Vector containing all the terms of the equation.
 * @return Final result of the postfix equation.
 */
long int compute_expression( vector<string>& );

/**
 * @brief This template function receives an address of ranges from string and then
 * generates a copy string resulting of this range.
 * @param begin Address where the range begins.
 * @param end Address where the range ends.
 * @return Copy string on range [begin, end].
 */
template< typename T >
string make_string (T begin, T end)
{
	string copy("");
	for( auto i(begin); i != end; ++i )
		copy += *i; 
	return copy;
}

/**
 * @brief This function iterates over a whole sentence and any time it "sees"
 * a blank space, splits the string and pushes to vector the splitted value.
 * @param string& Expression to be checked for blank spaces.
 * @return A vector where each split is at one different index.
 */
vector<string> split_sentence_blank_spaces( const string& );

#endif