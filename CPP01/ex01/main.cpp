#include <iostream>
#include <limits>
#include "Zombie.hpp"

void    randomChump(std::string name);
Zombie  *zombieHorde( int N, std::string name );

int main()
{
    Zombie  *Horde;

    std::cout << std::endl << "HORDE WITH 2 IS INCOMING" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

    Horde = zombieHorde(2, "Walker ");

    std::cout << "---------------------------------------------------" << std::endl;
    Horde[0].announce();
    Horde[1].announce();
    std::cout << "---------------------------------------------------" << std::endl;
    delete [] Horde;
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << std::endl << "HORDE WITH 5 IS INCOMING" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

    Horde = zombieHorde(5, "Biter ");

    std::cout << "---------------------------------------------------" << std::endl;
    Horde[4].announce();
    Horde[2].announce();
    std::cout << "---------------------------------------------------" << std::endl;
    delete [] Horde;
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << std::endl << "BIG HORDE OF 20 IS INCOMING" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

    Horde = zombieHorde(20, "Lame-Brain ");

    std::cout << "---------------------------------------------------" << std::endl;
    Horde[18].announce();
    Horde[0].announce();
    Horde[7].announce();
    Horde[10].announce();
    std::cout << "---------------------------------------------------" << std::endl;
    delete [] Horde;
    std::cout << "---------------------------------------------------" << std::endl;

    return (0);
}