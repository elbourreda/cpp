/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:27:21 by rel-bour          #+#    #+#             */
/*   Updated: 2021/11/29 09:54:14 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void upper_char(char **av)
{
	for (int i = 1; av[i]; i++)
		for(int j = 0; av[i][j]; j++)
			std::cout << (char)toupper(av[i][j]);
	std::cout << "\n";
}

int main(int ac, char *av[])
{
	if (ac > 1)
		upper_char(av);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}