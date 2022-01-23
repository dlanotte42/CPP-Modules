/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:54:21 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 08:18:48 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}

Weapon::Weapon(std::string type)
{
	_type = type;
}

void	Weapon::setType(std::string	type)
{
	_type = type;
}

const std::string &Weapon::getType(void)
{
	return _type;
}
