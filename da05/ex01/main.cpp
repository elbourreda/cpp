#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat ins("DvLottery", 10);
		Form form("Ds-2160", 30, 30);
		form.beSigned(ins);
	}
	catch (Form::GradeTooLowException &fLow)
	{
		std::cout << "test1";
	}
	catch (Form::GradeTooHighException &fHigh)
	{
		std::cout << "test2";
	}
	return (0);
}