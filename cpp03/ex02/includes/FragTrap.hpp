#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#define MAG "\033[95m"
#define BLUE "\033[94m"
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		~FragTrap();

		FragTrap& operator=(const FragTrap& rhs);

		void highFiveGuys(void);

	private:
		bool _isGuarding;
		friend std::ostream& operator<<(std::ostream& o, const FragTrap& i);
};

#endif