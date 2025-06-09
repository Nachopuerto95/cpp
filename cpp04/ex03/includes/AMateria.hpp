#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string const _type;
	public:

	// COMPLETE ORTODOX STUFF
		AMateria() {};
		AMateria(std::string const & type);
		AMateria(const AMateria& copy);
		~AMateria();
	
		AMateria &operator=(AMateria const & src);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif /* ******************************************************** AMATERIA_H */