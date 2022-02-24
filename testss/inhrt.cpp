/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inhrt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:46:10 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/23 16:04:03 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

// base class
class Animal {
private:
	int _numberOfLegs;

public:
	Animal(); 								// default constructor 
	Animal(Animal const &);					// copy constructor
	Animal& operator=(Animal const &);		// assingment operator (=) overload
	~Animal();								// distructor


	void call();
	void eat(std::string const & what);
	void walk(int distance);


	void run(int distance);
};


// It means that Cat is an animal
// public inheritance
class Cat : public Animal {

public:
	Cat();								// default constructor
	Cat(Cat const &);					// copy constructor			
	Cat& operator=(Cat const &);		// assingment operator (=) overload					
	~Cat();								// distructor

	void scornSomeone(std::string const & target);

};

class Pony : public Animal {

public:
	Pony();
	Pony(Pony const &);
	Pony& operator=(Pony const &);
	~Pony();

	void doMagic(std::string const & target);
	
	void run(int distance); // it will replace the animal function
};