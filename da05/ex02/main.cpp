#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat ins("DvLottery", 30);
		Form *form = new ShrubberyCreationForm("HOME");
		
		std::cout << std::endl;
		delete form; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	return (0);
}