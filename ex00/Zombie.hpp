/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:05:58 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 20:02:37 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
	    void announce(void);
        Zombie(std::string name);
        ~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
