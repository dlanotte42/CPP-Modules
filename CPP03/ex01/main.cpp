/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:19:21 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:19:42 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	
	
	ClapTrap Davide("Davide");
	ScavTrap Daniele("Daniele");
	

	Davide.attack("Daniele");
	Daniele.attack("Davide");
	Davide.takeDamage(99);
	std::cout << "hit points: " << Davide.getHitPoints() << std::endl << std::endl;

	Davide.takeDamage(99);
	std::cout << "hit points: " << Davide.getHitPoints() << std::endl << std::endl;

	Davide.takeDamage(99);
	std::cout << "hit points: " << Davide.getHitPoints() << std::endl << std::endl;

	Davide.beRepaired(2);
	std::cout << "hit points: " << Davide.getHitPoints() << std::endl << std::endl;

	Davide.beRepaired(40);
	std::cout << "hit points: " << Davide.getHitPoints() << std::endl << std::endl;

	Daniele.takeDamage(99);
	std::cout << "hit points: " << Daniele.getHitPoints() << std::endl << std::endl;

	Daniele.beRepaired(40);
	std::cout << "hit points: " << Daniele.getHitPoints() << std::endl << std::endl;

	Daniele.guardGate();

	return 0;
}