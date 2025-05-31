/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:50:38 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:50:39 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/PhoneBook.hpp"

int main() {
    std::string command;
    PhoneBook book;
    
    book.printHeader("phonebook");
    // book.fillTestContacts();
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
            book.addContact();
        }
        else if (command == "SEARCH")
           book.search();
    }
    return 0;
}