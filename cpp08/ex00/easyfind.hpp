#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::exception();
	return it;
}

#endif
