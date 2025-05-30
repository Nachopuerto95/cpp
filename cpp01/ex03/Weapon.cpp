#include "Weapon.hpp"

Weapon::Weapon(std::string _type) {
    this->_type = _type;
}

const std::string& Weapon::getType() const {
    return this->_type;
}

void Weapon::setType(std::string type) {
    std::cout << this->_type << " was swapped for " << type << std::endl;
    this->_type = type;
}