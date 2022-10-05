/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:27 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 20:04:27 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculateArea(Point const &a, Point const &b, Point const &c){
	return ((((a.getX().toFloat() * b.getY().toFloat()) - (b.getX().toFloat() * a.getY().toFloat())) +
			((b.getX().toFloat() * c.getY().toFloat()) - (c.getX().toFloat() * b.getY().toFloat())) +
			((c.getX().toFloat() * a.getY().toFloat()) - (a.getX().toFloat() * c.getY().toFloat())))/2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float totalArea = calculateArea(a, b, c);
	float area1 = calculateArea(a, b, point);
	float area2 = calculateArea(a, point, c);
	float area3 = calculateArea(point, b, c);

	if (((area1 + area2 + area3) > totalArea) || (point == a) || (point == b) || (point == c))
		return false;
	else
		return true;
}