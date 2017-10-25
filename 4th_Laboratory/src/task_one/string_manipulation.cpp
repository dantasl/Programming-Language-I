#include "task_one/string_manipulation.h"

void remove_blank_space_punct_char(string& s)
{
	for(auto i(0u); i < s.size();) //iterates over the string
	{
		if( isblank( s[i] ) or ispunct( s[i] ) ) //checks if the char is a blank space
			s.erase(i, 1); //erase 1 char at position i
		else
			++i; //only increments i if string is not a blank space
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