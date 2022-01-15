/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:42:16 by dlanotte          #+#    #+#             */
/*   Updated: 2021/09/17 18:31:11 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void    megaphone(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        std::cout << char(std::toupper(str[i]));
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc > 1)
    {
        i = 1;
        while (argv[i])
        {
            megaphone(argv[i]);
            i++;
        }
        std::cout << "\n";
    }
    else 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"; 
    }
    return (0);
}