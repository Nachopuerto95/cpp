#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_numbers;

	public:
	 	Span();
        Span(unsigned int n);
        Span(Span const & src);
        ~Span();

        Span& operator=(Span const & rhs);

		void addNumber(int num);
		long shortestSpan();
		long longestSpan();

		template <typename Iterator>
		void Fill(Iterator begin, Iterator end);
};

# include "Span.tpp"

#endif
