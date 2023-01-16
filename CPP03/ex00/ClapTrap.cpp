#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "Poker Face";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ClapTrap " << this->name << " created!" <<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
    this->HitPoints = old_obj.HitPoints;
    this->EnergyPoints = old_obj.EnergyPoints;
    this->AttackDamage = old_obj.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &old_obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = old_obj.name;
    return (*this);
}

//Public Member Functions
void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks "<< target << ", causing ";
        std::cout << this->AttackDamage <<" points of damage!"<< std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "No Energy Left || CAN NOT ATTACK || Recharge your battery" << std::endl;
    
    std::cout << "Total Energy = "<<  this->EnergyPoints << std::endl << std::endl;
    
    
}

//void takeDamage(unsigned int amount)
//{

//}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " repairs " << amount << " hit points" << std::endl;
        this->HitPoints = HitPoints + amount;
        std::cout << "Total Hitpoints = " << this->HitPoints << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "No Energy Left || CAN NOT REPAIR ITSELF || Recharge your battery" << std::endl;
        
    std::cout << "Total Energy = "<<  this->EnergyPoints << std::endl << std::endl;
}
