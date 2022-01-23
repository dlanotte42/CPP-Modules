/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:03:02 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 07:24:27 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombies;
	int		i;

	i = -1;
	zombies = zombieHorde(10, "zombie");
	while (++i < 10)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}