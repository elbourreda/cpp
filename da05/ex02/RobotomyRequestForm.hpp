#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &instance);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm & operator = (const RobotomyRequestForm &instance);
		virtual void formExec(Bureaucrat const & executor) const;
};

#endif