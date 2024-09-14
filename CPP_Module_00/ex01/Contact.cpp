/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouabda <hbouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:10:29 by hbouabda          #+#    #+#             */
/*   Updated: 2023/09/13 20:42:02 by hbouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"

void Contact::fill_contact(void)
{
    do
    {
        std::cout << "Enter first name: ";
        get_input(first_name);
        if (first_name=="")
            std::cout << "This field can't be empty!\n";
    } while (first_name=="");
    do
    {
        std::cout << "Enter last name: ";
        get_input(last_name);
        if (last_name=="")
            std::cout << "This field can't be empty!\n";
    } while (last_name=="");
    do
    {
        std::cout << "Enter nickname: ";
        get_input(nickname);
        if (nickname=="")
            std::cout << "This field can't be empty!\n";
    } while (nickname=="");
    do
    {
        std::cout << "Enter phone number: ";
        get_input(phone_number);
        if (phone_number=="")
            std::cout << "This field can't be empty!\n";
    } while (phone_number=="");
    std::cout << "Secret? : ";
    get_input(darkness);
}

std::string Contact::get_first_name(void)
{
    return first_name;
}
std::string Contact::get_last_name(void)
{
    return last_name;
}
std::string Contact::get_nickname(void)
{
    return nickname;
}
std::string Contact::get_phone_number(void)
{
    return phone_number;
}
std::string Contact::get_secret(void)
{
    return darkness;
}

// CONTACT::Contact
// {
//     private:
//         std::string first_name;
//         std::string last_name;
//         std::string nickname;
//         std::string phone_number;
//         std::string darkness;
//     public:
//         void fill_contact(void)
//         {
//             std::cout << "Enter first name: ";
//             std::cin >> first_name;
//             std::cout << "Enter last name: ";
//             std::cin >> last_name;
//             std::cout << "Enter nickname: ";
//             std::cin >> nickname;
//             std::cout << "Enter phone number: ";
//             std::cin >> phone_number;
//             std::cout << "Why did u kill them? : ";
//             std::cin >> darkness;
//         }
        
//         std::string get_first_name(void)
//         {
//             return first_name;
//         }
//         std::string get_last_name(void)
//         {
//             return last_name;
//         }
//         std::string get_nickname(void)
//         {
//             return nickname;
//         }
// };