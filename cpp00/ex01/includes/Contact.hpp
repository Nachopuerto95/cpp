/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:50:26 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:50:27 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#define RESET "\033[0m"
#define BRIGHT_CYAN "\033[96m"
#define GREEN "\033[32m"

#include <iostream>

class Contact
{
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phone;
        std::string _darkestSecret;
        int _index;
    public:
        Contact();
        Contact(int index, std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darkestSecret);
        std::string getValue(std::string value);
        void getContact();
        int getIndex();
};

#endif