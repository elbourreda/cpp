/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:56:16 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/19 00:57:14 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string norm_output(std::string str)
{
	std::string tmp;

	if (str.length() > 10)
	{
		tmp = str.substr(0, 10);
		tmp[9] = '.';
		return (tmp);
	}
	return (str);
}

void PhoneBook::display_contacts(int len)
{
	int d = 0;
	std::cout << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "First Name|";
	std::cout << std::setw(11) << "Last Name|";
	std::cout << std::setw(11) << "Nickname|" << std::endl;
	while (d < len)
	{
		std::cout << std::setw(10) << d << "|";
		std::cout << std::setw(10) << norm_output(contact[d].get_fname()) << "|";
		std::cout << std::setw(10) << norm_output(contact[d].get_l_name()) << "|";
		std::cout << std::setw(10) << norm_output(contact[d].get_nick_name()) << "|" << std::endl; 
		d++;
	}
}
int check_whitspace(std::string s)
{
	int i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' ) )
		i++;
	if (s[i])
		return (1);
	return (0);
}

std::string ft_getline(std::string prompt)
{
	std::string input;
	std::cout << prompt;
	while (std::getline(std::cin, input))
	{
		if (!input.empty() && check_whitspace(input))
			break;
		std::cout << prompt;
	}
	return (input);
}

int not_digit(std::string s)
{
	int i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t') )
		i++;
	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

std::string ft_getline_phone(std::string prompt)
{
	std::string input;
	std::cout << prompt;
	while (std::getline(std::cin, input))
	{
		if (!input.empty() && check_whitspace(input) && not_digit(input))
			break;
		std::cout << prompt;
	}
	return (input);
}

int PhoneBook::add_contact(int len)
{
		std::string input;
		std::cout << "\nEnter This information:\n";

		input = ft_getline("First Name: ");
		contact[len].set_fname(input);

		input = ft_getline("Last Name: ");
		contact[len].set_l_name(input);

		input = ft_getline("Nickname: ");
		contact[len].set_nick_name(input);

		input = ft_getline_phone("Phone Number: ");
		contact[len].set_phone_number(input);

		input = ft_getline("Darkest Secret: ");
		contact[len].set_darkest_secret(input);

		std::cout << "\n\033[1;31mYou have been add new contact ...\033[0m\n\n";
		++len;
		return (len);
}

int index_valid(int d_len)
{
	std::string input;
	std::cout << "\n\nIndex => ";
	std::getline(std::cin, input);
	if (input[0] == '\0' || input[1] != '\0')
	{
		std::cout << "\n\033[1;31mInvalid index\033[0m\n\n" ;
		return (-1);
	}
	int indx = int(input[0] - '0');
	if (indx > 7 || indx >= d_len)
	{
		std::cout << "\n\033[1;31mInvalid index\033[0m\n\n" ;
		return (-1);
	}
	return (indx);
}

void PhoneBook::select_index(int d_len)
{
	while (1)
	{
		int i = index_valid(d_len);
		if (i == -1)
			break;
		std::cout << "\nThe contact’s information" << std::endl;
		std::cout << "\nFirst Name: "  << contact[i].get_fname() << std::endl;
		std::cout << "Last Name: " << contact[i].get_l_name() << std::endl;
		std::cout << "Nickname: " << contact[i].get_nick_name() << std::endl;
		std::cout << "Phone Number: " << contact[i].get_phone_number() << std::endl;
		std::cout << "Darkest Secret: " << contact[i].get_darkest_secret() << std::endl;
	}
}