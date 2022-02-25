/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:28:59 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/24 14:29:14 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP 


#include <iostream>


class ClapTrap
{
	private:
		std::string Name;
		int HitPoints; // Hit points (10)
		int EnergyPoints;// Energy points (10)
		int AttackDamage;// Attack damage (0)
	public:
		ClapTrap();
		ClapTrap(ClapTrap &clp);
		ClapTrap &operator=(ClapTrap const &clp);
		~ClapTrap();
		
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};



#endif // !1
