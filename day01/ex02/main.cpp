/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 06:24:05 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/19 06:35:04 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string  *stringPTR = &str;
	std::string  &stringREF = str;

	std::cout << "the address in memory: " << std::endl;
	
	std::cout << "the string:      " << &str << std::endl;
	std::cout <<  "the stringPTR:   "<< stringPTR << std::endl;
	std::cout << "the stringREF:   " << &stringREF <<  std::endl;

	std::cout << "Displaying The String " << std::endl;
	std::cout << *stringPTR << &str << std::endl;
	std::cout << stringREF << &str << std::endl;
	
}