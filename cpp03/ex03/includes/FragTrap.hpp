/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:27:31 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 13:10:14 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#define MAG "\033[95m"
#define BLUE "\033[94m"
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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
};

#endif