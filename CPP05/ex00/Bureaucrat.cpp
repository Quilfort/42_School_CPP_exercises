#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &input_name, int grade) : name(input_name), grade(grade)
{
    std::cout << "Default constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->grade = old_obj.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
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

void Bureaucrat::DecrementGrade() 
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void Bureaucrat::IncrementGrade() 
{
    if (this->grade + 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

//insertion operator
std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}