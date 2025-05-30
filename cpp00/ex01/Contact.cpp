#include "Contact.hpp"

Contact::Contact()
{
    this->empty = true;
}

Contact::Contact(int index, std::string firstname, std::string lastname, std::string nickname)
{
    this->empty = false;
    this->index = index;
    this->firstname = firstname;
    this->lastname = lastname;
    this->nickname = nickname;
}

void Contact::getContact()
{
    std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
    std::cout << GREEN << "               Contact info"<< RESET << std::endl ;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
    std::cout << GREEN << "INDEX:       " << RESET << index << std::endl ;
    std::cout << GREEN << "FIRST NAME: " << RESET <<  firstname<< std::endl;
    std::cout << GREEN << "LAST NAME:  " << RESET <<  lastname<< std::endl;
    std::cout << GREEN << "NICK NAME:  " << RESET <<  nickname << std::endl;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
    return ;
}

