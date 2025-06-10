/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:45:06 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 15:23:28 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        _book[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_book[i])
            delete _book[i];
}

// METHODS

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_book[i])
        {   
            _book[i] = materia->clone();
            return ;
        }
    }
    std::cout << "Not enough space in materia source..." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & name)
{
    for (int i = 0; i < 4; i++)
    {
        if (_book[i] && _book[i]->getType() == name)
            return _book[i]->clone();
    }
    std::cout << "Cant find materia: "<< name << std::endl;
    return NULL;
}