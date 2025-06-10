/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 11:22:51 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 19:18:00 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const& name) : _name(name), _droppedIndex(0)
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
    for (int i = 0; i < 100; ++i)
        _dropped[i] = NULL;
    std::cout << "Character was created with name: " << this->_name << std::endl;
}
Character::Character( const Character & src )
{
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            delete _inventory[i];
    for (int i = 0; i < 100; i++)
        if (_dropped[i])
            delete _dropped[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        
        for (int i = 0; i < 4; ++i)
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
        for (int i = 0; i < 4; ++i)
        {
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
        }

        for (int i = 0; i < 100; ++i)
        {
            delete this->_dropped[i];
            this->_dropped[i] = NULL;
        }
        for (int i = 0; i < 4; ++i)
        {
            if (other._dropped[i])
                this->_dropped[i] = other._dropped[i]->clone();
        }

    }
    return *this;
}

// std::ostream &			operator<<( std::ostream & o, Character const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m && this->_inventory[i] == NULL)
		{
			if (this->inInventory(m))
				this->_inventory[i] = m->clone();
			else
				this->_inventory[i] = m;
			std::cout << "Materia " << this->_inventory[i]->getType() << " equipped to " << this->_name << "'s inventory at index " << i << std::endl;
			return ;
		}
	}
	if (m)
		std::cout << "Cannot equip materia, " << this->_name << "'s inventory is full!" << std::endl;
	else
		std::cout << "Cannot equip invalid materia" << std::endl;
	if (!this->inInventory(m))
		delete m;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx >= 0 && _inventory[idx] != NULL)
    {
        std::cout << this->_name << " ";
        _inventory[idx]->use(target);
    }
    return ;
}

void Character::unequip(int idx)
{
    if (idx >= 4 || idx < 0)
        std::cout << "Invalid index: " << idx << std::endl;
    if (this->_inventory[idx] == NULL)
        std::cout << "No materia at index " << idx << std::endl;
    if (_droppedIndex < 100)
        _dropped[_droppedIndex++] = _inventory[idx];
    else
        std::cout << "Warning: dropped Materia storage full. Leaking materia." << std::endl;
    std::cout << this->_name << " dropped " << _inventory[idx]->getType() << " materia." << std::endl; 
    this->_inventory[idx] = NULL;
}

int Character::inInventory(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return (1);
	}
	return (0);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/



std::string const &Character::getName()const
{
	return this->_name;
}


/* ************************************************************************** */