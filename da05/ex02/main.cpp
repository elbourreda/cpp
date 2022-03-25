#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat ins("ShrubberyCreation", 1);
		Form *form = new ShrubberyCreationForm("HOME");
		std::cout << std::endl;
		form->beSigned(ins);
		ins.signForm(*form);
		form->execute(ins);
		std::cout << std::endl;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	return (0);
}
