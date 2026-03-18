#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	std::cout << "=== Vector test ===" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 20);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Not found" << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Not found" << std::endl;
	}

	std::cout << "=== List test ===" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(15);
	lst.push_back(25);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 15);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Not found" << std::endl;
	}

	try
	{
		std::list<int>::iterator it = easyfind(lst, 99);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Not found" << std::endl;
	}

	return 0;
}
