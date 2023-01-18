#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->name = "Scav-anger";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
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

//Public Member Functions
void ScavTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
    {
        std::cout << "DEAD SCAVTRAP CAN NOT ATTACK" << std::endl << std::endl;
    }
    else
    {
        if (this->EnergyPoints > 0)
        {
            std::cout << "ScavTrap " << this->name << " attacks "<< target << ", causing ";
            std::cout << this->AttackDamage <<" points of damage!"<< std::endl;
            this->EnergyPoints--;
        }
        else
            std::cout << "No Energy Left || SCAVTRAP CAN NOT ATTACK || Recharge your battery" << std::endl;
        
        std::cout << "Total Energy for ScavTrap = "<<  this->EnergyPoints << std::endl << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name << " is in Gate keeper mode" << std::endl << std::endl;
}