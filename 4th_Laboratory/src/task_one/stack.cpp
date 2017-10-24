#include <iostream>
#include "task_one/stack.h"

int main(){
	sc::stack<int> myStack(5);
	std::cout << "Testing myStack. Push a 5 to top:" << std::endl;
	myStack.push(&5);
	std::cout << "Prints new top: " << myStack.top() << std::endl;
}