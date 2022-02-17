/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:42:28 by dlanotte          #+#    #+#             */
/*   Updated: 2022/02/16 23:44:50 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <vector>
#include <iostream>
#include <iterator>

template<typename T>

typename T::iterator easyfind(T &container, int element)
{
	return std::find(container.begin(), container.end(), element);
}

#endif