/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto <jpuerto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:09:57 by jpuerto           #+#    #+#             */
/*   Updated: 2025/05/31 13:09:58 by jpuerto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const& copy );
		~Fixed();

		Fixed &		operator=( Fixed const &src );
		int getRawBits(void)const;
		void setRawBits(int const raw);

	private:
		int _value;
		static const int _fbits;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif