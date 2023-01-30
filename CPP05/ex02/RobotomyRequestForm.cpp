#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj) : : AForm(old_obj)
{
    std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
    *this = old_obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &old_obj)
{
    std::cout << "Copy RobotomyRequestForm assignment operator called" << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}