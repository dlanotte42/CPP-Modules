/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:22:57 by dlanotte          #+#    #+#             */
/*   Updated: 2022/10/05 19:45:18 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

	private:
		int _value;
		static const int _bits = 8;
	
	public:
		int getRawBits(void) const;
		void setRawBits(int const x);
		Fixed &operator=(Fixed const &copy_class);
		Fixed();
		Fixed(Fixed const &copy);
		~Fixed(void);
};

#endif