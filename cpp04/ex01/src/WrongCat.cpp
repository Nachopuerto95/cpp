/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:42:27 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:42:28 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << BLUE << this->_type << " was created with default constructor"<< RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )  : WrongAnimal()
{
	std::cout << BLUE << this->_type << " was copied"<< RESET << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << BLUE << this->_type << " was deleted"<< RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	std::cout << BLUE << this->_type << ": Copy assignment called"<< RESET << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound(void)const
{
	std::cout << BLUE << this->_type << ": *MEEEEOOOOWW*"<< RESET << std::endl;
}
