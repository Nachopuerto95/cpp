#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#define RESET "\033[0m"
#define YELLOW "\033[93m"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );

		~Dog();

		Dog &operator=( Dog const & rhs );
		void makeSound(void)const;

	private:
		Brain* _brain;
		friend std::ostream &operator<<( std::ostream & o, Dog const & i );


};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif 