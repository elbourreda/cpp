/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:00:25 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/22 19:20:48 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap player1("cl4p-tp1");
	ClapTrap player2("cl4p-tp2");
	
	player1.attack("cl4p-tp2");
	player1.beRepaired(10);
	player1.takeDamage(5);
	return (0);
}