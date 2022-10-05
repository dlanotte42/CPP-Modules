/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:49:22 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/05 19:49:50 by zxcvbinz         ###   ########.fr       */
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
		int getRawBits(void) const;
		void setRawBits(int const x);
		Fixed &operator=(Fixed const &copy_class);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(Fixed const &copy);
		~Fixed(void);
};

std::ostream &operator<<(std::ostream &out, const Fixed &a);

#endif