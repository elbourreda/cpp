/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 04:26:25 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 08:11:44 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		Karen Instance;
		Instance.complain(av[1]);
	}
}