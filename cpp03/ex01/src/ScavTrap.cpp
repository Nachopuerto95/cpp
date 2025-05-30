#include "../includes/ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	_isGuarding = false;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	_isGuarding = false;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called for " << _name << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	std::cout << "Copy assignment operator called by ScavTrap" << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ClapTrap " << i._name
	  << " [HP: " << i._hitPoints
	  << ", Energy: " << i._energyPoints
	  << ", Attack: " << i._attackDamage << "]";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1 && this->_hitPoints >= 1)
	{
		this->_energyPoints -= 1;
		std::cout << BLUE << "ScavTrap " << this->_name 
					<< " attacks " << target 
					<< ", causing " << this->_attackDamage
					<< " points of damage!" 
					<< RESET << std::endl; 
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << MAG << " cavTrap " << this->_name << " is out of combat..." << RESET << std::endl; 
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << MAG << "ScavTrap " << this->_name << " has no energy, can't attack..." << RESET << std::endl; 
	}
}

void ScavTrap::guardGate(void)
{
	if (this->_isGuarding == false)
	{
		this->_isGuarding = true;
		std::cout << MAG << "ScavTrap " << this->_name << " is now in Gate keeper mode." << RESET << std::endl; 
	}
	else
		std::cout << MAG << "ScavTrap " << this->_name << " is Already in Gate keeper mode." << RESET << std::endl; 
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */