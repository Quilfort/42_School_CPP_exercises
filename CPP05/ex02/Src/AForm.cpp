#include "AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm(const std::string &input_name, const int gradeSign, const int gradeExecute) \
    : name(input_name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    //std::cout << "AForm Default constructor called" << std::endl;
     if (gradeSign < 1 || gradeExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &old_obj) : name(old_obj.getName()), _signed(old_obj.isSigned()), \
    gradeSign(old_obj.getGradeSign()), gradeExecute(old_obj.getGradeExecute())
{
    //std::cout << "AForm Copy constructor called" << std::endl;
    *this = old_obj;
}

AForm& AForm::operator=(const AForm &old_obj)
{
    //std::cout << "AForm Copy assignment operator called" << std::endl;
    (void)old_obj;
    return (*this);
}

AForm::~AForm()
{
    //std::cout << "AForm Destructor called" << std::endl;
}

//Getters
std::string AForm::getName() const
{
    return (this->name);
}

int AForm::getGradeSign() const
{
    return (this->gradeSign);
}

int AForm::getGradeExecute() const
{
    return (this->gradeExecute);
}
bool AForm::isSigned() const
{
	return this->_signed;
}

// Member Function
void AForm::beSigned(const Bureaucrat &bureaucrat)
{

    if (bureaucrat.getGrade() <= this->gradeSign)
        this->_signed = true;
    else
    {
        this->_signed = false;
        throw AForm::GradeTooLowException();
    }
}

void AForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->gradeExecute)
        std::cout << "FORM EXECUTED" << std::endl;
    else
        throw AForm::GradeTooLowException();
}

// Exceptions
const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

//insertion operator
std::ostream& operator<<(std::ostream& o, const AForm& AForm)
{
	o << "Name: " << AForm.getName() << " | Grade to Sign: " << AForm.getGradeSign() << " | Grade to Execute: " << AForm.getGradeExecute() << " | Bool Signed: " << AForm.isSigned();
	return o;
}