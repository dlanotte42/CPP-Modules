/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:28:51 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/23 07:38:49 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string 	brain = "HI THIS IS BRAIN";
	std::string 	*stringPTR = &brain;
	std::string& 	stringREF = brain;

	std::cout << "--------------------------------------" <<std::endl;
	std::cout << "--------------------------------------" <<std::endl;
	std::cout << "string address : " << &brain << std::endl;
	std::cout << "string address (ptr) : " << stringPTR << std::endl;
	std::cout << "string address (reference) : " << &stringREF << std::endl;
	std::cout << "--------------------------------------" <<std::endl;
	std::cout << "--------------------------------------" <<std::endl;
	std::cout << "string (ptr) : " << *stringPTR << std::endl;
	std::cout << "string (reference) : " << stringREF << std::endl;
	std::cout << "--------------------------------------" <<std::endl;
	std::cout << "--------------------------------------" <<std::endl;
	return (0);
}