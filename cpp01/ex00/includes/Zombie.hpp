/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:51:12 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:51:12 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
    private:
        std::string name;
        Zombie() {};
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
