#include "Bureaucrat.hpp"

int main()
{
	{
		try 
		{
			Bureaucrat x("test1", -1);
			std::cout << x << "\n";
			x.increment();
		}
		catch (Bureaucrat::GradeTooHighException & High)
		{
			std::cout << High.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & Low)
		{
			std::cout << Low.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		try 
		{
			Bureaucrat x("test2", 151);
			std::cout << x << "\n";
			x.decrement();
		}
		catch (Bureaucrat::GradeTooHighException & High)
		{
			std::cout << High.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & Low)
		{
			std::cout << Low.what() << std::endl;
		}
	}

	std::cout << std::endl;
	{
		try 
		{
			Bureaucrat x("test3", 0);
			std::cout << x << "\n";
		}
		catch (Bureaucrat::GradeTooHighException & High)
		{
			std::cout << High.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & Low)
		{
			std::cout << Low.what() << std::endl;
		}
	}


	std::cout << std::endl;
	{
		try 
		{
			Bureaucrat x("test4", 151);
			std::cout << x << "\n";
		}
		catch (Bureaucrat::GradeTooHighException & High)
		{
			std::cout << High.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & Low)
		{
			std::cout << Low.what() << std::endl;
		}
	}

	return (0);
}