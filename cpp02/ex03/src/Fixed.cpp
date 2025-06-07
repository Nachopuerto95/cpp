/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:13:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 11:26:27 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fbits = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const int input)
{
	this->_value = roundf(input * (1 << this->_fbits));
}

Fixed::Fixed(const float input)
{
	this->_value = roundf(input * (1 << this->_fbits));
}

Fixed::Fixed( const Fixed &copy )
{
	*this = copy;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


// COMPARISION OPERATORS< <= > >=

bool	Fixed::operator==(const Fixed &other) const
{
    return this->toFloat() == other.toFloat();
}

bool	Fixed::operator>(const Fixed &other) const
{
    return this->toFloat() > other.toFloat();
}

bool	Fixed::operator<(const Fixed &other) const
{
    return this->toFloat() < other.toFloat();
}

bool	Fixed::operator>=(const Fixed &other) const
{
    return this->toFloat() >= other.toFloat();
}

bool	Fixed::operator<=(const Fixed &other) const
{
    return this->toFloat() <= other.toFloat();
}

// ARITHMETIC OPERATORS + - / *

Fixed Fixed::operator+(const Fixed &other) const
{
	return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return this->toFloat() / other.toFloat();
}

// // PRE / POST / INCREMENT / DECREMENT

Fixed &Fixed::operator++()
{
	++_value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_value;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	--_value;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_value;
	return (tmp);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float	Fixed::toFloat(void)const
{
	return ((float)this->_value / (float)(1 << this->_fbits));
}

int	Fixed::toInt(void)const
{
	return (this->_value >> this->_fbits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

int	Fixed::getRawBits(void)const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}