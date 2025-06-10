/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:34:09 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/10 15:07:04 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "./interfaces/ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria *_inventory[4];
        AMateria *_dropped[100];
        int _droppedIndex;
        
    public:
        // Character();
        Character(const std::string& name);
        Character( const Character & src );
        virtual ~Character();
        
        Character& operator=(const Character& other);

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

};

#endif