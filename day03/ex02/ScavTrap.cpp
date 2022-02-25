/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:47:29 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/25 16:29:21 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &opj)
{
    std::cout << "ScavTrap copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap &ScavTrap)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->Name = ScavTrap.Name;
	this->HitPoints = ScavTrap.HitPoints;
	this->EnergyPoints = ScavTrap.EnergyPoints;
	this->AttackDamage = ScavTrap.AttackDamage;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    std::cout << "ScavTrap Name Constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
	if (this->HitPoints != 0 && this->EnergyPoints != 0)
	{
		this->EnergyPoints--;
		// this->HitPoints -= this->AttackDamage;
		std::cout << "ScavTrap " << this->Name << " attacks ";
		std::cout << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else 
		std::cout << "There is no hit points or energy points left" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}