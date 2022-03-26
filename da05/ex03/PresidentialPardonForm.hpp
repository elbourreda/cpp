#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &instance);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm & operator = (const PresidentialPardonForm &instance);
		virtual void formExec(Bureaucrat const & executor) const;
};

#endif