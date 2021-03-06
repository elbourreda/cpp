/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:47:32 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/25 16:38:08 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		/* data */
	public:
		ScavTrap();
		ScavTrap(ScavTrap &opj);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap &ScavTrap);

		ScavTrap(std::string name); /// &&&&& ref galha aziz (google it) + const ref o 9ra o zid 9ra lkosala
		void attack(const std::string& target);

		// void getHp(void){
		// 	std::cout << "Hit Points = " << this->HitPoints << std::endl;
		// }
		void guardGate();
};

#endif
