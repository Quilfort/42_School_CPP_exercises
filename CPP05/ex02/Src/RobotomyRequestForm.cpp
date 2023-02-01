#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj) : AForm(old_obj), target(old_obj.target)
{
    std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
    *this = old_obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &old_obj)
{
    std::cout << "Copy RobotomyRequestForm assignment operator called" << std::endl;
    if (this == &old_obj)
		return *this;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->getGradeExecute())
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}
