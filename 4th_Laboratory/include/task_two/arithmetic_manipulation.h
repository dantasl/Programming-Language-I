#ifndef _ARITHMETIC_MANIPULATION_H_
#define _ARITHMETIC_MANIPULATION_H_

using namespace std;

#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <iterator>
#include "task_one/stack.h"

string postfix_to_infix ( string );
bool is_scope ( char );
void print_error_message ( string, int );

#endif