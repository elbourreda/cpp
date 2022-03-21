#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade; // that ranges from 1 (highest possible grade) to 150 (lowest possible grade).
		
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &instance);
		~Bureaucrat();
		Bureaucrat & operator = (const Bureaucrat &instance);

		Bureaucrat(std::string name, int grade);
		const std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		// Define New Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const &B);

#endif