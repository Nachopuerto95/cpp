/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:40 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:59:41 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        const std::string _name;
        Weapon* _weapon;
    public:
        HumanB(const std::string name);
        void setWeapon(Weapon& weapon);
        void attack();
};
