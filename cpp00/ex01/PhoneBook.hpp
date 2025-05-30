#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CYAN "\033[36m"
#define RESET "\033[0m"
#define BRIGHT_CYAN "\033[96m"
#define RED "\033[31m"
#define GREEN "\033[32m"

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <sstream>


class PhoneBook
{
    public:
        int count;
        Contact contacts[8];
        PhoneBook();
        void search();
        Contact addContact(int index);
        void searchByIndex();
        void printHeader(std::string type);
        void welcome();
};

#endif
