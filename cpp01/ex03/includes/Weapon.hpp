/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:43 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:59:44 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon {
    private:
        std::string _type;
    public: 
        const std::string& getType() const;
        void setType(std::string type);
        Weapon(std::string _type);
};
