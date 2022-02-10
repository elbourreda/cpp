/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:26:21 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 10:03:48 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP


#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std::string Name, Weapon &wpn);
		void attack();
};

#endif