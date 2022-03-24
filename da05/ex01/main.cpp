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
	return (0);
}