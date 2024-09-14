/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouabda <hbouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 22:24:29 by hbouabda          #+#    #+#             */
/*   Updated: 2023/08/15 15:00:57 by hbouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Phonebook.hpp"

void get_input(std::string &input)
{
    std::getline(std::cin, input);
    if (!std::cin)
    {
        std::cout << "Sadge!\n";
        std::exit(1);
    }
}

int main(void)
{
    std::string cmd;
    PhoneBook pb;
    std::string index;

    while(1)
    {
        std::cout << "ADD, SEARCH, EXIT?\n";
        get_input(cmd);
        if (cmd == "ADD")
            pb.add();
        else if (cmd == "SEARCH")
            pb.search();
        else if (cmd == "EXIT")
            pb.exit();
        else
            std::cout << "Wrong input\n";
    }
    return 0;
}
