/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:51:25 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:51:26 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main(void)
{
	Zombie *newZombie1;
	
	newZombie1 = newZombie("New Zombie");
	newZombie1->announce();
	delete newZombie1;
	randomChump("Random Zombie");
	return (0);
}