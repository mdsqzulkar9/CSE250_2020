//Array.h

#include <iostream> 
using namespace std; 

template <typename T> 
class Array { 
private: 
	T* ptr; 
	int size; 

public: 
	Array();
	Array(T arr[], int s); 
	void print(); 
}; 



// Arrary.cpp
template <typename T>  
Array<T>::Array() 
{ 
	
} 


//construtor
template <typename T>   
Array<T>::Array(T arr[], int s) 
{ 
	ptr = new T[s]; 
	size = s; 
	for (int i = 0; i < size; i++) 
		ptr[i] = arr[i]; 
} 

// print :
template <typename T> 
void Array<T>::print() 
{ 
	for (int i = 0; i < size; i++) 
		cout << " " << *(ptr + i); 
	cout << endl; 
} 

//main.cpp

int main() 
{ 
	int arr[5] = { 1, 2, 3, 4, 5 }; 
	Array<int> a(arr, 5);
	float farr[] = {1.2,1.3};
	Array<float> b(farr,2);

	a.print();
	b.print(); 
	return 0; 
} 