/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:29 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 13:39:53 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#define MAG "\033[95m"
#define BLUE "\033[94m"
# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap& rhs);

		void attack(const std::string& target);
		void whoAmI(void);

	private:
		std::string _name;
};

#endif