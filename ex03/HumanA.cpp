/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:16:07 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 20:06:30 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wep) : weapon(Wep)
{
    this->name = name;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::cout << name << "\x1b[1m LET'S GO ATTACK IT NOW \x1b[0m" << this->weapon.getType() << std::endl;
}
