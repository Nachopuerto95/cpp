/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:13:58 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 10:37:07 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);

    Point inside(1.0f, 1.0f);
    Point edge(0.0f, 2.5f);
    Point vertex(0.0f, 0.0f);
    Point outside(6.0f, 6.0f);

    std::cout << "Inside:  " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Edge:    " << bsp(a, b, c, edge) << std::endl;
    std::cout << "Vertex:  " << bsp(a, b, c, vertex) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
}
