#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	std::vector<int> src = { 1,2,3,4,5 };
	std::vector<int> dest1(src.size());
	std::vector<int> dest2(src.size());
	std::vector<int> dest3(3);
	int copyNumber = 3;

	std::copy(src.begin(), src.end(), dest1.begin());
	std::copy(src.begin() + 2, src.end() - 1, dest2.begin() + 1);
	std::copy_n(src.begin(), copyNumber, dest3.begin());


	// Destination 1 loop.
	std::cout << "Destination 1 loop:" << std::endl;
	for (int num : dest1)
	{
		std::cout << num << " ";
	}

	// Destination 2 loop.
	std::cout << std::endl;

	std::cout << "Destination 2 loop:" << std::endl;
	for (int num : dest2)
	{
		std::cout << num << " ";
	}

	std::cout << std::endl;

	// Destination 3 loop.
	std::cout << "Destination 3 loop:" << std::endl;
	for (int num : dest3)
	{
		std::cout << num << " ";
	}

	return 0;
}