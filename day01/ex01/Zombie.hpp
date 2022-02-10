/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:42:57 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/05 03:26:20 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		// Zombie(std::string Name);
		~Zombie();
		void announce( void );
		void setName(std::string Name);
};

