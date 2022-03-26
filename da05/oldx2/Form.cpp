#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gRequired, int gExecute) : _name(name), _gradeRequired(gRequired), _gradeToExecute(gExecute)
{
    std::cout << "Para Form Constructor called" << std::endl;
	this->_isSigned = false;
}

Form::Form(void) : _name("NoName"), _gradeRequired(-1), _gradeToExecute(-1)
{
	std::cout << "Form Constructor called" << std::endl;
	this->_isSigned = false;
}

Form::Form(const Form &F) : _name(F._name), _gradeRequired(F._gradeRequired), _gradeToExecute(F._gradeToExecute)
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
	/// here ndiro chi print 
	out << "Name : " << instance.getName() << std::endl;
	out << "is signed : " << instance.getIsSigned() << std::endl;
	out << "grade required to sign it : " << instance.getGradeRequired() << std::endl;
	out << "grade required to execute it : " << instance.getGradeToExecute();
	return out;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
		//  |V	|  - Bureaucrat as parameter. 
		//  |V	|  - It changes the form status to signed if the bureaucrat’s grade is high enough
		//  |V	|  - (higher or egal to the required one).
		//  |V	|  - Remember, grade 1 is higher than grade 2.
		//  |V	|  - If the grade is too low, throw a Form::GradeTooLowException
		// if (bureaucrat.getGrade() <= this->getGradeRequired())
		// if (this->getGradeRequired() <= bureaucrat.getGrade())

		std::cout << "b = " << bureaucrat.getGrade() << std::endl;
		std::cout << "f = " << this->getGradeRequired() << std::endl;

		if (bureaucrat.getGrade() <= this->_gradeRequired)
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
	return (this->_gradeRequired);
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
		// throw ex
		throw (Form::UnsignedFormException());
	}
	// call the other function
	this->formExec(executor);	
}

const char* Form::UnsignedFormException::what() const throw()
{
	return ("The Form is not Signed");
}

const char* Form::UnsignedFormException::what() const throw()
{
	return ("The Form is not Signed");
}