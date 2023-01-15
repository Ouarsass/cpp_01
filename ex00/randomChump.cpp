#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie my_Zombie(name);

    my_Zombie.announce();
}