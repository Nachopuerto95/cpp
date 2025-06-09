/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:42:17 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 10:35:08 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Dog Brain allocation failed");
		exit(1);
	}
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
	delete this->_brain;
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
		this->_brain = new Brain();
		if (this->_brain == NULL)
		{
			perror("Dog Brain allocation failed");
			exit(1);
		}
		*this->_brain = *rhs._brain;
	}
	std::cout << YELLOW << this->_type << ": Copy assignment called"<< RESET << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void)const
{
	std::cout << YELLOW << this->_type << ": *WOOFFF WOFF*"<< RESET << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}