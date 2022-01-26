/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:36:59 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/26 09:01:36 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}

void Karen::complain(std::string level)
{
	t_lookup	commands[4] = {
		{"DEBUG", 	&Karen::debug},
		{"INFO", 	&Karen::info},
		{"WARNING", &Karen::warning},
		{"ERROR", 	&Karen::error},
	};
	std::string	level_array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	*level_array_ptr = std::find(level_array, (level_array + 4), level);
	void		(Karen::*ptr)(void);	
	int			i = level_array_ptr - level_array;
	
	std::cout << "[ " << level << " ]" << std::endl;
	ptr = commands[i].f;
	(this->*ptr)();
	std::cout << std::endl;
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" <<std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" <<std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." <<std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." <<std::endl;
}