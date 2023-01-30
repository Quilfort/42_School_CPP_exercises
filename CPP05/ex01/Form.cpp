#include "Form.hpp"

Form::Form(const std::string &input_name, const int gradeSign, const int gradeExecute) \
    : name(input_name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    std::cout << "Default constructor called" << std::endl;
     if (gradeSign < 1 || gradeExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &old_obj) : name(old_obj.getName()), _signed(old_obj.isSigned()), \
    gradeSign(old_obj.getGradeSign()), gradeExecute(old_obj.getGradeExecute())
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Form& Form::operator=(const Form &old_obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (void)old_obj;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

//Getters

std::string Form::getName() const
{
    return (this->name);
}

int Form::getGradeSign() const
{
    return (this->gradeSign);
}

int Form::getGradeExecute() const
{
    return (this->gradeExecute);
}
bool Form::isSigned() const
{
	return this->_signed;
}

// Member Function
void Form::beSigned(const Bureaucrat &bureaucrat)
{

    if (bureaucrat.getGrade() <= this->gradeSign)
    {
        std::cout << "DIT WERKT" << std::endl;
        this->_signed = true;
    }
    else
        throw Form::GradeTooLowException();
}

// Exceptions
const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form: Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form: Grade too high");
};
