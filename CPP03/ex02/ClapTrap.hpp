#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &old_obj);
        ClapTrap &operator=(const ClapTrap &old_obj);
        ~ClapTrap();

        //Public Member Functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string		name;
        unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;   

    private:

};

#endif