#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *info;
    std::stringstream str;

	if (N < 0)
		return (NULL);
    info = new Zombie[N];
    if (info == NULL)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        str << i;
        info[i].set_name(name + str.str());
        str.str("");
    }
    return (info);
}