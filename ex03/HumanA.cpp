#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wep) : weapon(Wep)
{
    this->name = name;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::cout << name << "\x1b[1m LET'S GO ATTACK IT NOW \x1b[0m" << this->weapon.getType() << std::endl;
}
