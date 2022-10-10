/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:15:15 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:15:16 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("_"), _hitpoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor has been called" << std::endl; 
	return;
}

ClapTrap::ClapTrap(std::string const newName): _name(newName), _hitpoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << this->_name << " constructor has been called" << std::endl; 
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy){
	std::cout << "Copy constructor has been called" << std::endl; 
	(*this) = copy;
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << this->_name << " has been destroyed" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy){
	std::cout << "ClapTrap assignment operator has been called" << std::endl;
	if (this != &copy){
		this->_name = copy._name;
		this->_hitpoints = copy._hitpoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return (*this);
}

/* ** CLASS METHODS ** */

void ClapTrap::attack(std::string const &target){
	std::cout << std::endl << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitpoints == 0){
		std::cout << this->_name << " has no HP left. Can't take anymore damage!" << std::endl;
	} else if (this->_hitpoints - amount < this->_hitpoints){
		std::cout << this->_name << " has been under attack, causing " << amount << " points of damage!" << std::endl;
		this->_hitpoints -= amount;
	} else {
		std::cout << std::endl << "*** FATALITY ***" << std::endl;
		std::cout << this->_name << " has been under attack, causing " << amount << " points of damage! " << std::endl;
		std::cout << "<Now it has no more hit points>" << std::endl;
		this->_hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " has been healed by " << amount << " points!" << std::endl ;
	this->_hitpoints += amount;
}

/* ** GETTER ** */

std::string ClapTrap::getName() const{
	return this->_name;
}

unsigned int ClapTrap::getHitPoints() const{
	return this->_hitpoints;
}

unsigned int ClapTrap::getEnergyPoints() const{
	return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
	return this->_attackDamage;
}

/* ** SETTER ** */

void ClapTrap::setName(std::string const newName){
	this->_name = newName;
}

void ClapTrap::setHitPoints(unsigned int hitPoints ){
	this->_hitpoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints){
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage){
	this->_attackDamage = attackDamage;
}