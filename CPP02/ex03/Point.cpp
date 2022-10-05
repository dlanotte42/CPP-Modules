/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:51 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 20:05:33 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){return;}

Point::Point(float const x,float const y): _x(Fixed(x)), _y(Fixed(y)){return;};

Point::Point(Point const &copy): _x(copy._x), _y(copy._y){
	return;
}

Point::~Point(){return;}
//Getter

Fixed const &Point::getX(void) const{
	return this->_x;
}

Fixed const &Point::getY(void) const{
	return this->_y;
}

//Operator

Point &Point::operator=(Point const &){
	return (*this);
}

bool Point::operator==(Point const &p) const{
	return ((this->_x.toFloat() == p.getX().toFloat()) && (this->_y.toFloat() == p.getY().toFloat()));
}

std::ostream &operator<<(std::ostream &out, Point const &point){
	out << "x = " << point.getX() << " y = " << point.getY();
	return out;
}