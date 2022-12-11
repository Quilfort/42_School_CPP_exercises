#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Snarling sounds behind you" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "There are no more brains left, Goodbye from " << this->name << std::endl;
}

void Zombie::nameZombie(std::string name, int i)
{
    std::string full_name = name + std::to_string(i);
    this->name = full_name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
