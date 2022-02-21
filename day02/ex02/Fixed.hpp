/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:02:54 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/21 19:17:48 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int value;
		static const int nb_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &F);
		~Fixed();
		Fixed & operator=(Fixed const & F);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		// ex01 
			Fixed(const int nb);
			Fixed(const float nb);
			float toFloat( void ) const;
			int toInt( void ) const;
		//ex02
			bool operator==(const Fixed  & F)
			{
				return (this->value == F.value);
			}
			bool operator!=(const Fixed  & F)
			{
				return (this->value != F.value);
			}
			bool operator>(const Fixed  & F)
			{
				return (this->value > F.value);
			} 
			bool operator<(const Fixed  & F) 
			{
				return (this->value < F.value);
			}
			bool operator>=(const Fixed  & F)
			{
				return (this->value >= F.value);
			} 
			bool operator<=(const Fixed  & F) 
			{
				return (this->value <= F.value);
			}
			Fixed operator+(Fixed const & F)
			{
				Fixed result;

				result.value = this->value + F.value;
				return (result);
			}
			Fixed operator-(Fixed const & F)
			{
				Fixed result;

				result.value = this->value - F.value;
				return (result);
			}
			Fixed operator*(Fixed const & F)
			{
				Fixed result;

				result.value = this->value * F.value;
				return (result);
			}
			Fixed operator/(Fixed const & F)
			{
				Fixed result;

				result.value = this->value / F.value;
				return (result);
			}
};

// insertion operator
std::ostream &operator<<(std::ostream &out, Fixed const &F);

#endif
