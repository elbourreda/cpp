#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &instance);
		~Intern();
		Intern & operator = (const Intern &instance);
		// Form* makeForm(std::string FormName, std::string target)
		void makeForm(std::string FormName, std::string target);
		class FormNotExistException : public std::exception
		{
			public:
				const char * what() const throw();
		};
};

#endif