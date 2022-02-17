/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:47:41 by dlanotte          #+#    #+#             */
/*   Updated: 2022/02/17 00:52:05 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(): std::stack<T>() { };

		iterator begin() { return(std::stack<T>::c.begin()); }
		iterator end() { return(std::stack<T>::c.end()); }
		
		MutantStack &operator=(const MutantStack &stack) {
			std::stack<T>::operator=(stack);
			return *this;
		};

		MutantStack(const MutantStack &stack){
			*this = stack;	
		};
		~MutantStack() { };

};

#endif