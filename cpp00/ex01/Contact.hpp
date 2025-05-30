#ifndef CONTACT_HPP
#define CONTACT_HPP
#define RESET "\033[0m"
#define BRIGHT_CYAN "\033[96m"
#define GREEN "\033[32m"

#include <iostream>

class Contact
{
    public:
        bool empty;
        int index;
        std::string firstname;
        std::string lastname;
        std::string nickname;
        Contact();
        Contact(int index, std::string firstname, std::string lastname, std::string nickname);
        void getContact();
};

#endif