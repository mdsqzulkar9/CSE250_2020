#include <iostream>
#include "vector.h"


int main(){

	/* IMPLEMENTATION INSTRUCTIONS */
	/* If you compile the skeleton code it will not generate any error. */

	/*	The codes are organized in BLOCKs here in the main. 
	 *	Each block is self sufficient and can be commented out if necessary.
	 *	
     */

	///*
	// BLOCK-0
	std::cout << "BLOCK-0: results - " << std::endl;
	ubcse::vector<int> vec0;
	std::cout << "An object of vector template class is created using default constructor." << std::endl;
	std::cout << "vec0 content " << std::endl ;
	vec0.print();
	std::cout << "-----------------------------------------------" << std::endl;
	// BLOCK-0 ends
	//*/

	/* OUTPUT of BLOCK-0: 
	
	BLOCK-0: results - 
	An object of vector template class is created using default constructor.
	vec0 content 
	Data: Vector is empty.
	Number of items: 0
	Current capacity: 10
	-----------------------------------------------

	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK-0
	 */



	/* 
	 * 	IMPLEMENTATION INSTRUCTIONS: 
	 *	Implement the vector.h step by step, First Step - 1, then Step - 2, and so on ...
	 *	After implementing each step, uncomment the corresponding "Code Block" in this main function. 
	 *	And test whether your implementation is correct or not. 
	 * 	Then you can comment the block again and proceed to next Step.
	 */



	/*	
	 *  INSTRUCTIONS: 
	 *  Step - 1:
	 *	Implement the accessor functions in the vector.h. 
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step1.1"
	 *	and "TO DO: Step1.2" 
	 *	in the vector.h file.
	 *
	 *
	 *	After implementing "TO DO: Step1.1" and "TO DO: Step1.2", 
	 * 	uncomment the following code block named BLOCK-1. 
	 */

	/*
	//	BLOCK-1
	// 	uncomment this block after implementing (To Do: Step1.1, TO DO: Step2.1)
	std::cout << "BLOCK-1: results - " << std::endl;
	ubcse::vector<int> vec1;
	std::cout << "Number of items in vec2: " << vec1.size() << std::endl;
	std::cout << "Current capacity of in vec1: " << vec1.storage_capacity() << std::endl;
	std::cout << "Head of vec1: " << vec1.head() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	//BLOCK-1 ends
	*/
	
	/*
	 *	OUTPUT of BLOCK-1 :

	BLOCK-1: results - 
	Number of items in vec2: 0
	Current capacity of in vec1: 10
	Head of vec1: 0x7fa5d9402780  (Some address)
	-----------------------------------------------
	
	 */	


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK-1
	 */


	/*
	 *  INSTRUCTIONS:  
	 *	Step - 2:
	 *	Implement the fill constructor in vector.h (To Do: Step2.1)  
	 *	This constructor has two arguments first one is 'n' and it means
	 *	number of items. Second argument is a reference of type T named
	 *	'value'. You have to fill a vector with that 'n' number of 'value'.
	 *	for example: vector<char> char_vector(5,'b') will create a vector
	 *	['b','b','b','b','b']
	 *   
	 *   After implementing (To do : Step 2.1) uncomment the following code block, BLOCK-2.1 
	 *   Then check - whether your fill constructor works or not. 
	 */

	/*
	//	BLOCK - 2.1 : 
	// 	uncomment this block after implementing (To Do: Step2.1)
	//	Number of items in the fill constructor. 
	std::cout << "BLOCK-2.1: results - " << std::endl;
	int num2_1 = 5;
	char val2_1 = 'b';
	ubcse::vector<char> vec_fill2_1( num2_1, val2_1);
	std::cout << "vec_fill2_1 content: " << std::endl;
	vec_fill2_1.print();
	std::cout << "-----------------------------------------------" << std::endl;
	//	End of BLOCK-2.1
	*/
	
	/* the Output of BLOCK -2.1: 
	
	BLOCK-2.1: results - 
	vec_fill2_1 content: 
	Data: b, b, b, b, b
	Number of items: 5
	Current capacity: 10
	-----------------------------------------------
	
	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK-2.1
	 */


	/*
	//BLOCK-2.2
	//uncomment this block after implementing (To Do: Step2.1) and if you are successfull with BLOCK-2.1
	std::cout << "BLOCK-2.2: results - " << std::endl;
	int num2_2 = 11;
	char val2_2 = 'e';
	ubcse::vector<char> vec_fill2_2( num2_2, val2_2);
	std::cout << "vec_fill2_2 content: "<< std::endl;
	vec_fill2_2.print();
	std::cout << "-----------------------------------------------" << std::endl;
	// End of BLOCK-2.1
	*/


	/* OUTPUT of the code, so far: 
	
	BLOCK-2.2: results - 
	vec_fill2_2 content: 
	Data: e, e, e, e, e, e, e, e, e, e, e
	Number of items: 11
	Current capacity: 20
	-----------------------------------------------

	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK-2.1
	 */


	/*
	 *  INSTRUCTIONS:  
	 *	Step - 3:
	 *	Implement the "at" member function of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step3.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step3.1",
	 * 	uncomment the following code block named BLOCK-3.1 
	 */



	/*
	//	BLOCK - 3.1 : 
	// 	uncomment this block after implementing (To Do: Step3.1)
	std::cout << "BLOCK-3: results - " << std::endl;
	int num3_1 = 13;
	char val3_1 = 'd';
	ubcse::vector<char> vec_fill3_1( num3_1, val3_1);
	std::cout << "vec_fill3_1 content: " << std::endl;
	vec_fill3_1.print();
	std::cout << "Char at index 3 of vec_fill3_1: " << vec_fill3_1.at(3) << std::endl; 
	std::cout << "-----------------------------------------------" << std::endl;
	// End of BLOCK-3.1
	*/


	/* OUTPUT of the code, so far:

	BLOCK-3: results - 
	vec_fill3_1 content: 
	Data: d, d, d, d, d, d, d, d, d, d, d, d, d
	Number of items: 13
	Current capacity: 20
	Char at index 3 of vec_fill3_1: d
	-----------------------------------------------

	*/


	/*
	//	BLOCK - 3.2 : 
	// 	uncomment this block after implementing (To Do: Step3.1) and after successfully completed BLOCK-3.1
	std::cout << "BLOCK-3.2: results - " << std::endl;
	int num3_2 = 14;
	char val3_2 = 'f';
	ubcse::vector<char> vec_fill3_2( num3_2, val3_2);
	std::cout << "vec_fill3_2 content: " << std::endl;
	vec_fill3_2.print();
	std::cout << "Char at index 21 of vec_fill3_2 : " << vec_fill3_2.at(21) << std::endl; 
	std::cout << "-----------------------------------------------" << std::endl;
	// End of BLOCK-3.2
	*/


	/* OUTPUT of BLOCK-3.2:

	BLOCK-3.2: results - 
	vec_fill3_2 content: 
	Data: f, f, f, f, f, f, f, f, f, f, f, f, f, f
	Number of items: 14
	Current capacity: 20
	Char at index 21 of vec_fill3_2 : Array index out of bound
	-----------------------------------------------
	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 3.2
	 */



	/*
	 *  INSTRUCTIONS:  
	 *	Step - 4:
	 *	Implement the "is_empty" member function of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step4.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step4.1",
	 * 	uncomment the following code block named BLOCK-4 
	 */

	/*
	//	BLOCK - 4 : 
	// 	uncomment this block after implementing (To Do: Step4.1) 
	std::cout << "BLOCK-4: results - " << std::endl;
	int num4 = 12;
	char val4 = 'g';
	ubcse::vector<char> vec_fill4( num4, val4);
	ubcse::vector<char> vec_fill4_1;
	std::cout << "vec_fill4 vector is empty: " << (vec_fill4.is_empty() ? "True" : "False") << std::endl; 
	std::cout << "vec_fill4_1 vector is empty: " << (vec_fill4_1.is_empty() ? "True" : "False") << std::endl; 
	std::cout << "-----------------------------------------------" << std::endl;
	// End of BLOCK-4
	*/


	/* OUTPUT of the code, so far

	BLOCK-4: results - 
	vec_fill4 vector is empty: False
	vec_fill4_1 vector is empty: True
	-----------------------------------------------
	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 4
	 */



	/*
	 *  INSTRUCTIONS:  
	 *	Step - 5:
	 *	Implement the "push_back" member function of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step5.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step5.1",
	 * 	uncomment the following code block named BLOCK-5 
	 */


	/*
	//	BLOCK - 5 : 
	// 	uncomment this block after implementing (To Do: Step5.1)
	std::cout << "BLOCK-5: results - " << std::endl;
	int num5 = 5;
	char val5 = 'h';
	ubcse::vector<char> vec_fill5( num5, val5);
	vec_fill5.push_back('z');
	vec_fill5.push_back('z');
	vec_fill5.push_back('z');
	vec_fill5.push_back('z');
	vec_fill5.push_back('z');
	vec_fill5.push_back('z');
	vec_fill5.print(); 
	// End of BLOCK-5
	*/


	/* OUTPUT of the code, so far

	BLOCK-5: results - 
	Data: h, h, h, h, h, z, z, z, z, z, z
	Number of items: 11
	Current capacity: 20

	*/

	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 5
	 */


	/*
	 *  INSTRUCTIONS:  
	 *	Step - 6:
	 *	Implement the "concat" member function of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step6.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step6.1",
	 * 	uncomment the following code block named BLOCK-6 
	 */



	/*
	//	BLOCK - 6 : 
	// 	uncomment this block after implementing (To Do: Step6.1) 
	std::cout << "BLOCK-6: results - " << std::endl;
	int num6_1 = 10;
	char val6_1 = 'h';
	ubcse::vector<char> vec_fill6_1( num6_1, val6_1);

	int num6_2 = 13;
	char val6_2 = 'i';
	ubcse::vector<char> vec_fill6_2( num6_2, val6_2);


	vec_fill6_1.concat(vec_fill6_2);
	vec_fill6_1.print();
	// End of BLOCK-6
	*/


	/* OUTPUT of the code, so far

	BLOCK-6: results - 
	Data: h, h, h, h, h, h, h, h, h, h, i, i, i, i, i, i, i, i, i, i, i, i, i
	Number of items: 23
	Current capacity: 30

	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 6
	 */



	/*
	 *  INSTRUCTIONS:  
	 *	Step - 7:
	 *	Implement '+' operator overloading of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step7.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step7.1",
	 * 	uncomment the following code block named BLOCK-7 
	 */


	/*
	//	BLOCK - 7 : 
	// 	uncomment this block after implementing (To Do: Step7.1)
	std::cout << "BLOCK-7: results - " << std::endl;
	int num7_1 = 11;
	char val7_1 = 'j';
	ubcse::vector<char> vec_fill7_1( num7_1, val7_1);
	std::cout << "vec_fill7_1 content: "<< std::endl;
	vec_fill7_1.print();
	
	int num7_2 = 15;
	char val7_2 = 'k';
	ubcse::vector<char> vec_fill7_2( num7_2, val7_2);
	std::cout << "vec_fill7_2 content: "<< std::endl;
	vec_fill7_2.print();

	vec_fill7_1 = vec_fill7_1 + vec_fill7_2;
	std::cout << "After concatanation, vec_fill7_1 content: "<< std::endl;
	vec_fill7_1.print();
	// End of BLOCK-7
	*/


	/*  OUTPUT of the BLOCK-7 code:

	BLOCK-7: results - 
	vec_fill7_1 content: 
	Data: j, j, j, j, j, j, j, j, j, j, j
	Number of items: 11
	Current capacity: 20
	vec_fill7_2 content: 
	Data: k, k, k, k, k, k, k, k, k, k, k, k, k, k, k
	Number of items: 15
	Current capacity: 20
	After concatanation, vec_fill7_1 content: 
	Data: j, j, j, j, j, j, j, j, j, j, j, k, k, k, k, k, k, k, k, k, k, k, k, k, k, k
	Number of items: 26
	Current capacity: 40

	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 7
	 */



	/*
	 *  INSTRUCTIONS:  
	 *	Step - 8:
	 *	Implement shrink_to_fit function of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step8.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step8.1",
	 * 	uncomment the following code block named BLOCK-8 
	 */

	/*
	//	BLOCK - 8 : 
	// 	uncomment this block after implementing (To Do: Step8.1)
	std::cout << "BLOCK-8: results - " << std::endl;
	int num8 = 11;
	char val8 = 'm';
	ubcse::vector<char> vec_fill8( num8, val8);
	std::cout << "vec_fill8 content: "<< std::endl;
	vec_fill8.print();

	std::cout << "After shrink_to_fit operation, vec_fill8 content: "<< std::endl;
	vec_fill8.shrink_to_fit();
	vec_fill8.print();
	//	End of BLOCK-8
	*/


	/*  OUTPUT of the BLOCK-8 code:

	BLOCK-8: results - 
	vec_fill8 content: 
	Data: m, m, m, m, m, m, m, m, m, m, m
	Number of items: 11
	Current capacity: 20
	After shrink_to_fit operation, vec_fill8 content: 
	Data: m, m, m, m, m, m, m, m, m, m, m
	Number of items: 11
	Current capacity: 11
	
	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 8
	 */




	/*
	 *  INSTRUCTIONS:  
	 *	Step - 9:
	 *	Implement copy constructor of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step9.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step9.1",
	 * 	uncomment the following code block named BLOCK-9 
	 */


	///*
	//	BLOCK - 9 : 
	// 	uncomment this block after implementing (To Do: Step9.1)
	std::cout << "BLOCK-9: results - " << std::endl;
	ubcse::vector<int> vec_9;
	for(int i = 0 ; i < 22 ; i++)
		vec_9.push_back(i+20);
	ubcse::vector<int> vec_9_copy(vec_9);
	
	std::cout << "vec_9_copy content: " << std::endl;
	vec_9_copy.print();
	//	End of BLOCK-9
	//*/

	/* 

	BLOCK-9: results - 
	vec_9_copy content: 
	Data: 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41
	Number of items: 22
	Current capacity: 40

	*/


	/*
	 *	INSTRUCTIONS:  
	 * 	Comment out everything in BLOCK 9
	 */




	/*
	 *  INSTRUCTIONS:  
	 *	Step - 10:
	 *	Implement range constructor of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step10.1" 
	 *	in the vector.h file.
     *
	 *
	 *	After implementing "TO DO: Step10.1",
	 * 	uncomment the following code block named BLOCK-10 
	 */



	/*
	//	BLOCK - 10 : 
	// 	uncomment this block after implementing (To Do: Step10.1)
	std::cout << "BLOCK-10: results - " << std::endl;
	ubcse::vector<int> vec_10;
	for(int i = 0 ; i < 24 ; i++)
		vec_10.push_back(i+50);
	std::cout << "vec_10_range content: "<<std::endl;
	vec_10.print();
	ubcse::vector<int> vec_10_range(vec_10.at(3), vec_10.at(15));
	std::cout << "vec_10_range content: " <<std::endl;
	vec_10_range.print();
	//	End of BLOCK-10
	*/


	/* OUTPUT of the code so far:

	BLOCK-10: results - 
	vec_10_range content: 
	Data: 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73
	Number of items: 24
	Current capacity: 40
	vec_10_range content: 
	Data: 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65
	Number of items: 13
	Current capacity: 20


	*/



	/*
	 *  INSTRUCTIONS:  
	 *	Step - 11:
	 *	Implement Destructor of the template class vector.
	 *	You can find the instructions to implement accessor functions with tags - "TO DO: Step11.1" 
	 *	in the vector.h file.
     *
	 */

















































}