/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:05:36 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 10:07:33 by rel-bour         ###   ########.fr       */
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

	std::cout << "\nDisplaying The String " << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR  << std::endl;
	std::cout << stringREF << std::endl;
	
}