/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:26:15 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/24 14:29:04 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called" << std::endl;
	this->Name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = clp;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &clp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = clp.Name;
	this->HitPoints = clp.HitPoints;
	this->EnergyPoints = clp.EnergyPoints;
	this->AttackDamage = clp.AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->HitPoints != 0 && this->EnergyPoints != 0)
	{
		this->EnergyPoints--;
		this->HitPoints -= this->AttackDamage;
		std::cout << "ClapTrap " << this->Name << " attacks ";
		std::cout << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else 
		std::cout << "There is no hit points or energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints != 0 && this->EnergyPoints != 0)
	{
		this->HitPoints -= amount;
		// 
		std::cout << "ClapTrap " << this->Name << " take Damage ";
		std::cout << amount << " hit points!" << std::endl;
	}
	else 
		std::cout << "There is no hit points or energy points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints != 0 && this->EnergyPoints != 0)
	{
		this->EnergyPoints--;
		this->HitPoints += amount;
		std::cout << "ClapTrap " << this->Name << " gets ";
		std::cout << amount << " hit points back!" << std::endl;
	}
	else 
		std::cout << "There is no hit points or energy points left" << std::endl;
}
