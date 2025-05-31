/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:30:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:38:07 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP

# include <iostream>
# include <string>
#define RESET "\033[0m"
#define MAG "\033[35m"

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal const & src );

		~WrongAnimal();

		WrongAnimal &operator=( WrongAnimal const & rhs );
		void makeSound(void)const;
		std::string getType()const;

	protected:
		 std::string _type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );


#endif /* ********************************************************** WrongANIMAL_H */