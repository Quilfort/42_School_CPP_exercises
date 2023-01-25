#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &input_name, int grade) : name(input_name), grade(grade)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
    *this = old_obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    //this->name = old_obj.name;
    //this->grade = grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

// Getters
std::string Bureaucrat::getName()
{

}


//Check Grade
void Bureaucrat::GradeTooHighException()
{

}

void Bureaucrat::GradeTooLowException()
{

}