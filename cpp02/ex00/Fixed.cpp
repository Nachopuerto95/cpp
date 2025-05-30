#include "Fixed.hpp"

const int Fixed::_fbits = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & src )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &src )
	{
		this->_value = src.getRawBits();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

	int	Fixed::getRawBits(void)const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_value);
	}

	void	Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		this->_value = raw;
	}
