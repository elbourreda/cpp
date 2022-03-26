#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// ShrubberyCreationForm 	sing = 145 	exec = 137
// RobotomyRequestForm 		sing = 72 	exec = 45
// PresidentialPardonForm 	sing = 25 	exec = 5

int main()
{
	try
	{
		Bureaucrat ins("ShrubberyCreation", 137);
		Form *form = new ShrubberyCreationForm("HOME");
		std::cout << std::endl;
		ins.signForm(*form);
		std::cout << std::endl;
		form->execute(ins);
		std::cout << std::endl << *form << std::endl << std::endl;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;

	try
	{
		Bureaucrat ins("RobotomyRequestForm", 45);
		Form *form = new RobotomyRequestForm("John");
		std::cout << std::endl;
		ins.signForm(*form);
		std::cout << std::endl;
		form->execute(ins);
		std::cout << std::endl << *form << std::endl << std::endl;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	try
	{
		Bureaucrat ins("PresidentialPardonForm", 45);
		Form *form = new PresidentialPardonForm("John");
		std::cout << std::endl;
		ins.signForm(*form);
		std::cout << std::endl;
		form->execute(ins);
		std::cout << std::endl << *form << std::endl << std::endl;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	return (0);
}
