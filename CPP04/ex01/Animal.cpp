#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &old_obj)
{
    std::cout << "Copy Animal constructor called" << std::endl;
    *this = old_obj;
}

Animal& Animal::operator=(const Animal &old_obj)
{
    std::cout << "Copy Animal assignment operator called" << std::endl;
    this->type = old_obj.type;
    return (*this);
}

Animal::~Animal() 
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << this->type << " is making sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

