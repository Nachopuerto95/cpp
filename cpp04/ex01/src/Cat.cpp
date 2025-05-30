#include "../includes/Cat.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		exit(1);
	}
	std::cout << GREEN << this->_type << " was created with default constructor"<< RESET << std::endl;
}

Cat::Cat( const Cat & src )  : Animal()
{
	std::cout << GREEN << this->_type << " was copied"<< RESET << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << GREEN << this->_type << " was deleted"<< RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->_brain = new Brain();
		if (this->_brain == NULL)
		{
			perror("Cat Brain allocation failed");
			exit(1);
		}
		*this->_brain = *rhs._brain;
	}
	std::cout << GREEN << this->_type << ": Copy assignment called"<< RESET << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << GREEN << "Type = " << i._type << RESET;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void)const
{
	std::cout << GREEN << this->_type << ": *MEEEEOOOOWW*"<< RESET << std::endl;
}
