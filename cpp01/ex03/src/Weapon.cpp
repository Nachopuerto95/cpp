/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:59:54 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    this->_type = _type;
    std::cout << "Weapon: "<< this->_type << " was created " << std::endl;
}

const std::string& Weapon::getType() const 
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    std::cout << this->_type << " was swapped for " << type << std::endl;
    this->_type = type;
}