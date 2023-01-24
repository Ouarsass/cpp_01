/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:35:30 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 22:52:32 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "please type tow parametres" << std::endl;
        return (1);
    }
    Harl    execut;
    std::string smg = av[1];
    int i = (smg == "DEBUG") * 1 +
            (smg == "INFO") * 2 +
            (smg == "WARNING") * 3 +
            (smg == "ERROR") * 4;
    switch (i)
    {
    case 0:
        std::cout << "function not found !\n";
        break;
    case 1:
        execut.complain("DEBUG");
    case 2:
        execut.complain("INFO");
    case 3:
        execut.complain("WARNING");
    case 4:
        execut.complain("ERROR");
    }
    return 0;
}