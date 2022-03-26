#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;

	if ( grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else if ( grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	this->_grade = grade;
}

const std::string Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void  Bureaucrat::increment()
{
	if (this->_grade <= 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	else
	{
		this->_grade--;
	}
}

void  Bureaucrat::decrement()
{
	if (this->_grade >= 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		this->_grade++;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The Grade is Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Grade is Too Low");
}


std::ostream & operator<<(std::ostream & out, Bureaucrat const &B)
{
	out << B.getName() << ", bureaucrat grade " << B.getGrade();
	return (out);
}

void Bureaucrat::signForm(Form &F) 
{
	try {
			F.beSigned(*this);
			if (F.getIsSigned())
			{
				std::cout << this->_name << " signed " << F.getName() << std::endl;
			}
			else
			{
				throw (Form::UnsignedFormException());
			}
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn’t sign " <<  F.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName(); 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
