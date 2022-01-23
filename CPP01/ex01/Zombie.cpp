/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:07:35 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 07:18:01 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) 
{
	std::cout << this->_name << " is dead" <<std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << _name <<"> " <<"BraiiiiiiinnnzzzZ..." <<std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}
