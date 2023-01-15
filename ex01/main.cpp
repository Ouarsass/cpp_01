#include "Zombie.hpp"

int     main()
{
    Zombie *info;

    info = zombieHorde(4, "blood");
    if (info == NULL)
        return 1;
    for (int i = 0; i < 4; i++)
    {
        info[i].announce();
    }
    delete[] info;
    return 0;
}