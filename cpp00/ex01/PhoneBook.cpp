#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0){}

void PhoneBook::welcome()
{
    std::cout << CYAN << "               What would you like to do?"<< RESET << std::endl ;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl ;
    std::cout << GREEN << "ADD:" << RESET << "<ADD> Add new contact" << std::endl;
    std::cout << GREEN << "SEARCH:" << RESET << "<SEARCH> Find contact by Indez" << std::endl;
    std::cout << GREEN << "EXIT:" << RESET << "<EXIT> Exit PhoneBook" << std::endl;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
}

Contact PhoneBook::addContact(int index)
{
   std::string firstname;
   std::string lastname;
   std::string nickname;

   std::cout << "Enter first name: ";
   getline(std::cin, firstname);

   std::cout << "Enter last name: ";
   getline(std::cin, lastname);

   std::cout << "Enter nickname: ";
   getline(std::cin, nickname);

   std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
   std::cout << GREEN <<  "               Contact created!" << RESET << std::endl ;
   std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
    return Contact(index + 1, firstname, lastname, nickname);
}

std::string formated(std::string str)
{
    if (str.length() == 10)
        return str;
    else if (str.length() < 10)
    {
        while (str.length() < 10)
        {
            str.append(" ");
        }
        return str;
    }
    else
        return str.substr(0, 9).append(".");
}

void PhoneBook::search()
{
    if (contacts[0].empty)
    {
        std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
        std::cout << RED << "               No contacts available!"<< RESET << std::endl ;
        std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl ;
        return ;
    }
    std::cout << GREEN << std::endl << " INDEX    |FIRST NAME|LAST NAME |NICKNAME  " << RESET << std::endl << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << GREEN << "  #" << contacts[i].index << RESET << "      ";
        std::cout << "|";
        std::cout << formated(contacts[i].firstname);
        std::cout << "|";
        std::cout << formated(contacts[i].lastname);
        std::cout << "|";
        std::cout << formated(contacts[i].nickname);
        std::cout << std::endl;
    }
    std::cout << BRIGHT_CYAN << std::endl << "----------------------------------------------------------" << RESET << std::endl ;
    searchByIndex();
}

void PhoneBook::searchByIndex()
{
    std::string index;
    int num = 0;

    while (true)
    {
        std::cout << "Enter contact Index: ";
        getline(std::cin, index);
        std::stringstream ss(index);
        ss >> num;

        if (num <= 0 || num > count)
        {
            std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET <<std:: endl ;
            std::cout << RED << "               Invalid index!" << RESET << std::endl;
            std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
            continue ;
        }
        else
        {
            contacts[num - 1].getContact();
            return ;
        }
    }
    return ;
}

void PhoneBook::printHeader(std::string type)
{
    if (type.compare("phonebook") == 0)
    {
        std::cout << CYAN;
        std::cout << "  ______ _                     ______             _    \n";
        std::cout << "  | ___ \\ |                    | ___ \\           | |   \n";
        std::cout << "  | |_/ / |__   ___  _ __   ___| |_/ / ___   ___ | | __\n";
        std::cout << "  |  __/| '_ \\ / _ \\| '_ \\ / _ \\ ___ \\/ _ \\ / _ \\| |/ /\n";
        std::cout << "  | |   | | | | (_) | | | |  __/ |_/ / (_) | (_) |   < \n";
        std::cout << "  \\_|   |_| |_|\\___/|_| |_|\\___\\____/ \\___/ \\___/|_|\\_\\\n";
        std::cout << RESET;
    }
    std::cout << std::endl;
}

// void PhoneBook::fillTestContacts()
// {
//     contacts[0] = Contact(1, "Alice", "Smith", "Ally");
//     contacts[1] = Contact(2, "Bob", "Johnson", "Bobby");
//     contacts[2] = Contact(3, "Charlie", "Brown", "Chuck");
//     contacts[3] = Contact(4, "Diana", "Prince", "Di");
//     contacts[4] = Contact(5, "Ethan", "Hunt", "E");
//     contacts[5] = Contact(6, "Fiona", "Gallagher", "Fi");
//     contacts[6] = Contact(7, "George", "Martin", "Geo");
//     contacts[7] = Contact(8, "Hannah", "Baker", "Han");

//     count = 8;
// }