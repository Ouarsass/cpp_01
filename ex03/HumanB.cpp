#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack()
{
    std::cout << name << "\x1b[1m LET'S GO ATTACK IT NOW \x1b[0m" << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Wep)
{
    this->weapon = &Wep;
}

