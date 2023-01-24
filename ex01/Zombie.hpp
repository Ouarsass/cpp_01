/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:34:14 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/24 20:03:39 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		void announce(void);
		void set_name(std::string n);
		Zombie(std::string n);
		~Zombie();

};

Zombie*	zombieHorde(int N, std::string name);

#endif