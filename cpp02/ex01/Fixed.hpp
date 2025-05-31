/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:14:09 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:14:10 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &		operator=( Fixed const &src );

		float toFloat( void ) const;
		int toInt( void ) const;
		int	getRawBits(void)const;

	private:
		int _value;
		static const int _fbits;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif