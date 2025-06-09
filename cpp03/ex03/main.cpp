/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:10 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 13:52:56 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"
#include "includes/DiamondTrap.hpp"


int main( void )
{
    	std::cout << YELLOW << "\nConstructors" << std::endl;
        std::cout << "------------------------" << RESET << std::endl;
		DiamondTrap a;
		DiamondTrap b("Nacho");
		DiamondTrap c(a);

        std::cout << GREEN<< "\nTesting" << std::endl;
        std::cout << "------------------------" << RESET << std::endl;

		a.whoAmI();
		a.attack("someone");
		b.whoAmI();
		b.attack("i dont know");
		c.whoAmI();
		
        std::cout << RED << "\nDestroying" << std::endl;
        std::cout << "------------------------" << RESET << std::endl;
	
    return (0);
}