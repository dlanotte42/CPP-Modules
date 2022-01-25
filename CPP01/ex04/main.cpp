/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:24:16 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/24 23:50:34 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		content;
	size_t			i;

	if (argc != 4 || std::strlen(argv[2]) == 0)
	{
		std::cout << "[Console] Command Error" <<std::endl;
		return (0);
	}
	
	std::string out_name = argv[1]; 	//create a out_file variable
	
	out_name.append(".replace");		//Aggiunto al file originale ".replace"
	ifs.open(argv[1]); 					//Apro  il file  di input
	if (ifs.fail())
	{
		std::cout << "[Console] Error: '" <<argv[1] << "' cannot be open " <<std::endl;
		return (-1);
	}

	ofs.open(out_name);					//Apro  il file  di output
	if (ofs.fail())
	{
		std::cout << "[Console] Error: '" <<out_name << "' cannot be created " <<std::endl;
		ifs.close();
		return (-1);
	}
	
	do
	{
		std::getline(ifs, content);		//salvo le righe del file di input dentro content
		while (true)
		{
			i = content.find(argv[2]);
			if (i == std::string::npos)
			{
				ofs << content;
				break ;
			}
			ofs << content.substr(0, i) << argv[3];
			content = content.substr(i + std::strlen(argv[2]));
		}
		
		if (ifs.eof())
			break ;

			ofs << std::endl;
	} while (true);
	
	ifs.close();
	ofs.close();

	return (0);
}