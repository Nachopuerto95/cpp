/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:49:25 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 11:25:21 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{
}

Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY())
{
	// std::cout << "Point Copy Constructor called" << std::endl;
	// *this = copy;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	std::cout << "no" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	o << "X value = " << i.getX();
	o << "Y value = " << i.getX();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const Fixed&	Point::getX(void)const
{
	return this->_x;
}
const Fixed&	Point::getY(void)const
{
	return this->_y;
}

/* ************************************************************************** */