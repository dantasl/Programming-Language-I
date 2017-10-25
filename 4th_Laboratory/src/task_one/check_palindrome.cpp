/**
 * @file    check_palindrome.cpp
 * @brief   Main function that shows brief dialog with user and receives
 * 			his input. Calls string manipulations functions and informs
 *			at the end if the string is palindrome or not.
 * @author  Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since   24/10/2017
 * @date    25/10/2017
 */

#include "task_one/string_manipulation.h"
#include "task_one/stack.h"

int main( void )
{
	string sentence;
	cout << endl << "==========================================================" << endl;
	cout << "My man! Welcome to my Palindrome Checker. Fancy name, eh?" << endl;
	cout << endl << "Provide me a sentence and you will see what I can do: " << endl;
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

	// Finally checks if the sentence is a palindrome of not.
	// ========================================================================================
	cout << endl << "An the provided sentence is "
		 << (check_palindrome(sentence) ? "a palindrome!" : "not a palindrome!") << endl;
	// ========================================================================================
	
	cout << "==========================================================" << endl << endl;	 
}