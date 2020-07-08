/*
 * vector.h
 *
 *  Created on: 
 *      Author: 
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace ubcse{

	template<typename T>
	class vector{
	private:

		/* 
		 *	*********************************************************
		 *	Data fields 
		 *
		 */

		/* Initial capacity of the array */
		static const int INITIAL_CAPACITY;

		/* The current capacity of the array */
		int current_capacity;

		/** The current number of items in the array */
		int num_items;

		/* The array to contain data .
		 * we acquire it in the heap memory using new command
		 */
		T* data_array;	


	public: 
		/*
		 *	*********************************************************
		 *	Constructors
		 *
		 */


		/*
		 *
		 *	Default constructor:
		 * 	It constructs an empty vector with default initial capacity.
         * 	Set num_items to zero 
         * 	Set current_capacity to INITIAL_CAPACITY
         *	Allocate data_array of size "INITIAL_CAPACITY" in the Heap memory.	
         *
		 */
		vector<T>(){ 
			num_items = 0, 
			current_capacity = INITIAL_CAPACITY, 
			data_array = new T[INITIAL_CAPACITY];
		}


		/*	
		 *	
		 *	TO DO: Step 2.1  (INSTRUCTIONS)
		 *
		 *	Implement Fill constructor Here. 
		 *	This constructor has two arguments - 
		 *		The first one is 'n' and it means number of items. 
		 *		Second argument is a reference of type T named 'value'.
		 *	You have to fill a vector with that 'n' number of 'value'.
		 *	
		 *	For example: vector<char> char_vector(5,'b'), will create a vector
		 *	['b','b','b','b','b'].
         *	Your current capacity must be at least INITIAL_CAPACITY. 
         * 		Hint: explore and use reserve() function. 
         *	
		 */
		vector<T>(const int n, const T &value){
			// TO DO : put your code here (for fill constructor)
			
			///*
			num_items = n;
			current_capacity = INITIAL_CAPACITY;
			data_array = new T[INITIAL_CAPACITY];

			//if (n >= INITIAL_CAPACITY)
			//	reserve(2*current_capacity);
			reserve(n);

			for(int i = 0; i < num_items; ++i)
				data_array[i] = value;
			//*/

		} 


		/*
		 *
		 *	TO DO: Step9.1 (INSTRUCTIONS)
		 *
		 *	Implement Deep Copy constructor
		 *	It performs deep copy, and copy everything from the input vector.
		 *
         *	you can call the function as ubcse::vector<int> v1( v2 );
         *  @param other - The vector to be copied.
         *
		 */
		vector<T>(const vector<T>& other){
			
			///*
			current_capacity = other.storage_capacity();
			num_items = other.size();

			data_array = new T[current_capacity];

			//T* other_data = other.head();
			for (int i = 0 ; i < num_items ; i++ )
				//data_array[i] = other.data_array[i];
				data_array[i] = other.at(i);
			//*/

		}





		/*
		 *	
		 *	TO DO: Step10.1 (INSTRUCTIONS)
		 *
		 *	Implement Range constructor
		 *	Constructs a container with as many elements as the range [start, end],
		 *	with each element constructed from
		 *	its corresponding element in that range, in the same order.
         *	
         * 	For example: assume one vector v1 = [1,2,3,4,5,6]
         *  We want to create a vector v2, that is starts from v1's index 1 
         *	and ends at v1's index 4.
         *	The resulting vector v2 = [2,3,4,5].
         *	You can call the function as ubcse::vector<int> v2(v1[1], v2[4]);
         *	
         *	Your current capacity must be at least INITIAL_CAPACITY. 
         * 		Hint: explore and use reserve() function. 
         * 	
         *	@param - start - Reference to the vector element, start of the range copy.
         *	@param - end - Reference to the vector element, end of the range copy.
         * 
		 */
		vector<T>(T& start, T& end){

			///*
			//TO DO : put your code here (for range constructor)
			T type_size;
			T* s_ptr = &start;
			T* e_ptr = &end;
			
			// compute the number of items within start and end range.
			// Hints: pointer arithmetic will be more efficient than running a for loop.
			num_items = (e_ptr-s_ptr) + 1;

			// Compute the current_capacity
			current_capacity = INITIAL_CAPACITY;

			// initialize data_arrayinto the Heap memory
			data_array = new T[current_capacity];

			reserve(num_items);

			// Copy eveything from range (start to end) to the data_array
			for(int i = 0 ; i < num_items ; i++ )
				data_array[i] = *(s_ptr + i);
			
			//*/

		} // end of range constructor



		

		/*
		 *
		 *	TO DO: Step11.1   (INSTRUCTIONS)
		 *
		 *	Implement Destructor
		 *
		 */
		~vector(){
			// put your code here (for destructor)
		}




		/*
		 *******************************************************
		 * Accessor functions
		 */

 
		/* returns num_items */
		int size() const {
			return num_items;
		}

		/*
		 *	
		 *	TO DO : Step1.1   (INSTRUCTIONS)
		 *
		 *	Implement the storage_capacity accessor function.
		 * 	It returns the current capacity of the vector. 
		 *
		 */	
		int storage_capacity() const {
			
			//To Do : implement this accessor function
			return current_capacity;
		}

		/*
		 *	TO DO : Step1.2  (INSTRUCTIONS)
		 *
		 *	Implement the head accessor function.
		 * 	It returns the head of the data_array. 
		 */
		T* head() const{

			//To do: implement this accessor function
			return data_array;
		}
		



		/*
		 * ************************************************
		 * Vector functions
		 * Implement these functions outside the class
		 */


		/* print the data array*/
	   	void print();

	   	// reserve space for vector.
	    void reserve(int newSize);

	    /* Get the value stored at index*/
		T& at(const int index) const;

		// Return if the vector is empty or not.
	    bool is_empty() const;

		// Insert copy of value at index.
	    void insert(const int& index,const T& value);

	    // Insert copy of value at end of vector.
	   	void push_back(const T& value);

	   	// Erase element at index.
	    void erase(const int index);

	    // concatanate two vectors
	    void concat(const vector<T>& other);


	    // concatanation with '+' operator overloading
	    vector<T>& operator+(const vector<T>& other);

	    // This function reduces current capacity to num_items.
	    void shrink_to_fit();


	}; //end of template class vector



	/* Default initial capacity of the vector*/
	template <typename T>
	const int vector<T>::INITIAL_CAPACITY = 10;




	/*  
	 *	This function prints the contents of the data_array
	 *	 
	 */
	template <typename T>
	void vector<T>::print(){

		std::cout << "Data: ";
		if (num_items == 0){
			std::cout << "Vector is empty." << std::endl;
			
			std::cout << "Number of items: " << num_items << std::endl;
			std::cout << "Current capacity: " << current_capacity << std::endl;
			return;
		}

		for(int i = 0 ; i < num_items - 1; i++){
			std::cout << data_array[i] << ", ";
		}
		std::cout << data_array[num_items-1] << std::endl;
		

		std::cout << "Number of items: " << num_items << std::endl;
		std::cout << "Current capacity: " << current_capacity << std::endl;

		return;
	}



	/*  
	 *
	 *	Reserve storage for the vector. 
	 * 	Only reserves extra storage with requested capacity 
	 * 	is larger than current capacity.
	 *  
	 *	@param requested_capacity The size of the reservation.
	 * 	
	 * 	If the requested capacity is larger than current capacity, but
	 * 	smallar than (2*current_capacity),
	 * 		Then reserve (2*current_capacity)
	 * 	If the requested capacity is larger than (2*current capacity)
	 *		Then reserve (requested_capacity)
	 *  
	 *	 
	 */
	template <typename T>
	void vector<T>::reserve(int requested_capacity) {
	   
		// Check if requested capacity is larger than current capacity.
	    if(requested_capacity > current_capacity) {

	    	// if requested capacity is more than twice the current capacity
	    	if (requested_capacity > 2* current_capacity)
	    		current_capacity = requested_capacity; //new capacity is the requested capacity
	    	else  // current capacity < requested capacity < 2* current capacity  
	    		current_capacity = current_capacity * 2;  // double the capacity


	    	// Create a new array of requested_size named "temp_data" in the Heap.
	    	T* temp_data = new T[current_capacity];

	    	// Copy everything from the data_array to the "temp".
	    	for(int i = 0; i < num_items; i++)
	    		temp_data[i] = data_array[i];

	    	// free old data pointer from the data_array
	    	delete[] data_array;

	    	// Now point data_array to temp_data
	    	data_array = temp_data;
	    }
	    
	}




	/*
	 *	
	 *	TO DO : Step3.1 (INSTRUCTIONS)
	 *
	 *	Implementation of at function, returns the value at the given index. 
	 *
	 *	@param index - Vector index that need to be accessed. 
	 *
	 *	At first this function checks whether the index is valid or not.
	 *	A vaild index in non-negetive (0,1, ...) and less than the current_capacity of the vector.
	 *	Then the function returns the value at the given index. 
	 *	
	 */
	template <typename T>
	T& vector<T>::at(const int index) const{

		///*
		//Check whether the index is valid or not.
		//If the index is invalid, print an error message and exit(1);
		if (index < 0 || index >= current_capacity){
			std::cout << "Array index out of bound" << std::endl;
			exit(1);
		}

		// For a valid index, return the data stored at that index location.
		return data_array[index];
		
		//*/

	} // end of function at
	

	/* 
	 *	
	 *	TO DO: Step4.1 (INSTRUCTIONS)
	 *
	 * 	Implementation of is_empty function 
	 *
	 *	This function checks whether the data_array is empty or not. 
	 *	If the array is empty it returns "true", otherwise, it returns "false".
	 *
	 */
	template <typename T>
	bool vector<T>::is_empty() const{
		return (num_items == 0); 
	}	



	/* 
	 *	
	 *	Insert an element into the function. 
	 *	@param index - The index where the data need to be inserted.
	 *	@param value - The value that need to be inserted.
	 *	 
	 */
	template <typename T>
	void vector<T>::insert(const int& index,const T& value){

		// validate index
		if (index < 0 || index > num_items)
			exit(1);


		// Ensure that there is space for teh new item
		if(num_items == current_capacity)
			reserve(2*current_capacity); // expand the array

		// Move data from index to (num_item - 1) down.
		for(int i = num_items ; i > index ; i--)
			data_array[i] = data_array[i-1];

		// Insert the new item
		data_array[index] = value;

		// increase number of items
		num_items++; 
	
	} // end of insert function


	/* 
	 *	TO DO: Step5.1
	 *
	 * 	Implementation of push_back function 
	 *	This function appends the input value after the last value of the array
	 * 	For example, an integer vector named vec1 
	 *	with current capacity 10, looks like:  [1,2,3,5, , , , , , ]. 
	 * 	The function vec1.push_back(30) will make the vector : [1,2,3,5,30, , , , , ]. 
	 *	
	 */
	template <typename T>
	void vector<T>::push_back(const T& value){
		insert(num_items, value);
		return;
	
	} // end of push back function


	/* 
	 *	Delete an element at a given index from the vector. 
	 *	 
	 */
	template <typename T>
	void vector<T>::erase(const int index){

		//Validate index
		if(index < 0 || index >= num_items)
      		exit(1);

      	//Move items below the removed one up
      	for (int i = index+1; i < num_items ; i++)
      		data_array[i-1] = data_array[i];

      	// Decrease the number of items
      	num_items--;
	
    } // end of erase function



    /* 
	 *	TO DO: Step6.1 (INSTRUCTIONS)
	 *
	 *	Implement concat function
	 * 	For example, two vectors -  v1 = [1,2,3,4,...] with storage capacity, 10.
	 * 							    v2 = [5,6,6,7,...] with storage capacity, 20.
	 * 	After concatanation operation, v1.concat(v2), 
	 * 	the vector, v1 should look like: v1 = [1,2,3,4,5,6,7,8,...] and 
	 * 	the new capacity will be combined capacity of both vectors, (10+20) = 30. 
	 *
	 */
    template <typename T>
    void vector<T>::concat(const vector<T>& other){

    	///*
    	int total_num_items = num_items + other.size();

    	current_capacity = current_capacity + other.storage_capacity();

    	T* temp_data = new T[current_capacity];

    	for(int i = 0 ; i < num_items; i++)
    		temp_data[i] = data_array[i];

    	T* second = other.head();
    	int base = num_items;
    	for(int j = 0; j < other.size(); j++)
    		temp_data[base+j] = second[j];

    	delete[] data_array;

    	data_array = temp_data;

    	num_items = total_num_items;
		
		//*/

    }


    /* 
	 *	TO DO: Step7.1 (INSTRUCTIONS)
	 *
	 *	Implement concat function
	 * 	For example, two vectors -  v1 = [1,2,3,4,...] with storage capacity, 10.
	 * 							    v2 = [5,6,6,7,...] with storage capacity, 20.
	 * 	After concatanation operation, v1 = v1 + v2, 
	 * 	the vector, v1 should look like: v1 = [1,2,3,4,5,6,7,8,...] and 
	 * 	the new capacity will be combined capacity of both vectors, (10+20) = 30.
	 *
	 */


    template<typename T>
	vector<T>& vector<T>::operator+(const vector<T>& other){
		concat(other);
		return *this;
	}


	/* 
	 *	TO DO: Step8.1  (INSTRUCTIONS)
	 *
	 *	Implement shrink_to_fit function.
	 * 	This function reduces the current_capacity to num_items.
	 * 	It updates the heap memory size and current_capacity variable. 
	 * 	For example, given a vector -  v1 = [1,2,3,4,...] with current capacity, 10,
	 *  after v1.shrink_to_fit(); operation, 
	 * 	the vector, v1 should look like: v1 = [1,2,3,4] with current capacity, 4. 
	 * 	Also manage cases, when the vector is empty, set the current capacity to INITIAL_CAPACITY.
	 *
	 */
	template<typename T>
	void vector<T>::shrink_to_fit(){

		///*
		if(num_items == 0){
			current_capacity = INITIAL_CAPACITY;
		}

		T* temp_data = new T[num_items];
		for(int i = 0; i < num_items; i++){
			temp_data[i] = data_array[i];
		}

		delete[] data_array;
		data_array = temp_data;
		current_capacity = num_items;
		//*/
	}








} // end of namespace ubcse 



#endif 