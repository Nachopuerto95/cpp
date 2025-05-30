#include "../includes/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << YELLOW << this->_type << " was created with default constructor"<< RESET << std::endl;
}

Dog::Dog( const Dog & src )  : Animal()
{
	std::cout << YELLOW << this->_type << " was copied"<< RESET << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << YELLOW << this->_type << " was deleted"<< RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	std::cout << YELLOW << this->_type << ": Copy assignment called"<< RESET << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << YELLOW << "Type = " << i._type << RESET;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void)const
{
	std::cout << YELLOW << this->_type << ": *WOOFFF WOFF*"<< RESET << std::endl;
}
