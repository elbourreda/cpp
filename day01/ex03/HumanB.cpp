/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:01:40 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 10:01:55 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name)
{
	this->name = Name;
}

void HumanB::setWeapon(Weapon &wpn)
{
	this->weapon = &wpn;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}