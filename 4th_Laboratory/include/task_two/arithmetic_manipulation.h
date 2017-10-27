#ifndef _ARITHMETIC_MANIPULATION_H_
#define _ARITHMETIC_MANIPULATION_H_

using namespace std;

#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <iterator>
#include "task_one/stack.h"

bool is_operator ( const string& );
bool is_operand ( const string& );
long int execute_operator( long int, long int, const string& );
long int compute_expression( vector<string>& );

template< typename T >
string make_string (T begin, T end)
{
	string copy("");
	for( auto i(begin); i != end; ++i )
		copy += *i; 
	return copy;
}

vector<string> split_sentence_blank_spaces( const string& );

#endif