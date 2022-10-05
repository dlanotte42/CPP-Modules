/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:12 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 20:04:13 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculateArea(Point const &a, Point const &b, Point const &c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

void test (Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "Checking the following point: " << point << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "This point lies INSIDE of a triangle" << std::endl;
	else
		std::cout << "This point lies OUTSIDE of a triangle" << std::endl;
}

int main(){
	Point a(0.9, 2);
	Point b(5, 2);
	Point c(5, 6.7);

	std::cout << "point a: " << a << std::endl;
	std::cout << "point b: " << b << std::endl;
	std::cout << "point c: " << c << std::endl << std::endl;

	std::cout << "area of a triangle: " << calculateArea(a, b, c) << std::endl << std::endl;

	Point Point1(3, 2.1);
	Point Point2(5, 6.7);
	Point Point3(3, 1.9);

	std::cout << "=====================================" << std::endl;
	test(a, b, c, Point1);
	std::cout << "=====================================" << std::endl;
	test(a, b, c, Point2);
	std::cout << "=====================================" << std::endl;
	test(a, b, c, Point3);
	std::cout << "=====================================" << std::endl;

	return 0;
}