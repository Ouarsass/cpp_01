/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:16:26 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/20 19:16:27 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->type = str;
}

Weapon::~Weapon() {}

const   std::string& Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string set)
{
    this->type = set;
}
