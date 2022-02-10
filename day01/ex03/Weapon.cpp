/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:59:36 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 10:00:07 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

const std::string Weapon::getType()
{
	return (this->type);
}

void Weapon::setType( std::string Type )
{
	this->type = Type;
}

Weapon::Weapon(std::string Type)
{
	this->type = Type;
}