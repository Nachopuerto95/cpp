#pragma once

#include <iostream>

class Weapon {
    private:
        std::string _type;
    public: 
        const std::string& getType() const;
        void setType(std::string type);
        Weapon(std::string _type);
};
