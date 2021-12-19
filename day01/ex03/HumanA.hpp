/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 07:13:40 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/19 07:45:51 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon weapon;
	public:
		void attack()
		{
			std::cout << name << " attacks with his " << weapon.getType() << std::endl;  
		}
		
};

#endif