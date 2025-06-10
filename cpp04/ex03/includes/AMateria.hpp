#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "interfaces/ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:

		AMateria() {};
		AMateria(std::string const & type);
		AMateria(const AMateria& copy);
		virtual ~AMateria();
	
		AMateria const	&operator=(AMateria const &copy);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) ;
};
std::ostream &			operator<<( std::ostream & o, AMateria const & i );
std::ostream &			operator<<( std::ostream & o, AMateria const *i );

#endif /* ******************************************************** AMATERIA_H */