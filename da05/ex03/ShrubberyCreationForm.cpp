#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm Para Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &instance)
{
    std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
    *this = instance;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &instance)
{
    std::cout << "ShrubberyCreationForm Assignment Operator called" << std::endl;
	(void)instance;
    return (*this);
}

void DoneForm(std::string target)
{
	std::string filename = target + "_shrubbery";
	std::ofstream file(filename);
	
	file << "     ccee88oo\n";
	file << "  C8O8O8Q8PoOb o8oo\n";
	file << " dOB69QO8PdUOpugoO9bD\n";
	file << "CgggbU8OU qOp qOdoUOdcb\n";
	file << "    6OuU  /p u gcoUodpP\n";
	file << "      \\\\//  /douUP\n";
	file << "        \\\\////\n";
	file << "         |||/\\\n";
	file << "         |||\\/\n";
	file << "         |||||\n";
	file << "   ...../||||\\....\n";
	file.close();
}

void ShrubberyCreationForm::formExec(Bureaucrat const & executor)  const
{
	if (executor.getGrade() > this->getGradeToExecute()) // check
	{
		throw (Form::ReqToExecException());
	}
	DoneForm(this->getName());
}
