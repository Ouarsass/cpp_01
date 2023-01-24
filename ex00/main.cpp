/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:05:04 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 20:01:28 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main()
{
    Zombie* save;

    randomChump("Foo: ");
    save = newZombie("Foo: ");
    save->announce();
    delete (save);
    return 0;
}