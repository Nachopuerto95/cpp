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