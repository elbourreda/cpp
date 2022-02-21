#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int nb_bits = 8;
	public:
		Fixed();
		Fixed(Fixed &F);
		~Fixed();
		Fixed & operator=(Fixed const & F);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
