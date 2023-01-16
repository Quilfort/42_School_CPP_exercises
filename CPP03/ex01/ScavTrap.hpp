#ifndef SCAVRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ClapTrap &old_obj);
        ~ScavTrap();

    private:
};

#endif
