/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:50 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:59:51 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _weapon(NULL)
{
    std::cout << this->_name << " was created " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
    std::cout << _name << " Took: " << _weapon->getType() << std::endl;
}

void HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attacks with:  " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}