/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:54:19 by dlanotte          #+#    #+#             */
/*   Updated: 2022/02/17 00:44:13 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(0) { }

Span::Span( const Span & src ): size(src.size), vect(src.vect) { }

Span::Span( unsigned int n): size(n) { }

Span::~Span() { }

Span &				Span::operator=( Span const & rhs )
{
	(void)(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & meow, Span const & i )
{
	std::vector<int>	list = i.getList();
	std::vector<int>::iterator it = list.begin();
	
	while(it != list.end())
	{
		std::cout << "{";
		std::cout << *it;
		if (it + 1 != list.end())
			std::cout << " ; ";
		std::cout << "}";
		it++;
	}
	return meow;
}

unsigned int	Span::shortestSpan(void) const
{
	if (!vect.size())
		throw ExceptionNoN();
	else if (vect.size() == 1)
		throw ExceptionOneN();
	std::vector<int>	list(vect);
	unsigned int		span = longestSpan();

	std::sort(list.begin(), list.end());
	std::vector<int>::iterator i = list.begin();
	while(i < list.end() - 1)
	{
		if (static_cast<unsigned int>(*(i + 1) - *i) < span)
			span = *(i + 1) - *i;
		i++;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	if (!vect.size())
		throw ExceptionNoN();
	else if (vect.size() == 1)
		throw ExceptionOneN();
	std::vector<int>	list(vect);

	std::sort(list.begin(), list.end());
	return (*(list.end() - 1) - *list.begin());
}

void	Span::addNumber(int const nb)
{
	if (vect.size() >= size)
		throw ExceptionNoN();
	vect.push_back(nb);
}

std::vector<int>	Span::getList(void) const
{
	return (vect);
}