#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm constructor", 25, 5)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj) : AForm(old_obj)
{
    std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
    *this = old_obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old_obj)
{
    std::cout << "Copy ShrubberyCreationForm assignment operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}