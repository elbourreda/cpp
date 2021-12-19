/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 02:55:31 by rel-bour          #+#    #+#             */
/*   Updated: 2021/12/19 00:59:36 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void set_fname(std::string fname);
		void set_l_name(std::string lname);
		void set_nick_name(std::string nickname);
		void set_phone_number(std::string phonenumber);
		void set_darkest_secret(std::string darkestsecret);
		std::string get_fname();
		std::string get_l_name();
		std::string get_nick_name();
		std::string get_phone_number();
		std::string get_darkest_secret();
};

#endif