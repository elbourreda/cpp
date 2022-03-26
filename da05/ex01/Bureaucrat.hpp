#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
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
		void signForm(Form &F);
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const &B);

#endif