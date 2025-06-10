/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:52:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 19:12:20 by jpuerto-         ###   ########.fr       */
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

Cure::~Cure()
{
	std::cout << "Materia destroyed: cure" << std::endl;
}

// OVERLOAD

Cure &Cure::operator=(const Cure & src)
{
    if (this != &src) 
    {
    }
    return *this;
}


// METHODS

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}
