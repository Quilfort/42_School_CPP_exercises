#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &old_obj)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    *this = old_obj;
}

Cat& Cat::operator=(const Cat &old_obj)
{
    std::cout << "Copy Cat assignment operator called" << std::endl;
    this->type = old_obj.type;
    this->brain = new Brain(*old_obj.brain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << this->type << " is Miauwing" << std::endl;
}