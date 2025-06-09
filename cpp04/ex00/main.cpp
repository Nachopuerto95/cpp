#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"
#include "includes/WrongAnimal.hpp"

int main(void)
{
    std::cout << "\033[34mConstructing class Animal\n\033[0m" << std::endl;

	std::cout << GREEN << " + Animal should be created by default, making \"any\" sound and being normally deconstructed.\nSince it is declared as a pointer, it must be created with \"New\", so it also need to be \"delete\"\n" << std::endl;

	const Animal	*meta = new Animal();
	std::cout << std::endl;
	std::cout << "\033[34mTest\033[0m" << std::endl;

	std::cout << "Animal type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructors\033[0m" << std::endl;
	delete meta;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing class Cat, who inherits from Animal\033[0m" << std::endl;
	 std::cout << GREEN
	 		<< "\n + In this case, we create a pointer to the base class 'Animal'\n"
          << "and initialize it with an object of the derived class 'Cat'.\n"
          << "If we dont declare Deconstructor and Makesound() as virtual, \n"
		  << "it will just call the functions of the original class Animal\n"
          << std::endl;

	const Animal	*catto = new Cat();
	std::cout << std::endl;

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Cat type: " << catto->getType() << std::endl;
	catto->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructors\033[0m" << std::endl;
	delete catto;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing class Dog\033[0m" << std::endl;
	std::cout << GREEN
	 		<< "\n + This behaves the same as the previous tests with Cat.\n"
          << std::endl;
	const Animal	*doggo = new Dog();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
	doggo->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructors\033[0m" << std::endl;
	delete doggo;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing class Wrong Animal\033[0m" << std::endl;
	std::cout << GREEN
		<< "\n + Now we create a WrongAnimal class without virtual declaration at makesound()\n"
		<< std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	std::cout << std::endl;

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Animal _type: " << wrong_meta->getType() << std::endl;
	wrong_meta->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructors\033[0m" << std::endl;
	delete wrong_meta;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "\033[34mConstructing class\033[0m" << std::endl;
	std::cout << GREEN
	<< "\n + At this point, we declare a WrongAnimal pointer using new WrongCat, so\n"
	<< "it will display WrongAnimal sound because the method is not virtual\n"
	<< std::endl;
	const WrongAnimal	*wrong_catto = new WrongCat();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "WrongAnimal _type: " << wrong_catto->getType() <<std::endl;
	wrong_catto->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34mDeConstructing class\033[0m" << std::endl;
	delete wrong_catto;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "\033[34mConstructing class\033[0m" << std::endl;
	std::cout << GREEN
	<< "\n + However, if we declare a pointer directly as WrongCat,\n"
	<< " then calling makeSound() will invoke the WrongCat version,\n"
	<< " because the pointer type matches the actual object type,\n"
	<< " even though the method is not virtual.\n\n";
	const WrongCat	*wrong_catta = new WrongCat();
	std::cout << std::endl;

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "WrongCat _type: " << wrong_catta->getType() <<std::endl;
	wrong_catta->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34mDeConstructing class\033[0m" << std::endl;
	delete wrong_catta;
	std::cout << std::endl;

	return (0);
}