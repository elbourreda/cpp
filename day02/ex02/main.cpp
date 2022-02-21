#include "Fixed.hpp"

int main()
{
    Fixed a ( 15 );
    Fixed b ( 10 );

	Fixed c = a - b;
	std::cout << a << " + " << b << " = " << c << std::endl;

    return 0;
}