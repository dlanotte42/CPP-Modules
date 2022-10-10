/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:26:01 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:26:02 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(){
	FlagTrap::_name = "** default name **";
	FlagTrap::_hitpoints = 100;
	FlagTrap::_energyPoints = 100;
	FlagTrap::_attackDamage = 30;
	std::cout << "FLAGTRAP CONSTRUCTOR: " << this->_name << " constructor has been called" << std::endl; 
	return;
}

FlagTrap::FlagTrap(std::string newName): ClapTrap(newName){
	FlagTrap::_hitpoints = 100;
	FlagTrap::_energyPoints = 100;
	FlagTrap::_attackDamage = 30;
	std::cout << "FLAGTRAP CONSTRUCTOR: " << this->_name << " constructor has been called" << std::endl; 
	return;
}

FlagTrap::~FlagTrap(){
	std::cout << "FLAGTRAP DESTRUCTOR: " << this->_name << " has been destroyed" << std::endl;
	return;
}

void FlagTrap::highFivesGuys(){
	std::cout << this->_name << " FlagTrap Gimme FIVE!" << std::endl << std::endl;
	return;
}