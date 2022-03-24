#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void ShrubberyCreationForm::formExec(Bureaucrat const & executor)  const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		// throw exeption
		// this computer does not meet minimum requirements
		throw (Form::GradeTooLowException());
	}

	// call function to drow an asscii tree in the output
}