#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "Poker Face";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

//ClapTrap::ClapTrap(std::string name)
//{
//     std::cout << "Default constructor called" << std::endl;
//}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

//ClapTrap::ClapTrap(const ClapTrap &old_obj)
//{
//    std::cout << "Copy constructor called" << std::endl;
//    *this = old_obj;
//}

//ClapTrap& ClapTrap::operator=(const ClapTrap &old_obj)
//{
//    std::cout << "Copy assignment operator called" << std::endl;
//}

//Public Member Functions
void ClapTrap::attack(const std::string& target)
{



    std::cout << "ClapTrap " << this->name << " attacks "<< target << ", causing ";
    std::cout << this->AttackDamage <<" points of damage!"<< std::endl;
}

//void takeDamage(unsigned int amount)
//{

//}

//void beRepaired(unsigned int amount)
//{

//}
