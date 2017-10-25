/**
 * @file    string_manipulation.cpp
 * @brief   Implementing functions described in string_manipulation.h
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   24/10/2017
 * @date    25/10/2017
 */

#include "task_one/string_manipulation.h"

void remove_blank_space_punct_char(string& s)
{
	for(auto i(0u); i < s.size();)
	{
		//Checks if the char is a blank space or punctuation
		if( isblank( s[i] ) or ispunct( s[i] ) )
			s.erase(i, 1); //erase 1 char at position i
		else
			++i; //only increments i if string is not a blank space or punctuation
	}
}

void remove_special_characters(string& s)
{
	vector<string> special_ones = {
		"Ä","Å","Á","Â","À","Ã","ä","á","â","à","ã",
		"É","Ê","Ë","È","é","ê","ë","è",
		"Í","Î","Ï","Ì","í","î","ï","ì",
		"Ö","Ó","Ô","Ò","Õ","ö","ó","ô","ò","õ",
		"Ü","Ú","Û","ü","ú","û","ù",
		"Ç","ç"
	};

	vector<string> to_replace = {
		"A","A","A","A","A","A","a","a","a","a","a",
		"E","E","E","E","e","e","e","e",
		"I","I","I","I","i","i","i","i",
		"O","O","O","O","O","o","o","o","o","o",
		"U","U","U","u","u","u","u",
		"C","c"
	};

	for(auto i(0u); i < s.size(); ++i )
	{
		for(auto j(0u); j < to_replace.size(); ++j)
		{
			auto try_find = s.find(special_ones[j]);
			if(try_find != string::npos)
				s.replace( try_find, special_ones[j].size(), to_replace[j] );
		}	
	}
}

bool check_palindrome(string& s)
{
	sc::stack<char> myStack( s.size() );
	
	//stack first half of string
	auto mid = s.size() % 2 == 0 ? s.size() / 2 : (s.size() / 2) + 1;
	for( auto i(0u); i < mid; ++ i)
		myStack.push( s[i] );

	//iterates over the remaining half checking for matching values at top
	for( auto i = s.size() % 2 == 0 ? mid : mid - 1; i < s.size(); ++i)
	{
		if( s[i] == myStack.top() )
			myStack.pop();	
	}

	return myStack.size() == 0;
}