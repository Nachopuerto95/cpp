/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:52:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 12:50:42 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// CONSTRUCTORS

Ice::Ice(void) : AMateria("ice")
{
    
}

Ice::Ice(const Ice & copy)
{
    *this = copy;
}

// OVERLOAD

Ice &Ice::operator=(const Ice & src)
{
    if (this != &src) 
    {
    // Copia otros datos si hay
    }
    return *this;
}

// METHODS

AMateria* Ice::clone() const {
    return new Ice(*this);
}

 void Ice::use(ICharacter& target) 
 {
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
 }