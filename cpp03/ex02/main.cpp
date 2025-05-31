/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:10 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:27:11 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"


int main( void )
{
    ClapTrap a("Alice");
    ScavTrap b("Bob");
    FragTrap c("Joe");

    // // Constructors
    // std::cout << YELLOW << "--DEFAULT CONSTRUCTOR--" << RESET << std::endl;
    // ClapTrap noname;
    // std::cout << YELLOW << "--COPY CONSTRUCTOR--" << RESET << std::endl;
    // ClapTrap t( noname );
    // std::cout << YELLOW << "--ASSIGNMENT CONSTRUCTOR--"<< RESET  << std::endl;
    // t = a;

    // // // Constructors
    // std::cout << MAG << "--SCAV DEFAULT CONSTRUCTOR--"<< RESET << std::endl;
    // ScavTrap snoname;
    //  std::cout << MAG << "--SCAV COPY CONSTRUCTOR--" << RESET << std::endl;
    // ScavTrap sc( snoname );
    // std::cout << MAG << "--SCAV ASSIGNMENT CONSTRUCTOR--" << RESET << std::endl;
    // sc = b;

    // // Constructors
    // std::cout << GREEN << "--FRAG DEFAULT CONSTRUCTOR--"<< RESET << std::endl;
    // FragTrap cnoname;
    //  std::cout << GREEN<< "--FRAG COPY CONSTRUCTOR--" << RESET << std::endl;
    // FragTrap cc( cnoname );
    // std::cout << GREEN << "--FRAG ASSIGNMENT CONSTRUCTOR--" << RESET << std::endl;
    // cc = c;

    a.attack("Bob");
    b.attack("Alice");
    b.guardGate();
    b.guardGate();
    c.highFiveGuys();

    return (0);
}