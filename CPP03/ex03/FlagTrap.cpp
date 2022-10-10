#include "FlagTrap.hpp"

FlagTrap::FlagTrap(){
	FlagTrap::_name = "** default name **";
	FlagTrap::_hitpoints = 100;
	FlagTrap::_energyPoints = 100;
	FlagTrap::_attackDamage = 30;
	std::cout << "FLAGTRAP CONSTRUCTOR: " << this->_name << " def. constructor has been called" << std::endl; 
	return;
}

FlagTrap::FlagTrap(std::string newName): ClapTrap(newName){
	FlagTrap::_hitpoints = 100;
	FlagTrap::_energyPoints = 100;
	FlagTrap::_attackDamage = 30;
	std::cout << "FLAGTRAP CONSTRUCTOR: " << this->_name << " param. constructor has been called" << std::endl; 
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