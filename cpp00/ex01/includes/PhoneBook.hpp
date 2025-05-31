/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:50:29 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:50:30 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    private:
        Contact contacts[8];
        int count;
        bool empty;

    public:
        PhoneBook();
        void search();
        void addContact();
        void searchByIndex();
        void printHeader(std::string type);
        void welcome();

        void fillTestContacts();
};

#endif
