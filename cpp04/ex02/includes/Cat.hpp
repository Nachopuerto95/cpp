/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:39:19 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 10:33:33 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );

		virtual ~Cat();

		Cat &operator=( Cat const & rhs );
		void makeSound(void)const;
		Brain* getBrain() const;

	private:
		 Brain* _brain;

};

#endif 