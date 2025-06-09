/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:34:47 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 10:58:43 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
#define RESET "\033[0m"
#define RED "\033[31m"

class Animal
{

	public:

		Animal(std::string type);
		Animal( Animal const & src );

		virtual ~Animal();

		Animal &operator=( Animal const & rhs );
		virtual void makeSound() const = 0;
		std::string getType()const;
		Animal();

	protected:
		 std::string _type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */