/**
 * @file    arithmetic_manipulation.cpp
 * @brief   Implementing functions described in arithmetic_manipulation.h
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   26/10/2017
 * @date    27/10/2017
 */

#include "task_two/arithmetic_manipulation.h"

bool is_operator ( const string& s )
{
	for( auto i(s.begin()); i != s.end(); ++i )
	{
		if ( not ( *i >= '0' and *i <= '9' ) )
			return false;
	}
	return true;	
}

bool is_operand ( const string& s )
{
	return string("+-*/%^").find( *(s.begin()) ) != string::npos;
}

long int execute_operator( long int term1, long int term2, const string& operation )
{
    long int result;
    switch( operation[0] )
    {
        case '+': result = term1 + term2; break;
        case '-': result = term1 - term2; break;
        case '*': result = term1 * term2; break;
        case '^': result = pow(term1, term2); break;
        case '/': if ( term2 == 0 ) throw std::runtime_error("Cannot make division by 0.");
                  result = term1 / term2;
                  break;
        case '%': if ( term2 == 0 ) throw std::runtime_error("Cannot make division by 0.");
                  result = term1 % term2;
                  break;
    }
    return result;
}

long int compute_expression( vector<string>& postfix )
{
	sc::stack<long int> myStack( postfix.size() );
	for( auto i(postfix.begin()); i != postfix.end(); ++i )
	{
		if ( is_operator( *i ) )
		{
			myStack.push( stol(*i) );
		}
		else if ( is_operand( *i ) )
		{
			auto term2 = myStack.top(); myStack.pop();
			auto term1 = myStack.top(); myStack.pop();
			myStack.push( execute_operator(term1, term2, *i) );
		}	
	}
	return myStack.top();	
}

string postfix_to_infix( const vector<string>& postfix )
{
	sc::stack<string> myStack( postfix.size() );
	for( auto i(postfix.begin()); i != postfix.end(); ++i )
	{
		if( is_operator( *i ) )
		{
			myStack.push( *i );
		}
		else if ( is_operand( *i ) )
		{
			string infix("");
			auto term2 = myStack.top(); myStack.pop();
			auto term1 = myStack.top(); myStack.pop();
			if ( i + 1 == postfix.end() )
				myStack.push( infix += term1 + " " + *i + " " + term2 );
			else
				myStack.push( infix += "(" + term1 + " " + *i + " " + term2 + ")" );		
		}	
	}
	return myStack.top();	
}

vector<string> split_sentence_blank_spaces( const string &to_split )
{
	auto begin( to_split.begin() );
	auto end( to_split.begin() );
	vector<string> splitted;
	for(; end != to_split.end(); ++end)
	{
		if( isblank( *end ) )
		{
			splitted.push_back( make_string(begin, end) );
			begin = end + 1;			
		}	
	}
	splitted.push_back( make_string(begin, end) ); //last value wont be pushed unless you do this
	return splitted;
}