#include <iostream>
#include <vector>

/*
* In the C++ programming language, Vector is a data structure and is used as a dynamic array.
* It's main features are as follows:
* 1- Dynamic Size: It has a structure where you can dynamically adjust the data size as you wish after creating it.
* 2- Data Type: Vector can be used with any data type you want. For an example, it can store integer, float, double, string or objects of a special class.
* 3- Automatic Memory Management: Vector automatically adjusts memory management itself. This point is different from normal Arrays and prevents possible problems.
*/

/*It basically has 15 frequently used functions.
* First, let's look at how it is defined. Syntax of the Vector:
* std::vector<type> vector_Name;
* 
* 1-  "vector_Name.push_back();": It is used to add elements to the end of the vector.
* 2-  "vector_Name.pop_back();": It is used to remove the element at the end of the vector.
* 3-  "vector_Name.front();": Accesses the first element of the vector.
* 4-  "vector_Name.back();": Acceses the last element of the vector.
* 5-  "vector_Name.begin();": Returns the iterator of the first element of the vector. This function is used in places like for loops.
* 6-  "vector_Name.end();": Returns the iterator of the position after the last element. This function is used in places like for loops.
* 7-  "vector_Name.size();": Returns the number of elements in the vector.
* 8-  "vector_Name.empty();": Checks whether the vector is empty.
* 9-  "vector_Name.clear();": Clears and deletes all elements within the vector.
* 10- "vector_Name.'operator'[x];": Accesses or modifies the element at a specific index.
* 11- "vector_Name.at();": Provides secure access to the element at a specific index (does bounds checking).
* 12- "vector_Name.resize(x);": Resizes the vector by the specified x value.
* 13- "vector_Name.insert(loc, value);": It is used to add the specified value to the specified place in the vector.
* 14- "vector_Name.erase(loc);": Deletes the element at the specified index in the vector.
* 15- "vector_Name.data();": Converts the vector to a C-array.
*/

int main()
{
	std::vector<int> myVector;
	
	//Adds the values ​​15,20,25 and 30 to the end of the vector.
	myVector.push_back(15);		// Add 15
	myVector.push_back(20);		// Add 20
	myVector.push_back(25);		// Add 25
	myVector.push_back(30);		// Add 30

	//It deletes elements 30 and 25 at the end of the vector from this vector.
	myVector.pop_back();		// Removes 30
	myVector.pop_back();		// Removes 25

	int first = myVector.front();
	std::cout << "First element of the Vector: " << first << std::endl;		// Result 15
	int last = myVector.back();
	std::cout << "Last element of the Vector: " << last << std::endl;		// Result 20

	//Let's assign the element at index 0 to the fAt variable.
	int fAt = myVector.at(0);
	std::cout << "First element of the Vector: " << fAt << std::endl;		// Result 15
	int fAt2 = myVector[1];
	std::cout << "Second element of the Vector: " << fAt2 << std::endl;		// Result 20

	// Clear the vector. 
	myVector.clear();		// Result: Empty Vector -> Delete 15 and 20.

	/* --------------------------------------------------------------------------------------------------------- */

	std::vector<int> myVector2 = {1,2,3,4,5};

	std::cout << "MyVector2 size: " << myVector2.size() << std::endl;
	// Resize the vector. Now myVector2 has 7 variable. The last two variables are 0.
	myVector2.resize(7);
	std::cout << "After resize operation and new size: " << myVector2.size() << std::endl;
	myVector2[5] = 6;	//6th elements in the vector --> 6
	myVector2[6] = 7;	//7th elements in the vector --> 7
	
	myVector2.insert(myVector2.begin() + 7, 8);		// Vector size 8  -> myVector.at(8) --> 8
	myVector2.insert(myVector2.begin() + 8, 9);		// Vector size 9  -> myVector.at(9) --> 9
	std::cout << "New size of myVector2: " << myVector2.size() << std::endl;

	for (int num : myVector2)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	myVector2.erase(myVector2.begin() + 8);	// Deletes last element -- Result: 1,2,3,4,5,6,7,8
	std::cout << "New myVector2: " << std::endl;
	for (int num : myVector2)
	{
		std::cout << num << " ";
	}

	std::cout << std::endl;

	// Let's delete the values in a certain range.
	size_t start_index = 3;	// index 3 equals to 4th elements in the vector.
	size_t count = 5;		// Numbers of elements to delete.

	myVector2.erase(myVector2.begin() + start_index, myVector2.begin() + start_index + count);

	std::cout << "After range delete new vector: ";
	for (int num : myVector2)
	{
		std::cout << num << " ";
	}

	//'arr' points to C-array containing the data of the vector.
	int* arr = myVector2.data();

}