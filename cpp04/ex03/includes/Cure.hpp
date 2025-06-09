/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:01:50 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 14:02:31 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
        Cure();
        Cure(Cure const & copy);

        Cure &operator=(Cure const & src);
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */