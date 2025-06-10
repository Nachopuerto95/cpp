/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:20:23 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 19:25:36 by jpuerto-         ###   ########.fr       */
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
	std::cout << "Materia copied: " << src._type << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria const	&AMateria::operator=(AMateria const &copy)
{
	this->_type = copy._type;
	std::cout << "AMateria Assignment Operator Called" << std::endl;
	return (*this);
}

std::ostream &operator<<( std::ostream & o, AMateria const & i )
{
	o << "Type = " << i.getType();
	return o;
}

std::ostream &operator<<( std::ostream & o, AMateria const *i )
{
	o << "Type = " << i->getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AMateria::getType() const
{
	return (this->_type);
}

/* ************************************************************************** */