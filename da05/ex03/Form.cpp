#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gRequired, int gExecute) : _name(name), _gradeToSign(gRequired), _gradeToExecute(gExecute)
{
    std::cout << "Para Form Constructor called" << std::endl;
	this->_isSigned = false;
}

Form::Form(void) : _name("NoName"), _gradeToSign(-1), _gradeToExecute(-1)
{
	std::cout << "Form Constructor called" << std::endl;
	this->_isSigned = false;
}

Form::Form(const Form &F) : _name(F._name), _gradeToSign(F._gradeToSign), _gradeToExecute(F._gradeToExecute)
{
    std::cout << "Form Copy Constructor called" << std::endl;
    *this = F;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form & Form::operator = (const Form &instance)
{
    std::cout << "Form Assignment Operator called" << std::endl;
    this->_isSigned = instance._isSigned;
    return (*this);
}

std::ostream &	operator<<( std::ostream & out, Form const & instance)
{
	out << "Name : " << instance.getName() << std::endl;
	out << "is signed : " << std::boolalpha << instance.getIsSigned() << std::endl;
	out << "grade required to sign it : " << instance.getGradeRequired() << std::endl;
	out << "grade required to execute it : " << instance.getGradeToExecute();
	return out;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
		if (bureaucrat.getGrade() <= this->_gradeToSign)
		{
			this->_isSigned = true;
		}
		else
		{
			throw (Form::GradeTooLowException());
		}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The Grade is Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The Grade is Too Low");
}

const std::string  Form::getName() const
{
	return (this->_name);
}

const int  		   Form::getGradeRequired() const
{
	return (this->_gradeToSign);
}

const int		   Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool  			   Form::getIsSigned() const
{
	return (this->_isSigned);
}

void Form::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
	{
		throw (Form::UnsignedFormException());
	}
	this->formExec(executor);	
	std::cout << "The Form executed successfully" << std::endl;
}

const char* Form::UnsignedFormException::what() const throw()
{
	return ("The Form is not Signed");
}

const char* Form::ReqToExecException::what() const throw()
{
	return ("Couldn't Execute The form because The Grade is Too Low");
}