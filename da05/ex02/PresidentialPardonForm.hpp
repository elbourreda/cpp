#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

// * (int) sing = 145
// * (int) exec = 137

class PresidentialPardonForm : public Form
{
	private:
		int 		_sing;
		int 		_exec;
		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &instance);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm & operator = (const PresidentialPardonForm &instance);
		virtual void formExec(Bureaucrat const & executor) const;
};

#endif