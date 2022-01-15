/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:38:55 by dlanotte          #+#    #+#             */
/*   Updated: 2022/01/15 18:10:08 by dlanotte         ###   ########.fr       */
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


int main()
{
    std::string command;
    PhoneBook PhoneBook;
    int contact_number;

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
        }
        else if (command == "SEARCH")
        {
            
        }
        else
            std::cout << "[Console] Command Error" <<std::endl;
    }
    
}