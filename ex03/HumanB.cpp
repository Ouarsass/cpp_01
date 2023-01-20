/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:16:14 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/20 19:16:15 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack()
{
    std::cout << name << "\x1b[1m LET'S GO ATTACK IT NOW \x1b[0m" << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Wep)
{
    this->weapon = &Wep;
}

