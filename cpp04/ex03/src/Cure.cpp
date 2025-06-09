/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:52:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 12:50:35 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

// CONSTRUCTORS

Cure::Cure(void) : AMateria("cure")
{
    
}

Cure::Cure(const Cure & copy)
{
    *this = copy;
}

// OVERLOAD

Cure &Cure::operator=(const Cure & src)
{
    if (this != &src) 
    {
    // Copia otros datos si hay
    }
    return *this;
}

// METHODS

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) 
{
    std::cout << "Heals " << target.getName()<< "'s wounds" << std::endl;
}