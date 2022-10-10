/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:13:23 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:14:13 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	
	ClapTrap instance;
	ClapTrap Davide("Davide");

	instance = Davide;

	instance.attack("Luigi");
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

	return 0;
}