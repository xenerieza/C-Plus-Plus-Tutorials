#include <iostream>
#include <algorithm>
#include <vector>
#include <array>


int main()
{
	std::vector<int> vec{ 161,24,61,362,28,39,15,91,45,12 };
	std::array<int, 10> arr1{ 161,24,61,362,28,39,15,91,45,12 };
	int arr2[]{ 161,24,61,362,28,39,15,91,45,12 };

	//Let's list the vector array from smallest to largest and largest to smallest.
	std::cout << "Vector array smallest to largest" << std::endl;
	std::sort(vec.begin(),vec.end(), std::less<int>());
	std::cout << "Vector array largest to smallest" << std::endl;
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	for (const auto& num : vec)
	{
		std::cout << num << " ";
	}

	//Let's list the std::array from smallest to largest and largest to smallest.
	std::cout << "std::array smallest to largest" << std::endl;
	std::sort(arr1.begin(),arr1.end(), std::less<int>());
	std::cout << "std::array largest to smallest" << std::endl;
	std::sort(arr1.begin(), arr1.end(), std::greater<int>());
	for (const auto& num : arr1)
	{
		std::cout << num << " ";
	}

	//Let's list the C-type array from smallest to largest.
	size_t _size = sizeof(arr2) / sizeof(arr2[0]);
	std::cout << "Regular C-type Array smallest to largest" << std::endl;
	std::sort(arr2, arr2 + _size, std::less<int>());
	std::cout << "Regular C-type Array largest to smallest" << std::endl;
	std::sort(arr2, arr2 + _size, std::greater<int>());
	for (const auto& num : arr2)
	{
		std::cout << num << " ";
	}

	// Reverse Functions
	std::vector<int> vec1{ 11,22,33,44,55,66,77,88,99 };
	std::reverse(vec1.begin(), vec1.end());
	for (const auto& num : vec1)
	{
		std::cout << num << " ";
	}
}