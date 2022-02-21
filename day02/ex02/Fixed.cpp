/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:02:51 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/21 17:44:05 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(Fixed const &F) {  
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
}

Fixed & Fixed::operator=(Fixed const & F)  {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = F.getRawBits();
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    return (this->value);
}

void Fixed::setRawBits( int const raw ) {
    this->value = raw;
}

Fixed::Fixed(const int nb) 
{
    this->value = roundf(nb << this->nb_bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) 
{
    this->value = roundf (nb * (1 << this->nb_bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void )  const{ 
    return ((float)this->value / (float)(1 << this->nb_bits));

}

int Fixed::toInt( void ) const { 
    return (this->value / (1 << this->nb_bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &F){
    out << F.toFloat();
    return (out);
}
