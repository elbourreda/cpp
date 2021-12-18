/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 02:50:41 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/18 05:39:20 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void exit_program()
{
	std::cout << "Exit\n";
	exit(0);
}

int main()
{
	PhoneBook ph_book;
	std::string option;

	system("clear");
	std::cout << "Welcome To My Awesome PhoneBook: \n\n";
	
	int len = 0;
	int d_len = len;

	std::cout << " - ADD\n - SEARCH\n - EXIT\n\nChoose an option : ";
	while (std::getline(std::cin, option))
	{
		if (option.compare("EXIT") == 0)
			exit_program();
		else if (option.compare("ADD") == 0)
		{
			len = ph_book.add_contact(len);
			if (d_len < 8)
				d_len++;
			if (len == 8)
				len = 0;
		}
		else if (option.compare("SEARCH") == 0)
		{
			ph_book.display_contacts(d_len);
			ph_book.select_index(d_len);
		}
		else
		{
			std::cout << "\033[1;31mINVALID INPUT\nChoose a correct one ....\033[0m\n\n";
			std::cout << " - ADD\n - SEARCH\n - EXIT\n\nChoose an option : ";
			continue;
		}
		std::cout << " - ADD\n - SEARCH\n - EXIT\n\nChoose an option : ";
	}
	return (0);
}
