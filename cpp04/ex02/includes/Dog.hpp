/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:39:22 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:41:23 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
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
		Brain* _brain;

};

#endif 