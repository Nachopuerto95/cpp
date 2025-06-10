/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:42:32 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 18:47:25 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "interfaces/IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    protected:
        AMateria *_book[4]; 
    public:
        MateriaSource();
        virtual ~MateriaSource();
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** MATERIASOURCE_HPP */