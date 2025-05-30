#include <iostream>
#include "PhoneBook.hpp"

int main() {
    std::string command;
    PhoneBook book;
    
    book.printHeader("phonebook");
    while (true) 
    {
        book.welcome();
        std::cout << "Enter command: ";
        if (!getline(std::cin, command))
            break;
        if (command == "EXIT")
        {
            std::cout << BRIGHT_CYAN  << "----------------------------------------------------------" << RESET << std::endl ;
            std::cout << GREEN << "               Bye!  " << RESET << std::endl ;
            std::cout << BRIGHT_CYAN  << "----------------------------------------------------------" << RESET << std::endl ;
            break;
        }
        else if (command == "ADD")
        {
            if (book.count < 8)
                book.count++;
            book.contacts[book.count - 1] = book.addContact(book.count - 1);
        }
        else if (command == "SEARCH")
           book.search();
    }
    return 0;
}