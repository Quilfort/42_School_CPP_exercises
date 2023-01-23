#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
    *this = old_obj
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    this->name = old_obj.name;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{

}