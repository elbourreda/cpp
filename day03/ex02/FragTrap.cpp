/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:33:34 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/25 16:50:19 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &opj)
{
    std::cout << "FragTrap copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap &FragTrap)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->Name = FragTrap.Name;
	this->HitPoints = FragTrap.HitPoints;
	this->EnergyPoints = FragTrap.EnergyPoints;
	this->AttackDamage = FragTrap.AttackDamage;
	return (*this);
}

FragTrap::FragTrap(std::string const & name)  : ClapTrap(name) 
{
    std::cout << "FragTrap Name Constructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
	if (this->HitPoints != 0 && this->EnergyPoints != 0)
	{
		this->EnergyPoints--;
		// this->HitPoints -= this->AttackDamage;
		std::cout << "FragTrap " << this->Name << " attacks ";
		std::cout << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else 
		std::cout << "There is no hit points or energy points left" << std::endl;
}


void highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
}