/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:15:27 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:20:57 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define GREEN "\033[32m"
#define YELLOW "\033[93m"

# include <iostream>
# include <string>


class ClapTrap
{

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		ClapTrap &		operator=( ClapTrap const & rhs );

		// ACCESOR
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const; 
		int getAttackDamage() const;
	
	private:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;	
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */