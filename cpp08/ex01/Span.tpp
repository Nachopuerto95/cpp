#include "Span.hpp" 

template <typename Iterator>
void Span::Fill(Iterator begin, Iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}
