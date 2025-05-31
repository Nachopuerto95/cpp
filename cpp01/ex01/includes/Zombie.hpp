/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:51:32 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:51:33 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {

    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        void announce( void );
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );
