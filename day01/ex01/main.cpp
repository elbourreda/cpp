/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:39:46 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/06 00:10:22 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

Zombie* zombieHorde( int N, std::string name ){

	Zombie *Zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		Zombies[i].setName(name);
	return (Zombies);
}

int main()
{
	Zombie* test1 = zombieHorde(3, "reda");

	for (int i = 0; i < 3; i++)
		test1[i].announce();

}