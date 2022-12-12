#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->_weapon = NULL;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::attack()
{
    if (!this->_weapon)
    {
        std::cout << this->name << " attacks with their " << "with his fists" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}