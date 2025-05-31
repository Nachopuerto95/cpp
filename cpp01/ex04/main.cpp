/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:04:51 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:05:55 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/sedIsForLosers.h"



int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Invalid num of args" << std::endl;
        return 1;
    }

    std::ifstream infile(av[1]);
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (!infile.is_open())
    {
        std::cerr << "Error opening infile" << std::endl;
        return 1;
    }

    std::string outname = std::string(av[1]) + ".replace";
    std::ofstream outfile(outname.c_str());

    sedIsForLosers(infile, outfile, s1, s2);

    outfile.close();
    infile.close();
    return 0;
}
