/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:25:24 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:25:25 by jpuerto          ###   ########.fr       */
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
		virtual ~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		ClapTrap &		operator=( ClapTrap const & rhs );

		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const; 
		int getAttackDamage() const;
	
	protected:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;	
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif