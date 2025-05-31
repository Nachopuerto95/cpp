/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:50:32 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:50:34 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(int index, std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darkestSecret)
{
    this->_index = index;
    this->_firstname = firstname;
    this->_lastname = lastname;
    this->_nickname = nickname;
    this->_phone = phone;
    this->_darkestSecret = darkestSecret;
}

void Contact::getContact()
{
    std::cout << BRIGHT_CYAN <<  "----------------------------------------------------------" << RESET << std::endl ;
    std::cout << GREEN << "               Contact info"<< RESET << std::endl ;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
    std::cout << GREEN << "INDEX:       " << RESET << _index << std::endl ;
    std::cout << GREEN << "FIRST NAME: " << RESET <<  _firstname<< std::endl;
    std::cout << GREEN << "LAST NAME:  " << RESET <<  _lastname<< std::endl;
    std::cout << GREEN << "NICK NAME:  " << RESET <<  _nickname << std::endl;
    std::cout << GREEN << "PHONE NUMBER:  " << RESET <<  _phone << std::endl;
    std::cout << GREEN << "DARKEST SECRET:  " << RESET <<  _darkestSecret << std::endl;
    std::cout << BRIGHT_CYAN << "----------------------------------------------------------" << RESET << std::endl;
    return ;
}

int Contact::getIndex()
{
    return this->_index;
}

std::string Contact::getValue(std::string value)
{
    if (value == "firstname")
        return this->_firstname;
    if (value == "lastname")
        return this->_lastname;
    if (value == "nickname")
        return this->_nickname;
    if (value == "phone")
        return this->_phone;
    if (value == "secret")
        return this->_darkestSecret;
    else
        return "Invalid input on getValue";
}

