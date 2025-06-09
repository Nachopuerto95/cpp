/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:01:53 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 14:02:37 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
        Ice();
        Ice(Ice const & copy);

        Ice &operator=(Ice const & src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */