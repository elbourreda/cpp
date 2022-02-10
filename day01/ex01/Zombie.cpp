/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:55:08 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/05 03:26:36 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie::Zombie(std::string Name){
// 	this->name = Name;
// }

void Zombie::setName(std::string Name){
	this->name = Name;
}

Zombie::~Zombie(){
	std::cout << this->name << ": Has been destroyed" << std::endl;
}

Zombie::Zombie(){

}