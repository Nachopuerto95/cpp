/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:52:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 19:12:31 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// CONSTRUCTORS

Ice::Ice(void) : AMateria("ice")
{
    
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Materia destroyed: ice" << std::endl;
}

// OVERLOAD

Ice &Ice::operator=(const Ice & src)
{
    if (this != &src) 
    {
    }
    return *this;
}


// METHODS

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an " << this->getType() << " bolt at " << target.getName() << " *"<< std::endl;
}

AMateria* Ice::clone() const {
    std::cout << this->getType() << " was cloned" << std::endl;
    return new Ice(*this);
}