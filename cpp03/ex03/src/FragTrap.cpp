/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:19 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:28:43 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	std::cout << "Copy assignment operator called by FragTrap" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFiveGuys(void)
{
	std::cout << RED << "FragTrap " << this->_name << ": ATOMIC HIGH FIVE!! *BOOOOOOOM-CLAAAAAAAP!!*" << RESET << std::endl;
}