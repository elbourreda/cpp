/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_Constr.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:14:29 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/16 18:21:32 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class TEST
{
	private:
	public:
		const  int static  ptr = 10;
		TEST () 
		{
			std::cout << "default contractor\n";
			// int(ptr) = 10;
			std::cout << ptr << "\n";
		}
};

int main ( void )
{
	TEST a;

	return (0);
}