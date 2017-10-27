#include "task_two/arithmetic_manipulation.h"

int main(int argc, char const *argv[])
{
	string s;
	cout << "Type me something: " << endl;
	getline(cin, s);
	vector<string> postfix = split_sentence_blank_spaces(s);
	compute_expression(postfix);
}