#include "Zombie.hpp"

Zombie*     newZombie(std::string name)
{
    Zombie* zombie_;

    zombie_ = new Zombie(name);
    if (zombie_ == NULL)
        exit(1);
    return (zombie_);
}