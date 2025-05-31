/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:43:55 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 20:57:20 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"


int main()
{
	
	// // ERROR constructing no inherit classes
	// const Animal *animal = new Animal();
	// animal->makeSound();
	
	//     // SUBJECT MAIN
    const Animal* meta = new Animal();
	
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

//     // Animal a;
//     // Cat b;
//     // Dog c;

//     // Constructors ANIMAL
//     // Animal aninoname;              //Empty
//     // Animal anic( aninoname );         //Copy
//     // anic = a;                      //Assignment
//     // Constructors CAT
//     // Cat catnoname;
//     // Cat catc( catnoname );
//     // catc = b;
//     // Constructors DOG
//     // Dog dognoname;
//     // Dog dogc( dognoname );
//     // dogc = c;

//     // a.makeSound();
//     // b.makeSound();
//     // c.makeSound();

    
//     return (0);
// }
}