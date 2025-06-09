/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:41:48 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 20:47:50 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal")
{
	std::cout << RED << this->_type << " was created with default constructor"<< RESET << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << RED << this->_type << " was constructedr"<< RESET << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << RED << this->_type << " was copied"<< RESET << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << RED << this->_type << " was deleted"<< RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	std::cout << RED << this->_type << ": Copy assignment called"<< RESET << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << RED << "Type = " << i.getType() << RESET;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound(void)const
{
}

std::string Animal::getType()const
{
	return this->_type;
}