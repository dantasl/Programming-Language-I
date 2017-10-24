#include "task_one/string_manipulation.h"
#include "task_one/stack.h"

int main(int argc, char const *argv[])
{
	string a = "Meu Deus, BiáááÀno he";
	remove_blank_space(a);
	cout << a << endl;
	transform(a.begin(), a.end(), a.begin(), ::tolower);//first you must replace accents
	cout << a << endl;	
	return 0;
}