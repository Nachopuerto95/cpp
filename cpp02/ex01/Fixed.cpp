#include "Fixed.hpp"

const int Fixed::_fbits = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input) : _value(0)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = roundf(input * (1 << this->_fbits));
}

Fixed::Fixed(const float input) : _value(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(input * (1 << this->_fbits));
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

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int	Fixed::getRawBits(void)const
{
	return (this->_value);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->_value / (float)(1 << this->_fbits));
}

int	Fixed::toInt(void)const
{
	return (this->_value >> this->_fbits);
}