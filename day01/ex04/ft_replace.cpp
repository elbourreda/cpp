/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:34:04 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 03:46:57 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int error_handler(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "INVALID INPUT" << std::endl;
		return (-1);
	}
	else
	{
		std::fstream isfile;
		isfile.open(av[1]);
		if (isfile.fail ())
		{
			std::cout << "file not found" << std::endl;
			return (-1);
		}

	}
	return (0);
}

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
	size_t i = 0;
	std::string buff = "";
	if (line.find(s1) != std::string::npos)
		while (1)
		{
			
			std::string f_part = line.substr(0, line.find(s1));
			std::string l_part = line.substr(line.find(s1) + s1.size());
			buff = buff + f_part + s2;
			i = l_part.find(s1);
			if (i == std::string::npos)
			{
				line = buff + l_part;
				break;
			}
			else
				line = l_part;
		}
	return (line);
}