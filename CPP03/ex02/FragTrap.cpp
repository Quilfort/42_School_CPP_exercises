#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->name = "Fro-Fragger";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrapDefault constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap " << this->name << " created!" <<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;   
}

FragTrap::FragTrap(const ClapTrap &old_obj) : ClapTrap(old_obj)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = old_obj;
}

//Public Member Functions
void FragTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
    {
        std::cout << "DEAD SCAVTRAP CAN NOT ATTACK" << std::endl << std::endl;
    }
    else
    {
        if (this->EnergyPoints > 0)
        {
            std::cout << "FragTrap " << this->name << " attacks "<< target << ", causing ";
            std::cout << this->AttackDamage <<" points of damage!"<< std::endl;
            this->EnergyPoints--;
        }
        else
            std::cout << "No Energy Left || SCAVTRAP CAN NOT ATTACK || Recharge your battery" << std::endl;
        
        std::cout << "Total Energy for FragTrap = "<<  this->EnergyPoints << std::endl << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " wants to give you an High Five" << std::endl << std::endl;
}