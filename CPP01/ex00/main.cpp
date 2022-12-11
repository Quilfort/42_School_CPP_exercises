#include <iostream>
#include <limits>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie  *zombie;

    std::cout << std::endl << "Quilfort: These are the zombies that you can use outside the function, Welcome to the Heap Zombies" << std::endl << std::endl;
	std::cout << "---------------------------------------------------" << std::endl << std::endl;

    zombie = newZombie("Henry");
    delete zombie;
    zombie = newZombie("Kimberly");
    delete zombie;
    zombie = newZombie("Jason");

	std::cout << "---------------------------------------------------" << std::endl;
    std::cout << std::endl << "Quilfort: And Now, Welcome to your Stack Zombies" << std::endl << std::endl;
	std::cout << "---------------------------------------------------" << std::endl << std::endl;

    randomChump("RandomSam");
    randomChump("RandomPam");

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Quilfort: Jason is still here, bye Jason" << std::endl << std::endl ;
	std::cout << "---------------------------------------------------" << std::endl << std::endl;

	delete zombie;
    
    return (0);
}