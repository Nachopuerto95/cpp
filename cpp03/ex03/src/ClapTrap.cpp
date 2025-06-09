/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:25 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:27:26 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = "Default";
	std::cout << this->_name << " was created! " << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << name << " was created! " << std::endl; 
	this->_name = name;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << src._name << " was copied! " << std::endl; 
	*this = src;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " was destroyed! " << std::endl; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << "ClapTrap " << i.getName()
	  << " [HP: " << i.getHitPoints()
	  << ", Energy: " << i.getEnergyPoints()
	  << ", Attack: " << i.getAttackDamage() << "]";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1 && this->_hitPoints >= 1)
	{
		this->_energyPoints -= 1;
		std::cout << GREEN << this->_name 
					<< " attacks " << target 
					<< ", causing " << this->_attackDamage
					<< " points of damage!" 
					<< RESET << std::endl; 
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << RED << this->_name << " is out of combat..." << RESET << std::endl; 
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << RED << this->_name << " has no energy, can't attack..." << RESET << std::endl; 
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints >= 1)
	{
		this->_hitPoints -= amount;
		std::cout << GREEN << this->_name << " recived "<< amount << " points of damage!" << RESET << std::endl; 
		if (this->_hitPoints <= 0)
		{
			this->_hitPoints = 0;
			std::cout << RED<< this->_name << " died!" << RESET << std::endl; 
		}
	}
	else
		std::cout << RED << this->_name << " is already dead..." << RESET << std::endl; 
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints >= 1 && this->_hitPoints >= 1)
	{
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << GREEN << this->_name 
					<< " recovered " << amount 
					<< " points." << RESET << std::endl; 
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << RED << this->_name << " is out of combat..." << RESET<< std::endl; 
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << RED << this->_name << " has no energy, can't repair itself..." << RESET << std::endl; 
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName() const {
    return this->_name;
}

int ClapTrap::getHitPoints() const {
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return this->_attackDamage;
}

/* ************************************************************************** */