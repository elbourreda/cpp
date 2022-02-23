/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:00:25 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/23 12:21:25 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap player1("player1");
	ClapTrap player2("player2");
	player1.attack("player2");
	player1.takeDamage(5);
	player1.beRepaired(10);
	player2.attack("player1");
	player2.beRepaired(4);
	player2.takeDamage(10);
	
	return (0);
}