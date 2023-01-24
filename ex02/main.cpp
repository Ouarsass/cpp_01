/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:49:22 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 20:04:52 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "The memory address of the string variable " << &string << std::endl;
    std::cout << "The memory address held by stringPTR\t  " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF\t  " << &stringREF << std::endl;

    std::cout << "The value of the string variable\t  " << string << std::endl;
    std::cout << "The value pointed to by stringPTR\t  "<< *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF\t  "<< stringREF << std::endl;
    return 0;
}
