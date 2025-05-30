#include "../includes/Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain was created with default constructor" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain was copied" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain was deleted" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; ++i)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Brain const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */