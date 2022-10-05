/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:38 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 20:05:30 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <cmath>


class Point{

	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(Point const &p);
		Point(float const x, float const y);
		~Point();

		Fixed const &getX(void) const;
		Fixed const &getY(void) const;

		Point &operator=(Point const &x);
		bool operator==(Point const &p) const;

};	

std::ostream &operator<<(std::ostream &out, Point const &point);

#endif