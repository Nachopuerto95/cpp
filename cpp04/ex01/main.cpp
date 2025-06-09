/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:43:55 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 10:41:42 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"


int main()
{

    // SUBJECT MAIN
	
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();

   std::cout << YELLOW << "Constructors: " << std::endl;
    std::cout << GREEN
        << "\n + Creating an array of Animals (half Dogs, half Cats), "
        << "each with its own Brain.\n" << RESET << std::endl;

    Animal* animals[4];

    for (int i = 0; i < 4 / 2; i++)
        animals[i] = new Dog();
    for (int i = 4 / 2; i < 4; i++)
        animals[i] = new Cat();

    std::cout << YELLOW << "\nTesting deep copy:" << RESET << std::endl;
    Dog original;
    original.getBrain()->setIdea(0, "I'm original dog");
    
    Dog copy = original; 
    copy.getBrain()->setIdea(0, "I'm original dog");
    copy.getBrain()->setIdea(1, "I'm a copy dog");

    std::cout << "Original's idea: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy's idea 1:     " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy's idea 2:     " << copy.getBrain()->getIdea(1) << std::endl;
        std::cout << "Original's idea 2: " << original.getBrain()->getIdea(1) << std::endl;

    std::cout << YELLOW << "\nDeconstructors: " << std::endl;
    std::cout << GREEN << "\n + Deleting the array of Animals to check for proper cleanup.\n" << RESET << std::endl;

    for (int i = 0; i < 4; i++)
        delete animals[i];

    std::cout << std::endl;
    return 0;
}

