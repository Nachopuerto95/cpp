#ifndef WRONGWrongCAT_HPP
# define WRONGWrongCAT_HPP

#include "WrongAnimal.hpp"
#define RESET "\033[0m"
#define BLUE "\033[34m	"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );

		~WrongCat();

		WrongCat &operator=( WrongCat const & rhs );
		void makeSound(void)const;

	private:
		 friend std::ostream &operator<<( std::ostream & o, WrongCat const & i );

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif 