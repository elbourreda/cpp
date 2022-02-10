/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:49:27 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/10 04:05:34 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level );
};

