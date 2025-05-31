/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:54:35 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 12:54:36 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "ADDRESS: " << std::endl;
    std::cout << &str << std::endl;
    std::cout << strPTR << std::endl;
    std::cout << &strREF << std::endl << std::endl;

    std::cout << "VALUE: " << std::endl;
    std::cout << str << std::endl;
    std::cout << *strPTR << std::endl;
    std::cout << strREF << std::endl << std::endl;
}