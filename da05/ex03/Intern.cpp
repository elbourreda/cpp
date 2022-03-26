#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{

}

Intern::Intern(const Intern &instance)
{
    *this = instance;
}

Intern::~Intern()
{

}

Intern & Intern::operator = (const Intern &instance)
{
    return (*this);
}

const char* Intern::FormNotExistException::what() const throw()
{
	return ("The Form name doesn't exist");
}


Form *robotomyrequest(std::string target)
{
	Form *robotomyform = new RobotomyRequestForm(target);

	return (robotomyform);
}

Form *shrubberycreation(std::string target)
{
	Form *shrubberyform = new ShrubberyCreationForm(target);

	return (shrubberyform);
}

Form *presidentialpardon(std::string target)
{
	Form *presidentialpardonform = new PresidentialPardonForm(target);

	return (presidentialpardonform);
}

Form* Intern::makeForm(std::string FormName, std::string target)
{
	std::string forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (*Pforms[3])(std::string) = {&robotomyrequest, &shrubberycreation, &presidentialpardon};

	int index = -1;
	for (int i = 0; i < 3; i++)
	{
		while (!forms[i].compare(FormName))
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		throw Intern::FormNotExistException();
	}
	std::cout << "Intern creates " << forms[index] << std::endl;
	return ((Pforms[index](target)));
}