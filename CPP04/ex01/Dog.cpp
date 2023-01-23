#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &old_obj)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    *this = old_obj;
}

Dog& Dog::operator=(const Dog &old_obj)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    this->type = old_obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << this->type << " is Barking" << std::endl;
}