/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:52:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 15:12:56 by jpuerto-         ###   ########.fr       */
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