/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:52:05 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:52:05 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FlagTrap(), _name("** default name **"){
	this->_hitpoints = FlagTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FlagTrap::_attackDamage;
	std::cout << "DIAMONDTRAP CONSTRUCTOR: " << this->_name << " def. constructor has been called" << std::endl; 
	
}

DiamondTrap::DiamondTrap(std::string newName): ClapTrap(newName + "_clap_name"), ScavTrap(newName), FlagTrap(newName), _name(newName){
	this->_hitpoints = FlagTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FlagTrap::_attackDamage;

	std::cout << "DIAMONDTRAP CONSTRUCTOR: " << this->_name << " param. constructor has been called" << std::endl; 
}


DiamondTrap::~DiamondTrap(){
	std::cout << "DIAAMONDTRAP DESTRUCTOR: " << this->_name << " has been destroyed" << std::endl;
	return;
}

void DiamondTrap::whoAmI(){
	std::cout << "----------" << std::endl;
	std::cout << "Who Am I?" << std::endl
	<< "I am DiamondTrap and my name is: " << this->_name << std::endl;
	std::cout << "My Claptrap name is: " << DiamondTrap::ClapTrap::_name << std::endl;
	std::cout << "----------" << std::endl;
	return;
}
