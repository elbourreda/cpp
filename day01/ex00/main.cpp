/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 05:02:40 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/19 05:56:40 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie zombie("ZOMBIE_CLASS");
	zombie.announce();
	
	Zombie *new_zombie = newZombie("New_ZOMBIE");
	new_zombie->announce();
	
	randomChump("Random_ZOMBIE");

	delete new_zombie;
}