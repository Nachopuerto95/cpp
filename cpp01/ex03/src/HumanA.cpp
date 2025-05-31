/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:47 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:59:48 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << this->_name << " was created " << std::endl;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with:  " << _weapon.getType() << std::endl;
}
