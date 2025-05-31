/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:59:57 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:01:13 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanA.hpp"
#include "includes/HumanB.hpp"
#include "includes/Weapon.hpp"

int main()
{
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();

        Weapon club2 = Weapon("crude spiked club2");
        HumanB jim("Jim");
        jim.setWeapon(club2);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();

    return 0;
}