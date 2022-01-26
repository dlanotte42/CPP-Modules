/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 03:08:01 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/26 09:10:53 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char	**argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Usage karen-filter: ./KarenFilter log_level" <<std::endl;
		return (-1);
	}

	if (karen.complain(argv[1]) == 0)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
		return (-1);
	}
	return (0);
}