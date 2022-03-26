#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

// * (int) sing = 25
// * (int) exec = 5

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
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
	(void)instance;
    return (*this);
}

void PresidentialPardonForm::formExec(Bureaucrat const & executor)  const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw (Form::ReqToExecException());
	}
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}