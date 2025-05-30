#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#define MAG "\033[95m"
#define BLUE "\033[94m"
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& rhs);

		void attack(const std::string& target);
		void guardGate();

	private:
		bool _isGuarding;
		friend std::ostream& operator<<(std::ostream& o, const ScavTrap& i);
};

#endif