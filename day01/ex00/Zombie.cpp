/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 05:11:21 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/19 05:53:02 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
	name = Name;
}

Zombie::~Zombie()
{
	std::cout << name << " This is a debugging message" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}