/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:35:42 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/20 18:35:43 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::complain(std::string level)
{
    int i;
    void (Harl::*pointer_mf[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string my_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (i = 0; i < 4; i++)
    {
        if (my_level[i] == level)
        {
            (this->*pointer_mf[i])();
            break;
        }
    }
    if (i == 4)
        std::cout << "function not found\n" << std::endl;
}

void Harl::debug()
{
    std::cout << "DEBUG :\n love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO :\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING :\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR :\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
