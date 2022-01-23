/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:11:07 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 08:14:46 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {};

HumanB::~HumanB(void) {};

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his ";
	if (_weapon == NULL)
		std::cout << "fist" <<std::endl;
	else
		std::cout << this->_weapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}