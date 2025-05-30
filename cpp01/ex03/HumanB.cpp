#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
    std::cout << _name << " Took: " << _weapon->getType() << std::endl;
}

void HumanB::attack() {
    if (_weapon)
        std::cout << _name << " attacks with:  " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}