#include "task_two/arithmetic_manipulation.h"

bool is_scope ( char c )
{
	return c == '(' or c == ')';
}

bool is_operand ( char c )
{
	return string("+-*/%^").find(c) != string::npos;
}

bool is_operator ( char c )
{
	return c >= '0' and c <= '9';
}

long int char2integer ( int begin, int end, string s )
{
	string copy("");
	for( auto i(begin); i <= end; ++i )
		copy += s[i];
	return stol(copy);
}

long int execute_operator( long int term1, long int term2, char operation )
{
    long int result;
    switch( operation )
    {
        case '+': result = term1 + term2; break;
        case '-': result = term1 - term2; break;
        case '*': result = term1 * term2; break;
        case '^': result = pow(term1, term2); break;
        case '/': if ( term2 == 0 ) throw std::runtime_error("Dude, don try to divide stuff by 0.");
                  result = term1 / term2;
                  break;
        case '%': if ( term2 == 0 ) throw std::runtime_error("Dude, don try to divide stuff by 0.");
                  result = term1 % term2;
                  break;
    }
    cout << "Da result: " << result << endl;
    return result;
}


//consideramos que um espaço está dividindo um operador de outro
string postfix_to_infix ( string postfix )
{
	sc::stack<long int> myStack( postfix.size() );
	auto begin(0u);
	auto end(0u);

	myStack.push(0);

	while ( end != postfix.size() )
	{
		if( isblank( postfix[end] ) )
		{
			if( is_operator( postfix[ end - 1 ] ) and is_operator( postfix[ begin ] ) )
			{
				myStack.push( char2integer(begin, end, postfix) );
				begin = end + 1;
			}
			else if( is_operand( postfix[ end - 1 ] ) )	
			{
				auto term2 = myStack.top(); myStack.pop();
				auto term1 = myStack.top(); myStack.pop();
				myStack.push( execute_operator( term1, term2, postfix[ end - 1 ] ) );
				begin = end + 1;
			}	
		}
		++end;
	}

	cout << myStack.top() << endl;

	return postfix;
}

int main()
{
	string s;
	cout << "Type me something: " << endl;
	getline(cin, s);
	postfix_to_infix(s);
	return 0;
}