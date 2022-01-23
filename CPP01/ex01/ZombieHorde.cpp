/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:18:23 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 07:21:11 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int		i;

	i = -1;
	zombies = new Zombie[N];
	while (++i < N)
		zombies[i].setName(name + std::to_string(i));
	return (zombies);
}