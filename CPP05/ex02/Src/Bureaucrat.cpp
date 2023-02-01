#include "../include/Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string &input_name, int grade) : name(input_name), grade(grade)
{
    //std::cout << "Default constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->grade = old_obj.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called" << std::endl;
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

void Bureaucrat::signForm(AForm &Aform) const
{
    try
    {
        Aform.beSigned(*this);
        std::cout << this->getName() << " signed " << Aform.getName() << std::endl;
    }
    catch(AForm::GradeTooLowException& e)
    {
        std::cout << this->getName() << " couldn’t sign " << Aform.getName() << " because " << e.what() << '\n';;
    }
}

void Bureaucrat::executeForm(AForm &Aform)
{
    if (Aform.isSigned() == true)
    {
        try
        {
            Aform.execute(*this);
            std::cout << this->getName() << " executed " << Aform.getName() << std::endl;
        }
        catch(AForm::GradeTooLowException& e)
        {
            std::cout << this->getName() << " executed couldn't " << Aform.getName() << " because " << e.what() << '\n';;
        }
    }
}

// Exceptions
const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat: Grade too low");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat: Grade too high");
};

//insertion operator
std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}