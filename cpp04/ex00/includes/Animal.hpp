/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:29:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 09:37:17 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
#define RESET "\033[0m"
#define RED "\033[31m"

class Animal
{

	public:

		Animal();
		Animal(std::string type);
		Animal( Animal const & src );

		virtual ~Animal();

		Animal &operator=( Animal const & rhs );
		virtual void makeSound(void)const;
		std::string getType()const;

	protected:
		 std::string _type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */