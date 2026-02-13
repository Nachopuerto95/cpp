#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T &x)
{
	std::cout << x << std::endl;
}

void doubleValue(int &x)
{
	x *= 2;
}

void toUpper(std::string &s)
{
	for (size_t i = 0; i < s.length(); i++)
		s[i] = std::toupper(s[i]);
}

int main()
{
	// Test con int (const: solo imprimir)
	std::cout << "--- int array ---" << std::endl;
	int arr[] = {3, 5, 8};
	iter(arr, 3, print<int>);

	// Test con int (non-const: modificar)
	std::cout << "--- double values ---" << std::endl;
	iter(arr, 3, doubleValue);
	iter(arr, 3, print<int>);

	// Test con string (const: solo imprimir)
	std::cout << "--- string array ---" << std::endl;
	std::string str_arr[] = {"hola", "buenos", "dias"};
	iter(str_arr, 3, print<std::string>);

	// Test con string (non-const: modificar)
	std::cout << "--- to upper ---" << std::endl;
	iter(str_arr, 3, toUpper);
	iter(str_arr, 3, print<std::string>);

	return 0;
}
