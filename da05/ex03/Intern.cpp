#include "Intern.hpp"

class Form;

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
	// Form *robotomyform = new RobotomyRequestForm(target);
	Form *robotomyform;

	return (robotomyform);
}

Form *shrubberycreation(std::string target)
{
	// Form *robotomyform = new ShrubberyCreationForm(target);
	Form *shrubberyform;

	return (shrubberyform);
}

Form *presidentialpardon(std::string target)
{
	// Form *robotomyform = new PresidentialPardonForm(target);
	Form *presidentialpardonform;

	return (presidentialpardonform);
}

void Intern::makeForm(std::string FormName, std::string target)
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
		// print an explicit error message.
		throw Intern::FormNotExistException();
	}
	std::cout << "Intern creates " << forms[index] << std::endl;
	// (*Pforms[index])();
	// return (p_forms[index])
}