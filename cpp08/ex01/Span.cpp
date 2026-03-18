#include "Span.hpp"

Span::Span() : _size(0), _numbers() {}

Span::Span(unsigned int n) : _size(n), _numbers() {}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span() {}

Span& Span::operator=(Span const & rhs)
{
      if (this != &rhs)
      {
          _size = rhs._size;
          _numbers = rhs._numbers;
      }
      return *this;
}

void Span::addNumber(int num)
{
	if (_numbers.size() >= _size)
		throw std::exception();
	else
		_numbers.push_back(num);
}

long Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	long shortest = (long)sorted[1] - (long)sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		long diff = (long)sorted[i] - (long)sorted[i - 1];
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

long Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	return (long)sorted[sorted.size() - 1] - (long)sorted[0];
}
