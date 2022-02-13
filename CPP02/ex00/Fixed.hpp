/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:22:57 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/29 21:13:13 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);

		Fixed &	operator=(Fixed const &src);

		int	getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int					int_store;
		const static int	static_store;
};

#endif