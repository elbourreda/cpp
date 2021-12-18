/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 02:56:24 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/18 02:58:37 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_fname(std::string fname)
{
	f_name = fname;
}

void Contact::set_l_name(std::string lname)
{
	l_name = lname;
}

void Contact::set_nick_name(std::string nickname)
{
	nick_name = nickname;
}

void Contact::set_phone_number(std::string phonenumber)
{
	phone_number = phonenumber;
}

void Contact::set_darkest_secret(std::string darkestsecret)
{
	darkest_secret = darkestsecret;
}

std::string Contact::get_fname()
{
	return (f_name);
}

std::string Contact::get_l_name()
{
	return (l_name);
}

std::string Contact::get_nick_name()
{
	return (nick_name);
}

std::string Contact::get_phone_number()
{
	return (phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (darkest_secret);
}
