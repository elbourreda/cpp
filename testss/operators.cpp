#include <iostream>


class tests
{
	private:
		int x;
	public:
	
};

std::ostream &operator<<(std::ostream &o, tests const &x)
{
	o << "hello";
	return (o);
}

int main()
{
	tests x;

	std::cout << x;
}