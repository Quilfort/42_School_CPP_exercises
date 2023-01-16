#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie	normalZombie(name);
	normalZombie.announce();
}