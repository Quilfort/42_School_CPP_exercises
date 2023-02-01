#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm constructor", 145, 137), target(target)
{
    //std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj) : AForm(old_obj), target(old_obj.target)
{
    //std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
    *this = old_obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old_obj)
{
    //std::cout << "Copy ShrubberyCreationForm assignment operator called" << std::endl;
    if (this == &old_obj)
		return *this;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    std::string			shrubbery =	"               ,@@@@@@@,\n"
							   						"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
							   						"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
							   						"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
							   						"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
							   						"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
							   						"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
							   						"       |o|        | |         | |\n"
							   						"       |.|        | |         | |\n"
							   						"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
    
    if (executor.getGrade() <= this->getGradeExecute())
    {
        std::cout << shrubbery << std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}