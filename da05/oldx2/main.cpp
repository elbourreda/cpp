#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

// ShrubberyCreationForm sing = 145 exec = 137
// RobotomyRequestForm sing = 72 exec = 45
// PresidentialPardonForm sing = 25 exec = 5

int main()
{
	try
	{
		Bureaucrat ins("ShrubberyCreation", 143);
		Form *form = new ShrubberyCreationForm("HOME");
		
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		
		form->beSigned(ins);
		std::cout << std::endl;
		std::cout << std::endl;
		
	


		std::cout << std::endl;
		// delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	return (0);
}
