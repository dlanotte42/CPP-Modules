/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zxcvbinz <zxcvbinz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:52:01 by zxcvbinz          #+#    #+#             */
/*   Updated: 2022/10/10 20:52:02 by zxcvbinz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap{

	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string newName);
		~DiamondTrap();
		void whoAmI();
		unsigned int getEnergyPoints();
		using ScavTrap::_energyPoints;
		using ScavTrap::attack;
};
#endif