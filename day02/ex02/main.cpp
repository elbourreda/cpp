#include "Fixed.hpp"

int main()
{
    // Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // Fixed b ( 10 );

	// Fixed c = a - b;
	// std::cout << a << " + " << b << " = " << c << std::endl;

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	std::cout << Fixed( 5 ) * Fixed( 2 ) << std::endl;
    return 0;
}