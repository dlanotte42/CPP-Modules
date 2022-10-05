/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:05:13 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 20:05:14 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed{

	private:
		int _value;
		static const int _bits = 8;
	
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(Fixed const &copy);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const x);
		
		float toFloat(void) const;
		int toInt(void) const;
		
		bool operator<(const Fixed &a);
		bool operator>(const Fixed &a);
		bool operator<=(const Fixed &a);
		bool operator>=(const Fixed &a);
		bool operator!=(const Fixed &a);
		bool operator==(const Fixed &a);

		Fixed operator+(const Fixed &a);
		Fixed operator-(const Fixed &a);
		Fixed operator*(const Fixed &a);
		Fixed operator/(const Fixed &a);

		Fixed &operator=(Fixed const &copy_class);
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &nbr_1, Fixed &nbr_2);
		static Fixed &max(Fixed &nbr_1, Fixed &nbr_2);
		static const Fixed &min(Fixed const &nbr_1, Fixed const &nbr_2);
		static const Fixed &max(Fixed const &nbr_1, Fixed const &nbr_2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &a);

#endif