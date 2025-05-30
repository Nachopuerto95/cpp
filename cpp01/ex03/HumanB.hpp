#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        const std::string _name;
        Weapon* _weapon;
    public:
        HumanB(const std::string name);
        void setWeapon(Weapon& weapon);
        void attack();
};
