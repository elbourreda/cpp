#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

// * * (int) sing = 72
// * * (int) exec = 45

RobotomyRequestForm::RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
	this->_target = "NoTarget";
	this->_sing = 72;
	this->_exec = 45;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;

	this->_target = target;
	this->_sing = 72;
	this->_exec = 45;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance)
{
    std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
    *this = instance;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &instance)
{
    std::cout << "RobotomyRequestForm Assignment Operator called" << std::endl;

    this->_target = instance._target;
	this->_sing   = instance._sing;
	this->_exec   = instance._exec;
    return (*this);
}

void RobotomyRequestForm::formExec(Bureaucrat const & executor)  const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		// throw exeption
		// this computer does not meet minimum requirements
		throw (Form::GradeTooLowException());
	}

	// call function to 
	// Makes some drilling noises. Then, informs that <target> has been robotomized successfully 50% of the time. Otherwise, informs that the robotomy failed.
}