#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &old_obj)
{
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    *this = old_obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &old_obj)
{
    std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
    this->type = old_obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " is making sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

