#include <iostream>
#include <vector>
#include "easyfind.h"

int main()
{
	std::vector<int> vector;

	vector.push_back(2);
	vector.push_back(4);
	vector.push_back(6);
	vector.push_back(8);
	vector.push_back(10);
	vector.push_back(11);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	for (int i = 0; i < (int)vector.size(); i++)
		std::cout << vector[i] << std::endl;
	std::cout << "-----------------"<< std::endl;
	try
	{
		std::cout << easyfind(vector, 133) << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout << exc.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(vector, 10) << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout << exc.what() << std::endl;
	}


}
