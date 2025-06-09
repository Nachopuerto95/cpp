/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:14 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 13:46:56 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap")
{
	this->_name = "default";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints =  ScavTrap::_energyPoints;
    this->_attackDamage =  FragTrap::_attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	std::cout << "Copy assignment operator called by DiamondTrap" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am a DiamondTrap: " << this->_name <<
	" from the ClapTrap named " << ClapTrap::_name << "." <<
	std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */