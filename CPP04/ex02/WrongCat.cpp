#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &old_obj)
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
    *this = old_obj;
}

WrongCat& WrongCat::operator=(const WrongCat &old_obj)
{
    std::cout << "Copy WrongCat assignment operator called" << std::endl;
    this->type = old_obj.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " is Barking, Tjirping and Gasping" << std::endl;
}