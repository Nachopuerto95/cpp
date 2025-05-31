/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:51:43 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:51:44 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "Sr. Zombie");
    
    for (int i = 0; i < N; i++)
    {
        std::cout << "#" << i << " ";
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}