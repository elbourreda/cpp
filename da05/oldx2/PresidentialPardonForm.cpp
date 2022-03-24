#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

// * (int) sing = 25
// * (int) exec = 5

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
	this->_target = "NoTarget";
	this->_sing = 25;
	this->_exec = 5;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;

	this->_target = target;
	this->_sing = 25;
	this->_exec = 5;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance)
{
    std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    *this = instance;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &instance)
{
    std::cout << "PresidentialPardonForm Assignment Operator called" << std::endl;

    this->_target = instance._target;
	this->_sing   = instance._sing;
	this->_exec   = instance._exec;
    return (*this);
}

void PresidentialPardonForm::formExec(Bureaucrat const & executor)  const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw (Form::GradeTooLowException());
	}
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}