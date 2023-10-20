#include <iostream>
#include <map>
#include <list>

/*
* A C++ map is a way to store a key-value pair. 
* This structure is specifically used to store an ordered set of keys and quickly access the values ​​associated with those keys.
* There is a two way to use this structure.
* To use the data sequentially, the following structure should be used:
* #include <map>
* Otherwise:
* #include <unordered_map>
*/

/*
* 15 frequently used functions are as follows:
* 1-  insert(key_value): Adding the key – value pair,
* 2-  erase(key):        Deleting a pair with a specific key,
* 3-  find(key):         Searching for a specific key and returning the corresponding value,
* 4-  begin():			 Returns the position of the first pair,
* 5-  end():			 Returns the position of the last pair,
* 6-  rbegin():			 Returns the position of the last pair in the opposite direction,
* 7-  rend():			 Returns the position before the first pair in the opposite direction,
* 8-  size():			 Returning the number of pairs in the map,
* 9-  empty():			 Checking whether the map is empty or not,
* 10- clear():			 Deleting all duplicates and clearing the map,
* 11- lower_bound(key):  Returning a specific key or the position of the first key that is larger,
* 12- upper_bound(key):  Returning the position of the first key that is greater than a given key,
* 13- equal_range(key):  Returns the range of a key,
* 14- count(key):		 Counting how many times a particular key is repeated,
* 15- operator[]:		 Accessing and creating the value associated with the key.
*/


int main()
{

	/* Different syntax1
	std::map<int, char> mp = {
		{10, 'A'},
		{15, 'B'},
		{20, 'C'}
	};
	*/

	/* Different syntax2
	std::map<std::string, std::list<std::string>> mp;
	std::list<std::string> Colours{ "Black","Red" };
	mp.insert(std::pair<std::string, std::list<std::string>>("Colour", Colours);
	*/

	std::map<int, std::string> mp;

	// 1- insert(key-value):
	mp.insert(std::make_pair(1, "First Value"));	// Creating a data with a Key of 1 and a Value of "First Value"
	mp.insert(std::make_pair(2, "Second Value"));	// Creating a data with a Key of 2 and a Value of "Second Value"
	mp.insert(std::make_pair(3, "Third Value"));    // Creating a data with a Key of 3 and a Value of "Third Value"

	// 2- erase(key):
	mp.erase(2);									// Deletes data with key 2.

	mp.insert(std::make_pair(2, "Second Value"));

	// 3- find(key):
	auto itr = mp.find(1);
	if (itr != mp.end())
		std::cout << "Found value is: " << itr->second << std::endl;	// Result: First Value

	// 4-5 || begin() and end():					// These functions are starts from the top of the list. Like Key: 1, Value: First Value ..
	for (auto itr = mp.begin(); itr != mp.end(); ++itr)
		std::cout << "Key: " << itr->first << ", Value: " << itr->second << std::endl;
	
	// 6-7 || rbegin() and rend():					// These functions are starts from the end of the list. Like Key: 3, Value: Third Value ..
	for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr)
		std::cout << "Key: " << itr->first << ", Value: " << itr->second << std::endl;
	
	// 8- size():									
	std::cout << "Sizeof map: " << mp.size() << std::endl;			// Result: 3

	// 10- clear():
	// mp.clear();													// Result: 0 size

	// 11-12 || lower_bound(key), upper_bound(key):
	auto itr_lower = mp.lower_bound(2);								// Result: Key: 2, Value: Second Value
	auto itr_upper = mp.upper_bound(3);								// Result: Key: 3, Value: Third Value

	// 13- equal_range(key):
	auto equal_range = mp.equal_range(1);							// Result: Key: 1, Value: First Value

	// 14- count(key):
	int count = mp.count(1);										// Result: 1

	// 15-operator[]:
	mp[4] = "Fourth Value";											// Result: Key = 4, Value: Fourth Value
}