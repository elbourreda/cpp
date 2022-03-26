#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat ins("DvLottery", 10);
		Form form("Ds-260", 30, 20);
		std::cout << std::endl;
		ins.signForm(form);
		std::cout << std::endl << form << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat ins("Immigration", 100);
		Form form("IMM-5257", 90, 10);
		std::cout << std::endl;
		ins.signForm(form);
		std::cout << std::endl << form << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	return (0);
}