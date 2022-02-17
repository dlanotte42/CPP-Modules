/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:54:48 by dlanotte          #+#    #+#             */
/*   Updated: 2022/02/17 00:13:08 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span{

	private:
		const unsigned int	size;
		std::vector<int>	vect;

	public:
		Span();
		Span( Span const & src );
		Span( unsigned int n );
		~Span();
		Span &		operator=( Span const & rhs );
		
		std::vector<int>	getList( void ) const;
		void				addNumber(int const number);
		unsigned int		longestSpan( void ) const;
		unsigned int		shortestSpan( void ) const;	

		
		class ExceptionNoN: public std::exception {
			const char * what() const throw() {
				return ("[Console][Error]: Empty value");
			}
		};

		class ExceptionOneN: public std::exception {
			const char * what() const throw() {
				return ("[Console][Error]: One element found");
			}
		};
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif