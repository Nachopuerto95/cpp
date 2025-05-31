/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:30:50 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:37:46 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#define RESET "\033[0m"
#define YELLOW "\033[93m"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );

		~Dog();

		Dog &operator=( Dog const & rhs );
		void makeSound(void)const;

	private:

};

#endif 