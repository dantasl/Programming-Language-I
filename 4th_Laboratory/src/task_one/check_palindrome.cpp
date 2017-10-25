#include "task_one/string_manipulation.h"
#include "task_one/stack.h"

int main( void )
{
	string sentence;
	cout << "==========================================================" << endl;
	cout << "My man! Welcome to my Palindrome Checker. Fancy name, eh?" << endl;
	cout << "Provide me a sentence and you will see what I can do: " << endl;
	getline(cin, sentence);

	// Cleanse string from blank spaces and any punctuations chars.
	// ========================================================================================
	remove_blank_space_punct_char(sentence);
	// ========================================================================================

	// Replaces accentuated characters by their correspondents without accent.
	// ========================================================================================
	remove_special_characters(sentence);
	// ========================================================================================

	// Transforms the whole sentence to lower cased characters.
	// ========================================================================================
	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
	// ========================================================================================
}