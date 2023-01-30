#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj) : AForm(old_obj)
{
    std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
    *this = old_obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &old_obj)
{
    std::cout << "Copy PresidentialPardonForm assignment operator called" << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}