#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string n)
{
    this->name = n;
}

Zombie::~Zombie()
{
    std::cout << name << "  \x1b[1m*{ GAME OVER }*\x1b[0m" << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string n)
{
    this->name = n;
}