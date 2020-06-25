#include <iostream>
#include "vector.h"


namespace ubcse1{
	
	template <typename T>
	class stack{
	private:
		ubcse::vector<T> container;


	public:
		/*	Constructor */
		stack();

		/*	Push item into the stack */
		void push(const T& item);


		/*	Remove item from the top */
		void pop();


		/*	Return reference to an object at the 
		 * 	top of the stack  wihout romoving it */
		T& top();

		/* Return whether the stack is empty or not */
		bool is_empty() const;

		/*	Return the size of the stack   */
		int size() const;

		void print();

	}; //	End of class stack


	// Constructor implementation
	template <typename T>
	stack<T>::stack(){ 

	}



	template <typename T>
	void stack<T>::push(const T& item){
		container.push_back(item);
	}

	template <typename T>
	int stack<T>::size() const{
		return container.size();
	}

	template <typename T>
	void stack<T>::pop(){
		int head = size();
		container.erase(head-1);
	}

	template <typename T>
	T& stack<T>::top(){
		int head = size();
		return container.at(head-1);
	}

	template <typename T>
	void stack<T>::print(){
		container.print();
	}

	template <typename T>
	bool stack<T>::is_empty() const{
		return container.size() == 0;
	}

	

} //	End of namespace ubcse

