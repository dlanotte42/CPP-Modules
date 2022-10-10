/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:52:15 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:54:06 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	
	DiamondTrap diamond("Daniele");
	FlagTrap flag("Davide");
	ScavTrap scav("Bobby");

	std::cout << "Energy Points: " << diamond._energyPoints << std::endl;

	diamond.whoAmI();

	diamond.guardGate();
	std::cout << std::endl;

	diamond.highFivesGuys();
	std::cout << std::endl;

	diamond.attack("TARGET");
	std::cout << std::endl;


	diamond.takeDamage(42);
	std::cout << "HitPoints left: " << diamond.getHitPoints() << std::endl;
	std::cout << std::endl;

	diamond.beRepaired(21);
	std::cout << "HitPoints left: " << diamond.getHitPoints() << std::endl;
	std::cout << std::endl;
	
	return 0;
}