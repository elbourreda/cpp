#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
	this->_target = "NoTarget";
	this->_sing = 145;
	this->_exec = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;

	this->_target = target;
	this->_sing = 145;
	this->_exec = 137;
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

    this->_target = instance._target;
	this->_sing   = instance._sing;
	this->_exec   = instance._exec;
    return (*this);
}

void DoneForm(std::string target)
{
	std::string filename = target + "__shrubbery";
	std::ofstream file(filename);
	// writes ASCII trees inside it
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
	if (executor.getGrade() > this->getGradeToExecute())
	{
		// throw exeption
		// this computer does not meet minimum requirements
		throw (Form::GradeTooLowException());
	}
	DoneForm(this->_target); // getTarget() need;

	// call function to drow an asscii tree in the output
	// Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it

}
