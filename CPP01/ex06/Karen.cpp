/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:36:59 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/26 09:14:38 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}


int Karen::complain(std::string level)
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
	int			count = 0;
	int			i = level_array_ptr - level_array;
	
	switch (i)
	{
		case 0:
			ptr = commands[0].f;
			(this->*ptr)();
			count++;
		case 1: 
			ptr = commands[1].f;
			(this->*ptr)();
			count++;
		case 2: 
			ptr = commands[2].f;
			(this->*ptr)();
			count++;
		case 3: 
			ptr = commands[3].f;
			(this->*ptr)();
			count++;
	}
	return (count);
}

void	Karen::debug()
{
	std::cout << "[ DEBUG ]" <<std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" <<std::endl;
}

void	Karen::info()
{
	std::cout << "[ INFO ]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" <<std::endl;
}

void	Karen::warning()
{
	std::cout << "[ WARNING ]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." <<std::endl;
}

void	Karen::error()
{
	std::cout << "[ ERROR ]" <<std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." <<std::endl;
}