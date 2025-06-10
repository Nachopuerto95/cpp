/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:20:23 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 15:13:52 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


AMateria::AMateria(std::string const& type) : _type(type) {
	std::cout << "AMateria constructed with type: " << _type << std::endl;
}


AMateria::AMateria( const AMateria & src )
{
	std::cout << "Materia copied: " << _type << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "Materia destroyed: " << _type << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if (this != &rhs)
	{
		std::cout << "AMateria Assignment Operator Called" << std::endl;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void AMateria::use(ICharacter& target)
{
	std::cout << "shoots an" << target.getName() << "bolt at " << target.getName() << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AMateria::getType() const
{
	return (this->_type);
}

/* ************************************************************************** */