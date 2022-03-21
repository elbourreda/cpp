#ifndef FORM_HPP
# define FORM_HPP
// public:
// 				const char* what() const throw();
#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
	private:
		const std::string	_name;
		const int  			_gradeRequired;
		const int			_gradeToExecute;
		bool  				_isSigned;
		Bureaucrat x;
	public:

		Form(void);						 // const variables need to initial list
		Form(const Form &instance);		 // const variables need to initial list
		~Form();
		Form & operator = (const Form &instance);
		Form(std::string name, int gRequired, int gExecute);
		void beSigned(Bureaucrat &bureaucrat);

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

		const std::string  getName() const ;
		const int  		   getGradeRequired() const ;
		const int		   getGradeToExecute() const ;
		bool  			   getIsSigned() const ;

};



std::ostream &	operator<<( std::ostream & ostr, Form const & instance);

#endif