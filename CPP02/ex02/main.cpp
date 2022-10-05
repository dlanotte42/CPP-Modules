/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:55:09 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 19:55:28 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	
	Fixed a;
	Fixed const b (Fixed(5.05f) * Fixed(2));

	//Fixed d (Fixed(5.05f) * Fixed(2));
	//Fixed c (Fixed(23.4f) / Fixed(3.5f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	//std::cout << "d < c: " << (d < c) << std::endl;
	//std::cout << "d > c: " << (d > c) << std::endl;
	//std::cout << "d <= c: " << (d <= c) << std::endl;
	//std::cout << "d >= c: " << (d >= c) << std::endl;
	//std::cout << "d != c: " << (d != c) << std::endl;
	//std::cout << "d == c: " << (d == c) << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}