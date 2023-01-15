#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

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