#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &instance)
{
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    *this = instance;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &instance)
{
    std::cout << "Bureaucrat Assignment Operator called" << std::endl;
    return (*this);
}