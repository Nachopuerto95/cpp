#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
#define RESET "\033[0m"
#define RED "\033[31m"

class Animal
{

	public:

		Animal();
		Animal(std::string type);
		Animal( Animal const & src );

		virtual ~Animal();

		Animal &operator=( Animal const & rhs );
		virtual void makeSound(void)const;
		std::string getType()const;

	protected:
		 std::string _type;
		 friend std::ostream &operator<<( std::ostream & o, Animal const & i );


};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */