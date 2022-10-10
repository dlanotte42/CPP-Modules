/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:26:18 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:26:31 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

int main(){
	
	
	ClapTrap Davide("Davide");
	FlagTrap Luigi("Luigi");
	

	Davide.attack("Luigi");
	Luigi.attack("Davide");
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

	Luigi.takeDamage(99);
	std::cout << "hit points: " << Luigi.getHitPoints() << std::endl << std::endl;

	Luigi.beRepaired(40);
	std::cout << "hit points: " << Luigi.getHitPoints() << std::endl << std::endl;

	Luigi.highFivesGuys();

	return 0;
}