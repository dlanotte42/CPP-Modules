/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:52:08 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:52:08 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{

	protected:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		
		ClapTrap();
		ClapTrap(std::string const _name);
		ClapTrap(ClapTrap const &copyConstr);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const &copy);

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();

		void setName(std::string const name);
		void setHitPoints(unsigned int hitPoints);
		void setEnergyPoints(unsigned int energyPoints);
		void setAttackDamage(unsigned int attackDamage);
};

#endif