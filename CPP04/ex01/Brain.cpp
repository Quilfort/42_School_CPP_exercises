#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &old_obj)
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = old_obj;
}

Brain& Brain::operator=(const Brain &old_obj)
{
    std::cout << "Copy Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = old_obj.ideas[i];
    }
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}