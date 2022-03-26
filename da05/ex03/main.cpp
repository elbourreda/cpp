#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// ShrubberyCreationForm 	sing = 145 	exec = 137
// RobotomyRequestForm 		sing = 72 	exec = 45
// PresidentialPardonForm 	sing = 25 	exec = 5

int main()
{
	try
	{
		Intern intern;
		Bureaucrat ins("ShrubberyCreation", 137);
		Form *form = intern.makeForm("shrubbery creation", "Home");
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
		Intern intern;
		Bureaucrat ins("RobotomyRequestForm", 45);
		Form *form = intern.makeForm("robotomy request", "John");
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
		Intern intern;
		Bureaucrat ins("PresidentialPardonForm", 5);
		Form *form = intern.makeForm("presidential pardon", "Richard Nixon");
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
		Intern intern;
		Bureaucrat ins("WrongBuureu", 5);
		Form *form = intern.makeForm("WrongCreation", "target");
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
