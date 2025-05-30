#include "../includes/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << MAG << this->_type << " was created with default constructor"<< RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << MAG << this->_type << " was constructedr"<< RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << MAG << this->_type << " was copied"<< RESET << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << MAG << this->_type << " was deleted"<< RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	std::cout << MAG << this->_type << ": Copy assignment called"<< RESET << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << MAG << "Type = " << i._type << RESET;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound(void)const
{
	std::cout << MAG << this->_type << ": WrongAnimal dont make any sound..."<< RESET << std::endl;
}

std::string WrongAnimal::getType()const
{
	return this->_type;
}