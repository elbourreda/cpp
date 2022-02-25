/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:27:22 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/24 14:42:04 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define  SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(ScavTrap &opj);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap &ScavTrap);

		ScavTrap(std::string name);
};


ScavTrap::ScavTrap()
{
	
}

ScavTrap::ScavTrap(ScavTrap &opj)
{
	
}

ScavTrap::~ScavTrap()
{
	
}

ScavTrap & ScavTrap::operator=(ScavTrap &ScavTrap)
{
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	
}
#endif // !