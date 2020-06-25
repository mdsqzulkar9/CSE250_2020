#include <iostream>
#include "stack.h"



int main(){
	ubcse1::stack<int> my_stack;

	std::cout << "After push operation : " << std::endl;
	my_stack.push(10);
	my_stack.print();
	std::cout << "After push operation : " << std::endl;
	my_stack.push(12);
	my_stack.print();
	std::cout << "After push operation : " << std::endl;
	my_stack.push(13);
	my_stack.print();
	std::cout << "top operation : " << my_stack.top() << std::endl;
	
	my_stack.pop();
	std::cout << "After pop operation : " << std::endl;
	my_stack.print();

	std::cout << "Stack is empty " << my_stack.is_empty() << std::endl;


 
}



