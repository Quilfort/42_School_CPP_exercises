#include "Form.hpp"

Form::Form(const std::string &input_name, const int gradeSign, const int gradeExecute) \
    : name(input_name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    //std::cout << "Form Default constructor called" << std::endl;
     if (gradeSign < 1 || gradeExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &old_obj) : name(old_obj.getName()), _signed(old_obj.isSigned()), \
    gradeSign(old_obj.getGradeSign()), gradeExecute(old_obj.getGradeExecute())
{
    //std::cout << "Form Copy constructor called" << std::endl;
    *this = old_obj;
}

Form& Form::operator=(const Form &old_obj)
{
    //std::cout << "Form Copy assignment operator called" << std::endl;
    (void)old_obj;
    return (*this);
}

Form::~Form()
{
    //std::cout << "Form Destructor called" << std::endl;
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

    if (bureaucrat.getGrade() <= this->gradeExecute)
    {
        this->_signed = true;
        this->signForm(bureaucrat);
    }
    else
    {
        this->_signed = false;
        this->signForm(bureaucrat);
        throw Form::GradeTooLowException();
    }
}

void Form::signForm(const Bureaucrat &bureaucrat) const
{
    if (this->_signed == true)
        std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
    if (this->_signed == false)
        std::cout << bureaucrat.getName() << " couldn’t sign " << this->getName() << " because ";

}

// Exceptions
const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

//insertion operator
std::ostream& operator<<(std::ostream& o, const Form& form)
{
	o << form.getName() << " " << form.getGradeSign() << " " << form.getGradeExecute(); 
	return o;
}