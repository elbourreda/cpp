/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:33:38 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/25 16:48:59 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define  FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(std::string const & name);
	FragTrap(FragTrap &opj);
	~FragTrap();
	FragTrap & operator=(FragTrap &FragTrap);
	// FragTrap(std::string name);
	void attack(const std::string& target);

	void highFivesGuys(void);

};





#endif // !FRAGTRAP_HPP