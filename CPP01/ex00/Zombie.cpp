#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Hello I come in peace... I mean" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "There are no more brains left, Goodbye from " << this->name << std::endl << std::endl;
}


void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
