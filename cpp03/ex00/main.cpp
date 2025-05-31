/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:15:29 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:15:30 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap a("Alice");
    ClapTrap b("Bob");

    // Constructors
    // ClapTrap noname;
    // ClapTrap c( noname );
    // c = a;

    a.attack("Bob");
    a.takeDamage(7);
    std::cout << YELLOW << "----------------------------------" << std::endl;
    std::cout << "current stats: " << std::endl;
    std::cout << a << std::endl;
    std::cout << "----------------------------------" << RESET << std::endl;
    a.beRepaired(1);
    std::cout << YELLOW << "----------------------------------" << std::endl;
    std::cout << "current stats: " << std::endl;
    std::cout << a << std::endl;
    std::cout << "----------------------------------" << RESET << std::endl;
    a.takeDamage(10);
    std::cout << YELLOW << "----------------------------------" << std::endl;
    std::cout << "current stats: " << std::endl;
    std::cout << a << std::endl;
    std::cout << "----------------------------------" << RESET << std::endl;
    a.takeDamage(10);
    std::cout << YELLOW << "----------------------------------" << std::endl;
    std::cout << "current stats: " << std::endl;
    std::cout << a << std::endl;
    std::cout << "----------------------------------" << RESET << std::endl;

    return (0);
}