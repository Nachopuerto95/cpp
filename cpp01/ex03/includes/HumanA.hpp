/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:36 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:59:37 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        const std::string _name;
        Weapon& _weapon;
    public:
        HumanA(const std::string name, Weapon& weapon);
        void attack();
};

