/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:38:55 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/17 22:09:12 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.hpp"

static PhoneBook insert_contact(PhoneBook PhoneBook, int contact_number)
{
    std::cout << "[PhoneBook] Insert first name: ";
    std::getline(std::cin, PhoneBook.phonebook_contacts[contact_number].first_name);
    std::cout << "[PhoneBook] Insert last name: ";
    std::getline(std::cin, PhoneBook.phonebook_contacts[contact_number].last_name);
    std::cout << "[PhoneBook] Insert nickname: ";
    std::getline(std::cin, PhoneBook.phonebook_contacts[contact_number].nickname);
    std::cout << "[PhoneBook] Insert phone number: ";
    std::getline(std::cin, PhoneBook.phonebook_contacts[contact_number].phone_number);
    std::cout << "[PhoneBook] Insert darkest secret: ";
    std::getline(std::cin, PhoneBook.phonebook_contacts[contact_number].darkest_secret);
    std::cout << "[PhoneBook] Contact as been added, the your index is: " <<(contact_number + 1) <<std::endl;
    return (PhoneBook);
}

static void PrintContact(PhoneBook PhoneBook, int search_index, int contact_numbers)
{
    std::string     text_value;
    std::string		first_name;
    std::string		last_name;
    std::string		nickname;
    if (contact_numbers >= search_index)
    {
        first_name = PhoneBook.phonebook_contacts[search_index].first_name;
        last_name = PhoneBook.phonebook_contacts[search_index].last_name;
        nickname = PhoneBook.phonebook_contacts[search_index].nickname;
        if (first_name.length() > 10){
            first_name.resize(9);
            first_name.insert(9, 1, '.');
        }
        if (last_name.length() > 10){
            last_name.resize(9);
            last_name.insert(9, 1,'.' );
        }
        if (nickname.length() > 10){
            nickname.resize(9);
            nickname.insert(9, 1, '.');
        }
        std::cout << std::setw(10) << (search_index + 1) << "|";
        std::cout << std::setw(10) << first_name << "|";
        std::cout << std::setw(10) << last_name << "|";
        std::cout << std::setw(10) << nickname << "|";
        std::cout << std::endl;
    }
    else
        std::cout << "[Console] Contact doesn't exist" <<std::endl;
}

static void ShowAllContact(PhoneBook PhoneBook, int contact_numbers)
{
    int i;

    i = 0;
    std::cout << std::setw(20) << "------------------------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
    std::cout <<std::endl;
    while (i < contact_numbers)
    {
        PrintContact(PhoneBook, i, contact_numbers);
        i++;
    }
    std::cout << std::setw(20) << "------------------------------------------------------------" << std::endl;
}

static void DescribeContact(PhoneBook PhoneBook, int contact_index, int contact_numbers)
{
    std::string     text_value;
    std::string		first_name;
    std::string		last_name;
    std::string		nickname;
    std::string     phone_number;
    std::string     darkest_secret;
    contact_index = (contact_index - 1);
    if (contact_numbers >= contact_index)
    {
        first_name = PhoneBook.phonebook_contacts[contact_index].first_name;
        last_name = PhoneBook.phonebook_contacts[contact_index].last_name;
        nickname = PhoneBook.phonebook_contacts[contact_index].nickname;
        phone_number = PhoneBook.phonebook_contacts[contact_index].phone_number;
        darkest_secret = PhoneBook.phonebook_contacts[contact_index].darkest_secret;
        std::cout << std::setw(20) << "------------------------------------------------------------" << std::endl;
        std::cout << std::setw(20) << "First name: " << first_name << std::endl;
        std::cout << std::setw(20) << "Last name: " << last_name << std::endl;
        std::cout << std::setw(20) << "Nickname: " << nickname << std::endl;
        std::cout << std::setw(20) << "Phone number: " << phone_number << std::endl;
        std::cout << std::setw(20) << "Darkest secret: " << darkest_secret << std::endl;
        std::cout << std::setw(20) << "------------------------------------------------------------" << std::endl;
    }
}

int main()
{
    std::string     command;
    PhoneBook       PhoneBook;
    int             contact_number;
    std::string     search_index;
    int             contact_numbers;

    contact_numbers = 0;
    contact_number = 0;
    while (command != "EXIT")
    {
        std::cout << "Insert Command: ";
        std::getline(std::cin, command);
        if (contact_number > 7)
            contact_number = 0;
        if (command == "ADD")
        {
            PhoneBook = insert_contact(PhoneBook, contact_number);
            contact_number++;
            if (contact_numbers < 7)
                contact_numbers++;
        }
        else if (command == "SEARCH")
        {
            ShowAllContact(PhoneBook, contact_numbers);
            std::cout << "[PhoneBook] Insert contact's index: ";
            std::getline(std::cin, search_index);
            try{
                DescribeContact(PhoneBook, std::stoi(search_index), contact_numbers);
            }
            catch (std::exception(e))
            {
                std::cout << "[Console] Index error" <<std::endl;
            }
        }
        else if (command != "EXIT")
            std::cout << "[Console] Command error" <<std::endl;
    }
    
}