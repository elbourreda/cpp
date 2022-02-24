/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inherit.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:32:05 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/23 16:38:54 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <iostream>
#include <ostream>

using namespace std;

// class Animal {
// public:
//     Animal();
//     Animal(string name, int heads, int legs);
//     ~Animal();
//     Animal(const Animal& src);                // Copy constructor
//     Animal& operator=(const Animal& rhs);     // Assignment overload

//     string get_name() const;                 // Returns reference to private _name.
//     void    move() const;
// private:
//     string _name;                       // Name will be accessible only from parent class.
// private:
//     int _legs;
//     int _heads;
// };

// class Snake : public Animal{
// public:
//     Snake(string name, int heads, int legs, int venom_deadliness);
//     ~Snake();
//     Snake(const Snake& src);
//     Snake& operator=(const Snake& rhs);

//     void    move() const;               // Replaces parent move();
// protected:
//     int _venom_deadliness;
// private:
//     Snake();                            // Hidden default, we don't need it.
// };


// // ANIMAL STUFF             ANIMAL STUFF //

// Animal::Animal(){}

// Animal::Animal(string name, int heads, int legs) : _name(name), _heads(heads), _legs(legs)
// {
//     cout << "Animal created, named " << name << ", " << heads << " head(s), " << legs << " legs." << endl;
// }

// Animal::~Animal()
// {
//     cout << "Animal Destroyed." << endl;
// }

// string Animal::get_name() const
// {
//     return (this->_name);
// }

// Animal& Animal::operator=(const Animal& rhs)
// {
//     cout << "Animal (=) overload." << endl;
//     this->_name = rhs.get_name();
//     this->_heads = rhs._heads;
//     this->_legs = rhs._legs;
//     return (*this);
// }

// Animal::Animal(const Animal& src)
// {
//     cout << "Animal copy constructor" << endl;
//     *this = src;
// }

// void    Animal::move() const
// {
//     cout << _name << " moves like a generic animal." << endl;
// }


// //  SNAKE STUFF             SNAKE STUFF  //
// Snake::Snake(){}

// Snake::Snake(string name, int heads, int legs, int venom_deadliness) : Animal(name, heads, legs)  // This is a how a specific parent constructor is called.
// {
//     this->_venom_deadliness = venom_deadliness;
//     cout << "Snake constructor called. Venom level: " << venom_deadliness << endl;
// }

// Snake::~Snake()
// {
//     cout << "Snake destructor." << endl;
// }

// Snake&  Snake::operator=(const Snake& rhs)
// {
//     cout << "Snake overload" << endl;
//     this->_venom_deadliness = rhs._venom_deadliness;
//     Animal::operator=(rhs);
//     return (*this);
// }

// Snake::Snake(const Snake& src)
// {
//     cout << "Snake copy constructor" << endl;
//     *this = src;
// }

// void    Snake::move() const
// {
//     cout << this->get_name() << " moves like snake. Normal move() replaced." << endl;
// }

// int main(void)
// {
//     // {
//     //     Animal will("Will", 1, 4);

//     //     will.move();
//     //     cout << "Animal name: " << will.get_name() << endl;
//     //     {
//     //         Animal copy(will);
//     //     }
//     //     {
//     //         Animal copy = will;
//     //     }
//     // }

//     {
//         Snake bob("Bob", 1, 0, 1);

//         bob.move();         // Replaced Animal move
//         cout << "Inherits get_name(): " << bob.get_name() << endl;
//         {
//             Snake copy(bob);
//         }
//         {
//             Snake copy = bob;
//         }
//     }
//     return (0);
// }




class base
{
	protected:
	public:
		int x;
		void pp()
		{
			cout << "wach al 7biba from ==> base class\n";
		}
};

class childs : private base
{
	public:
		void pp()
		{
			x = 10;
			cout << x << " wach al 7biba from ==> derived classs\n";
		}
};

class malo : private childs
{
	public:
		void op()
		{
			// x = 10;
			// cout << x << " wach al 7biba from ==> derived classs\n";
		}
};

int main()
{
	childs *o = new childs;
	o->pp();

	malo y;

	y.op();
}