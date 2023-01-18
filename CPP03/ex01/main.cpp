#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
        ScavTrap scavtrap;
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "ScavTrap will attack and will go in Guardmode" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        scavtrap.attack("Lillith");
        scavtrap.guardGate();
    }
    return (0);
}