#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
#include "../includes/Fixed.hpp"

class Point
{

	public:
		Point();
		Point(const Fixed &x, const Fixed &y);
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & rhs );

		const Fixed	&getX(void)const;
		const Fixed	&getY(void)const;

	private:
		const Fixed _x;
		const Fixed _y;
};

std::ostream &			operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */