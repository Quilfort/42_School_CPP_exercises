#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << " ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap " << this->name << " created!" <<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;   
}

ScavTrap::ScavTrap(const ClapTrap &old_obj) : ClapTrap(old_obj)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = old_obj;
}