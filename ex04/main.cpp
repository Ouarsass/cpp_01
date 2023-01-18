/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:36:38 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/18 19:26:44 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int     main(int ac, char **av)
{
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string my_file = av[1];
    std::string my_line;
    std::ifstream file(my_file);
    std::ofstream replace_file(my_file + ".replace");
    if (ac > 3)
        std::cout << "error in programe" << std::endl;
    else
    {
        if (file.is_open() == 0)
            std::cout << "File not created !" << std::endl;
        if (is_empty(file))
            std::cout << "File is empty !" << std::endl;
        else
        {
            
        }
            

    }
    return 0;
}
