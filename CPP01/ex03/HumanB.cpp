#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    //std::cout << this->name << std::endl;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << "Weapon" << std::endl;
}

//void HumanB::setWeapon(std::string weapon)
//{
//    return ;
//}