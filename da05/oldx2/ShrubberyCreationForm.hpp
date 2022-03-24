#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

// * (int) sing = 145
// * (int) exec = 137

class ShrubberyCreationForm : public Form
{
	private:
		int 		_sing;
		int 		_exec;
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &instance);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &instance);
		virtual void formExec(Bureaucrat const & executor) const;
};

#endif