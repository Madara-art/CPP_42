/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouabda <hbouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:08:15 by hbouabda          #+#    #+#             */
/*   Updated: 2023/09/14 20:17:23 by hbouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"

void PhoneBook::add(void)
{
    contacts[index % 8].fill_contact();
    index++;
}
PhoneBook::PhoneBook()
{
    index = 0;
}
int check_if_number(std::string str)
{
    unsigned long i = 0;

    while (i < str.length())
    {
        if (!std::isdigit(str[i++]))
        {
            std::cout << "Invalid!\n";
            return (-1);
        }
    }
    
    if (str.length() > 1)
    {
        std::cout << "index out of range!\n";
        return (-1);
    }
    return (str[0] - '0');
}

std::string format(std::string str)
{
    if (str.length() > 9)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::search()
{
    
    if (index == 0)
    {
        std::cout << "List of contacts is empty.\n";
        return ;
    }
    int i = -1;
    std::cout << std::setw(10) << "Index" << " | " << std::setw(10) << "First Name" 
        << " | " << std::setw(10) << "Last Name" << " | " << std::setw(10) << "Nickname" << "\n";
    while (++i < index && i < 8)
        std::cout << std::setw(10) << i << " | " << std::setw(10) << format(contacts[i].get_first_name()) 
            << " | " << std::setw(10) << format(contacts[i].get_last_name()) << " | " << std::setw(10) << format(contacts[i].get_nickname()) << "\n";
    std::string s;
    do
    {
        std::cout << "Index: ";
        get_input(s);
        if (s=="")
            std::cout << "This field can't be empty!\n";
    } while (s=="");
    i = check_if_number(s);
    if (i != -1)
    {
        if (i >= index || i > 7)
            std::cout << "index out of range!\n";
        else
        {
            std::cout << i<<"\n";
            std::cout << "First name: " << contacts[i].get_first_name() << "\n";
            std::cout << "Last name: " << contacts[i].get_last_name() << "\n";
            std::cout << "Nickname: " << contacts[i].get_nickname() << "\n";
            std::cout << "Phone number: " << contacts[i].get_phone_number() << "\n";
            std::cout << "Secret: " << contacts[i].get_secret() << "\n";
        }
        return ;
    }
}

void PhoneBook::exit(void)
{
    std::cout << "Good bye!\n";
    std::exit(0);
}
