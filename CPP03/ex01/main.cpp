#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap claptrap;
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "ClapTrap attacks until he has no energy" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        int i = 0;
        while (i < 11)
        {
            claptrap.attack("Zer0");
            i++;
        }
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "With no energy, he can also not repair himself" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        claptrap.beRepaired(12);


        std::cout << "---------------------------------------------------" << std::endl;
    }
        
    {
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        ClapTrap claptrap;
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "ClapTrap will heal 3hp, 2hp and 5 hp. Total will be 20hp" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        claptrap.beRepaired(3);
        claptrap.beRepaired(2);
        claptrap.beRepaired(5);
    }

    {
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        ClapTrap claptrap;
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "ClapTrap will stop working with 0 HP" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        claptrap.takeDamage(4);
        claptrap.takeDamage(5);
        claptrap.beRepaired(5);
        claptrap.takeDamage(100);
        claptrap.takeDamage(100);
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "And Dead ClapTrap can not attack or repair" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        claptrap.beRepaired(50);
        claptrap.attack("Zer0");
        std::cout << "---------------------------------------------------" << std::endl;
    }

    return (0);
}