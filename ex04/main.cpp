/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:36:38 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 23:06:50 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void append_in_file(std::string s1, std::string s2, std::string my_line, std::string &string)
{
    std::size_t i;

    i = my_line.find(s1, 0);
    if (i != 0)
        string.append(my_line, 0, i);
    string.append(s2);
    i = i + s1.size();
    my_line.erase(0, i);
    if (my_line.find(s1) == std::string::npos)
    {
        string.append(my_line);
        return ;
    }
    else
        append_in_file(s1, s2, my_line, string);
}

int     main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout << "error in programe" << std::endl;
        return (1);
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string my_file = av[1];
    std::string string;
    std::string my_line;
    std::ifstream file(my_file);
    if (file.is_open() == false)
    {
        std::cout << "File not created !" << std::endl;
        return 1;
    }
    if (file.peek() == -1)
    {
        std::cout << "empty file !" << std::endl;
        return 1;
    }
    else
    {
        std::ofstream replace_file(my_file + ".replace");
        if (replace_file.is_open() == false)
        {
            std::cout << ".File not created !" << std::endl;
            return 1;
        }
        while (file.eof() == false)
        {
            std::getline(file, my_line);
            if (s1.compare(""))
            {
                if (my_line.find(s1, 0) == std::string::npos)
                    replace_file << my_line;
                else
                {
                    append_in_file(s1, s2, my_line, string);
                    replace_file << string;
                    string.clear();
                }
                if (file.eof() == 0)
                    replace_file << std::endl;
            }
            else
	    	{
	    		replace_file << my_line;
	    		replace_file << std::endl;
	    	}
        }
    }
    return 0;
}
