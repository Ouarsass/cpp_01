#include "Zombie.hpp"

int     main()
{
    Zombie* save;

    randomChump("the old zombies");
    save = newZombie("the new Zombies");
    save->announce();
    delete (save);
    return 0;
}