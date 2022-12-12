#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
    return ;
}

Weapon::~Weapon()
{
    return ;
}

std::string const	&Weapon::getType(void)
{
    std::string const &typeReference = this->type;
	return (typeReference);
}


void Weapon::setType(std::string type)
{
    this->type = type;
}