/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:50:35 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:50:36 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), empty(true) {

}

void PhoneBook::welcome()
{
    std::cout << CYAN << "               What would you like to do?"<< RESET << std::endl ;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl ;
    std::cout << GREEN << "ADD:" << RESET << "<ADD> Add new contact" << std::endl;
    std::cout << GREEN << "SEARCH:" << RESET << "<SEARCH> Find contact by Indez" << std::endl;
    std::cout << GREEN << "EXIT:" << RESET << "<EXIT> Exit PhoneBook" << std::endl;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
}

void PhoneBook::addContact()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone;
    std::string darkestSecret;

    while (true)
    {
        std::cout << "Enter first name: ";
        getline(std::cin, firstname);
        if (!firstname.empty()) break;
        std::cout << RED << "First name cannot be empty!" << RESET << std::endl;
    }

    while (true)
    {
        std::cout << "Enter last name: ";
        getline(std::cin, lastname);
        if (!lastname.empty()) break;
        std::cout << RED << "Last name cannot be empty!" << RESET << std::endl;
    }

    while (true)
    {
        std::cout << "Enter nickname: ";
        getline(std::cin, nickname);
        if (!nickname.empty()) break;
        std::cout << RED << "Nickname cannot be empty!" << RESET << std::endl;
    }

    while (true)
    {
        std::cout << "Enter phone: ";
        getline(std::cin, phone);
        if (!phone.empty()) break;
        std::cout << RED << "Phone cannot be empty!" << RESET << std::endl;
    }

    while (true)
    {
        std::cout << "Enter darkest secret: ";
        getline(std::cin, darkestSecret);
        if (!darkestSecret.empty()) break;
        std::cout << RED << "Darkest secret cannot be empty!" << RESET << std::endl;
    }

    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
    std::cout << GREEN << "                Contact created!" << RESET << std::endl;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;

    int index = count % 8;
    this->contacts[index] = Contact(index + 1, firstname, lastname, nickname, phone, darkestSecret);

    if (count < 8)
        count++;
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
    if (this->empty)
    {
        std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
        std::cout << RED << "               No contacts available!"<< RESET << std::endl ;
        std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl ;
        return ;
    }
    std::cout << GREEN << std::endl << " INDEX    |FIRST NAME|LAST NAME |NICKNAME  " << RESET << std::endl << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << GREEN << "  #" << contacts[i].getIndex() << RESET << "      ";
        std::cout << "|";
        std::cout << formated(contacts[i].getValue("firstname"));
        std::cout << "|";
        std::cout << formated(contacts[i].getValue("lastname"));
        std::cout << "|";
        std::cout << formated(contacts[i].getValue("nickname"));
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

void PhoneBook::fillTestContacts()
{
    this->empty = false;
    contacts[0] = Contact(1, "Alice", "Smith", "Ally", "Ally", "Ally");
    contacts[1] = Contact(2, "Bob", "Johnson", "Bobby", "Ally", "Ally");
    contacts[2] = Contact(3, "Charlie", "Brown", "Chuck", "Ally", "Ally");
    contacts[3] = Contact(4, "Diana", "Prince", "Di", "Ally", "Ally");
    contacts[4] = Contact(5, "Ethan", "Hunt", "E", "Ally", "Ally");
    contacts[5] = Contact(6, "Fiona", "Gallagher", "Fi", "Ally", "Ally");
    contacts[6] = Contact(7, "George", "Martin", "Geo", "Ally", "Ally");
    contacts[7] = Contact(8, "Hannah", "Baker", "Han", "Ally", "Ally");

    count = 8;
}