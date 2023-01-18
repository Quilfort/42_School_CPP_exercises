#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const ClapTrap &old_obj);
        ~FragTrap();
        
        //Public Member Functions
        void attack(const std::string& target);
        void highFivesGuys(void);

    private:
};


#endif
