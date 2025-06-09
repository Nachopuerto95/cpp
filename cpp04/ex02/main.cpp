/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:43:55 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 11:06:19 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"


int main() {
	
    // You can create Animal with subclass
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n\033[34m--- Deleting Animals ---\033[0m" << std::endl;
	delete dog;
	delete cat;

	// Uncommenting the following line should cause a compile-time error
	// Animal a; // ❌ Cannot instantiate abstract class

	return 0;
}

