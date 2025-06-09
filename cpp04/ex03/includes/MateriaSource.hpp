/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:42:32 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/08 13:44:40 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "interfaces/IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        virtual ~MateriaSource() {}
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** MATERIASOURCE_HPP */