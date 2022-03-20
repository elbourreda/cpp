#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	// protected:

	private:
		const std::string name;
		int grade; // that ranges from 1 (highest possible grade) to 150 (lowest possible grade).
		
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &instance);
		~Bureaucrat();
		Bureaucrat & operator = (const Bureaucrat &instance);
};

#endif