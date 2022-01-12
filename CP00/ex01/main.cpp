/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:38:55 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/12 14:44:26 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bookhead.hpp"

int main()
{
    std::string command;
    
    while (command != "EXIT")
    {
        std::cout << "Insert Command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            std::cout << "Mortacci ADD" <<std::endl;
        }
        else if (command == "SEARCH")
        {
            
        }
    }
    
}