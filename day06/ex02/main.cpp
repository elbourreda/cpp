/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:14:28 by rel-bour          #+#    #+#             */
/*   Updated: 2022/03/26 11:58:12 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		virtual ~Base( void ){}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if ((a) != NULL)
	{
		std::cout << "A\n";
	}
	else
	{
		B *b = dynamic_cast<B*>(p);
		if ((b) != NULL)
		{
			std::cout << "B\n";
		}
		else
		{
			std::cout << "C\n";
		}
	}

	

	
}

void identify(Base& p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (std::bad_cast &e)
	{
		try 
		{
			B &a = dynamic_cast<B&>(p);
			std::cout << "B\n";
		}
		catch (std::bad_cast &e)
		{
			std::cout << "C\n";
		}
	}
}

Base * generate(void)
{
	srand(time(NULL));
	int index = rand() % 3;
	Base *p;
	switch (index)
	{
		case 0:
			p = new A;
			break;
		case 1:
			p = new B;
			break;
		case 2:
			p = new C;
			break;
	}
	return (p);
}



int main()
{
	Base *p = generate();
	
	Base &ref = *p;

	// identify(ref);
	identify(p);

}