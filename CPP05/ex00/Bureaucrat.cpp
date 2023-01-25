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
    //this->name = old_obj.getName();
    //this->grade = old_obj.grade;
    this->grade = old_obj.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

// Getters
std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

//Check Grade
void Bureaucrat::GradeTooHighException()
{

}

void Bureaucrat::GradeTooLowException()
{

}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}