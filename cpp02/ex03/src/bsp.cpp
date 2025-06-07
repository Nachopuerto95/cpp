/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 09:37:55 by jpuerto           #+#    #+#             */
/*   Updated: 2025/06/07 11:25:23 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

static float getArea(const Point p1, const Point p2, const Point p3)
{
    float part1 = p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat());
    float part2 = p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat());
    float part3 = p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat());
    float result = (part1 + part2 + part3) / 2;

    return (result >= 0) ? result : result * -1;
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    float areaABC = getArea(a, b, c);
    float area1 = getArea(point, a, b);
    float area2 = getArea(point, b, c);
    float area3 = getArea(point, a, c);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;
    return ((area1 + area2 + area3) == areaABC);
}
