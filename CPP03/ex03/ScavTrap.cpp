#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->_name = "** default name **";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "SCAVTRAP CONSTRUCTOR: " << this->_name << " def. constructor has been called" << std::endl; 
	return;
}

ScavTrap::ScavTrap(std::string newName): ClapTrap(newName){
	this->_name = newName;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "SCAVTRAP CONSTRUCTOR: " << this->_name << " param. constructor has been called" << std::endl; 
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