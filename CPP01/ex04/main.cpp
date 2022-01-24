/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:24:16 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/24 06:01:44 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4 || std::strlen(argv[2]) == 0)
	{
		std::cout << "[Console] Command Error" <<std::endl;
		return (0);
	}
	std::string out_name = argv[1];
	return (0);
}