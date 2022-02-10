/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 04:26:25 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 03:36:02 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char *av[])
{
	if (error_handler(ac, av) == -1)
		return (1);

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	
	std::ifstream ifile(filename);
	std::ofstream ofile(filename + ".replace");
	
	while (std::getline(ifile, line))
	{
		line = ft_replace(line,s1,s2);
		ofile << line << std::endl;
	}

	ofile.close();
	ifile.close();
}