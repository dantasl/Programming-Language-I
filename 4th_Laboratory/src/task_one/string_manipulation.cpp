#include "task_one/string_manipulation.h"

void remove_blank_space(string& s) // do not work for multiple spaces. fix it later.
{
	for(auto i(0u); i < s.size(); ++i) //iterates over the string
	{
		if( isblank( s[i] ) ) //checks if the char is a blank space
			s.erase(i, 1); //erase 1 char at position i
	}
}