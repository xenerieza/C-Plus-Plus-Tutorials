#include <iostream>
#include <list>

/*'std::list' is used to represent doubly linked lists
* Some features of lists:
* 1- Doubly Linked List: It's implemented as a doubly linkled list. Each item has links that point to previous and next items.
* 2- Dynamic Size: The list size can be expanded or decreased dynamically, so items can be added and removed.
* 3- No Random Access: The list doesn't provide random access (indexing). Iterators are used to access elements and this keeps the performance of lists constant.
*/

/*Syntax of list:
* 
* std::list<data_type> list_Name; (S1).
* list_Name = {...};
* 
* std::list<data_type> list_Name{...}; (S2).
* 
* std::list<data_type> list_Name = {...}; (S3).
*/

/* 17 functions frequently used in lists:
* 1-  "list_Name.push_back();"  : Adds the specified item to the end of the list.
* 2-  "list_Name.push_front();" : Adds the specified item to the beginning of the list.
* 3-  "list_Name.pop_back();"   : Removes the item at the end of the list.
* 4-  "list_Name.pop_front();"  : Removes the item at the top of the list.
* 5-  "list_Name.front();"      : Returns the element at the beginning of the list.
* 6-  "list_Name.back();"       : Returns the item at the end of the list.
* 7-  "list_Name.begin();"      : Returns an iterator indicating the starting point of the list.
* 8-  "list_Name.end();"        : Returns an iterator indicating the end point of the list.
* 9-  "list_Name.size();"       : Returns the current number of items in the list.
* 10- "list_Name.empty();"      : Returns true if the list is empty, false otherwise.
* 11- "list_Name.clear();"      : Clears the list completely.
* 12- "list_Name.insert();"     : Adds a new item at the specified location.
* 13- "list_Name.erase();"		: Removes the item at the specified location.
* 14- "list_Name.sort();"       : Sorts the list.
* 15- "list_Name.reverse();"    : Reverses the list.
* 16- "list_Name.splice();"     : Merges two lists or moves items.
* 17- "list_Name.unique();"     : Removes items with consecutive identical values.
*/

int main()
{
	std::list<int> myList;

	// 1- push_back():
	myList.push_back(10);
	myList.push_back(15);					// myList: [10,15];

	// 2- push_front():
	myList.push_front(5);					// myList: [5,10,15];

	// 3- pop_back():
	myList.pop_back();						// myList: [5,10];

	// 4- pop_front():
	myList.pop_front();						// myList: [10];

	// 5 and 6 || front and back:	
	myList.push_back(15);
	myList.push_front(5);
	std::cout << "First element: " << myList.front() << " Last element: " << myList.back() << std::endl;;   // myList: [5,10,15];

	// 7 and 8 || begin and end: Returns 5,10 and 15

	for (auto i = myList.begin(); i != myList.end(); ++i)
	{
		std::cout << *i << " ";
	}

	std::cout << std::endl;

	// 9- size():
	std::cout << "Sizeof list: " << myList.size() << std::endl;

	// 11- clear():
	//myList.clear();							// myList: [];

	// 12- insert():
	myList.insert(myList.begin(), 3);			// myList: [3, 5, 10, 15];

	// 13- erase():
	myList.erase(myList.begin());				// myList: [5, 10, 15];

	myList.push_front(171);
	myList.push_back(2);

	// 14- sort():
	myList.sort();								// Before myList: [171, 5, 10 ,15, 2] || After myList: [2, 5, 10, 15, 171];

	// 15- reverse():
	myList.reverse();							// Before myList: [2, 5, 10, 15, 171]; || After myList: [171, 15, 10, 5, 2];
		
	// 16- splice():
	std::list<int> myList2 = { 35,45 };
	//myList.splice(myList.begin(), myList2);	// myList: [35, 45, 171, 15, 10, 5, 2];
	myList.splice(myList.end(), myList2);		// myList: [171, 15, 10, 5, 2, 35, 45];

	myList.push_back(45);						// myList: [171, 15, 10, 5, 2, 35, 45 ,45];

	// 17- unique():
	myList.unique();							// myList: [171, 15, 10, 5, 2, 35, 45];


	return 0;
}
