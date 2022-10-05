/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:55:06 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 19:55:57 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::getRawBits() const{
	return (_value);
}

void	Fixed::setRawBits(int const x){
		_value = x;
}

Fixed::Fixed(Fixed const &copy){
	*this = copy;	
}

Fixed::Fixed(){
	this->_value = 0;
}

Fixed::Fixed(const int val){
	_value = val * (1 << Fixed::_bits);
}

Fixed::Fixed(const float val){
	_value = (int)(roundf(val * (1 << _bits)));
}

Fixed::~Fixed(){
}

float		Fixed::toFloat(void) const {

	return ((float)this->_value / (float)(1 << _bits));
}

int		Fixed::toInt(void) const {

	return (this->_value / (1 << _bits));
}

//Operatori Semplici

Fixed Fixed::operator+(const Fixed &a){
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed &a){
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed &a){
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed &a){
	return Fixed(this->toFloat() / a.toFloat());
}

Fixed &Fixed::operator=(Fixed const &copy_class){
	this->_value = copy_class.getRawBits();
	return *this;
}

//Incremento e decremento

Fixed &Fixed::operator++(){
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed before(*this);
	this->_value++;
	return before;
}

Fixed &Fixed::operator--(){
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed before(*this);
	this->_value--;
	return before;
}

//Comparazione

bool Fixed::operator<(const Fixed &a){
	return this->_value < a.getRawBits();
}
bool Fixed::operator>(const Fixed &a){
	return this->_value > a.getRawBits();
}
bool Fixed::operator<=(const Fixed &a){
	return this->_value <= a.getRawBits();
}
bool Fixed::operator>=(const Fixed &a){
	return this->_value >= a.getRawBits();
}
bool Fixed::operator!=(const Fixed &a){
	return this->_value != a.getRawBits();
}
bool Fixed::operator==(const Fixed &a){
	return this->_value == a.getRawBits();
}

//Min -- Max

Fixed &Fixed::min(Fixed &nbr_1, Fixed &nbr_2){
	return nbr_1 < nbr_2 ? nbr_1 : nbr_2;
}

Fixed &Fixed::max(Fixed &nbr_1, Fixed &nbr_2){
	return nbr_1 > nbr_2 ? nbr_1 : nbr_2;
}

const Fixed &Fixed::min(Fixed const &nbr_1, Fixed const &nbr_2){
	return nbr_1.getRawBits() < nbr_2.getRawBits() ? nbr_1 : nbr_2;
}

const Fixed &Fixed::max(Fixed const &nbr_1, Fixed const &nbr_2){
	return nbr_1.getRawBits() > nbr_2.getRawBits() ? nbr_1 : nbr_2;
}

//Output

std::ostream &operator<<(std::ostream &out, const Fixed &a){
	out << a.toFloat();
	return out;
}