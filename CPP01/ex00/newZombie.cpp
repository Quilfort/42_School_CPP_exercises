#include "Zombie.hpp"


Zombie *newZombie(std::string name)
{
	Zombie	*outsideZombie = new Zombie(name);
	outsideZombie->announce();
	return (outsideZombie);
}


