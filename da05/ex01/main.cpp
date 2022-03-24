#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat ins("DvLottery", 30);
		Form form("Ds-260", 30, 30);
		form.beSigned(ins);
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
		Bureaucrat ins("Immigration", 30);
		Form form("IMM-5257", 35, 10);
		form.beSigned(ins);
		std::cout << std::endl;
		ins.signForm(form);
		std::cout << std::endl << form << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	/// more test needs
	return (0);
}