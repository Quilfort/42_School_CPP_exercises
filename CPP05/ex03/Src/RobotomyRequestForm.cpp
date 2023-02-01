#include "RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    //std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj) : AForm(old_obj), target(old_obj.target)
{
    //std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
    *this = old_obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &old_obj)
{
    //std::cout << "Copy RobotomyRequestForm assignment operator called" << std::endl;
    (void) old_obj;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->getGradeExecute())
    {
        std::srand((unsigned) std::time(NULL));
        if(std::rand() % 2)
            std::cout << this->target << " has been robotomize successfully."<< std::endl;
        else
            std::cout << "Robotomizing of " << this->target << " has failed"<< std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}
