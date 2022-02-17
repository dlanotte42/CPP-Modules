/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:40:50 by dlanotte          #+#    #+#             */
/*   Updated: 2022/02/16 23:49:49 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vector_int;
	std::vector<int>::iterator	result;

	int search = 132;
	vector_int.push_back(132);
	vector_int.push_back(400);
	vector_int.push_back(200);
	result = easyfind(vector_int, search);

	if (result != vector_int.end())
		std::cout << "INT FOUND" << std::endl;
	else 
		 std::cout << "INT NOT FOUND" << std::endl;
	return (0);
}