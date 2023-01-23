/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustapha <mustapha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:51:59 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/23 17:24:12 by mustapha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *info;

	if (N < 0)
		return (NULL);
    info = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        info[i].set_name(name);
        info[i].announce();
    }
    return (info);
}
