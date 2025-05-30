#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );

		~Cat();

		Cat &operator=( Cat const & rhs );
		void makeSound(void)const;

	private:
		 friend std::ostream &operator<<( std::ostream & o, Cat const & i );


};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif 