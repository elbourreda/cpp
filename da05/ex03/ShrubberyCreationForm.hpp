#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &instance);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &instance);
		virtual void formExec(Bureaucrat const & executor) const;
};

#endif