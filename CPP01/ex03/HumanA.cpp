#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    this->name = name;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->_weapon.getType() << std::endl;
}