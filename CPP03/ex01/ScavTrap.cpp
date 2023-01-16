#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << " ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ScavTrap " << this->name << " created!" <<std::endl;
}

ScavTrap::~ScavTrap()
{
      
   
}

ScavTrap::ScavTrap(const ClapTrap &old_obj) : ClapTrap(old_obj)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = old_obj;
}