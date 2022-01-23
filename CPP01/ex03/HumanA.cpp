/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:59:43 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 08:09:38 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {} 

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " <<_weapon.getType() <<std::endl;
}
