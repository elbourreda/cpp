/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:39:46 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/07 23:22:26 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{

	// // heap
	Zombie *NewZombie = newZombie("New Zombie");
	NewZombie->announce();
	
	delete (NewZombie);

	// // stack
	// randomChump("Random Zombie");
}