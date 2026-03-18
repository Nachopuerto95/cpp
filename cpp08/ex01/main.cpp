#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
	std::cout << "=== Test del subject ===" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "=== Test excepcion: Span lleno ===" << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: cannot add, Span is full" << std::endl;
	}

	std::cout << "=== Test excepcion: 0 elementos ===" << std::endl;
	try
	{
		Span empty(0);
		empty.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: no span with 0 elements" << std::endl;
	}

	std::cout << "=== Test excepcion: 1 elemento ===" << std::endl;
	try
	{
		Span one(1);
		one.addNumber(42);
		one.longestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: no span with 1 element" << std::endl;
	}

	std::cout << "=== Test Fill con 10000 numeros ===" << std::endl;
	std::vector<int> big;
	for (int i = 0; i < 10000; i++)
		big.push_back(i);

	Span bigSpan(10000);
	bigSpan.Fill(big.begin(), big.end());

	std::cout << "shortestSpan: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << bigSpan.longestSpan() << std::endl;

	std::cout << "=== Test Fill overflow ===" << std::endl;
	try
	{
		Span small(5);
		small.Fill(big.begin(), big.end());
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: Fill overflow, Span is full" << std::endl;
	}

	return 0;
}
