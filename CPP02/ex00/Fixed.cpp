/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:23:00 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/29 21:17:24 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	this->int_store = 0;
	std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = src;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destrutor called" <<std::endl;
}

Fixed &	Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operation called" << std::endl;
	int_store = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return(this->int_store);
}

void Fixed::setRawBits(int const raw)
{
	this->int_store = raw;
}