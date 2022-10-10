/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:18:26 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:18:26 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	ScavTrap::_name = "** default name **";
	ScavTrap::_hitpoints = 100;
	ScavTrap::_energyPoints = 50;
	ScavTrap::_attackDamage = 20;
	std::cout << "SCAVTRAP CONSTRUCTOR: " << this->_name << " constructor has been called" << std::endl; 
	return;
}

ScavTrap::ScavTrap(std::string newName){
	ScavTrap::_name = newName;
	ScavTrap::_hitpoints = 100;
	ScavTrap::_energyPoints = 50;
	ScavTrap::_attackDamage = 20;
	std::cout << "SCAVTRAP CONSTRUCTOR: " << this->_name << " constructor has been called" << std::endl; 
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "SCAVTRAP DESTRUCTOR: " << this->_name << " has been destroyed" << std::endl;
	return;
}

void ScavTrap::attack(std::string const &target){
	std::cout << std::endl << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	return;
}

void ScavTrap::guardGate(){
	std::cout << this->_name << " ScavTrap has entered the Gate keeper mode!" << std::endl << std::endl;
	return;
}