#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int  			_gradeRequired;
		const int			_gradeToExecute;
		bool  				_isSigned;
	public:

		Form(void);						 // const variables need to initial list
		Form(const Form &instance);		 // const variables need to initial list
		virtual ~Form();
		Form & operator = (const Form &instance);
		Form(std::string name, int gRequired, int gExecute);
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw();
		};
		class UnsignedFormException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		const std::string  getName() const ;
		const int  		   getGradeRequired() const ;
		const int		   getGradeToExecute() const ;
		bool  			   getIsSigned() const ;

		void beSigned(Bureaucrat &bureaucrat);


		//ex02
		void execute(Bureaucrat const & executor) const;
		virtual void formExec(Bureaucrat const & executor) const = 0;
		// virtual void formExec() const = 0;

};

std::ostream &	operator<<( std::ostream & ostr, Form const & instance);

#endif