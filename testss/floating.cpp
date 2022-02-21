#include <iostream>
#include <bitset>
#include <cassert>
#include <iostream>
#include <cmath>

class ovrld 
{
	public:
		ovrld()
		{
			std::cout << "default cons\n";
		}
		~ovrld()
		{
			std::cout << "distrac \n";
		}
		ovrld& operator= (ovrld &ne)
		{
			std::cout << "operator \n";
			return (*this);
		}
};

std::ostream & operator<<(std::ostream & outpt, ovrld &i)
{
	outpt << 101;
	return (outpt);
}
int main(int argc, const char** argv) 
{

	// float a = 89.16;
	// unsigned long n = a * (1 << 8);

    // std::cout << std::bitset<16>(n).to_string() << "\n";
    // std::cout << std::bitset<16>(n) << "\n";
	// std::cout << std::bitset<16>(n / (1 << 8)) << std::endl;
	// // std::cout << std::bitset<16>((n >> 8)) << std::endl;
	// std::cout << std::bitset<16>((n >> 8)) << std::endl;


	// ovrld ex;

	// std::cout << ex << "\n";


	// constant floating-point number
	float const x = 42.4200;
	std::cout << x << "\n" ;
	// // printf("%f\n", x);
	// // converts it to fixed-point 
	// int value = roundf (x * (1 << 8)); 
	// std::cout << value << "\n" ;


	// float ret = (float)value / (float)(1 << 8);
	// std::cout << ret ;
	return 0;
}	
