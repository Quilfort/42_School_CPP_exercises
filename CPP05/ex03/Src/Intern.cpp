#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    //std::cout << "Default constructor called" << std::endl;
}

Intern::Intern(const Intern &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Intern& Intern::operator=(const Intern &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    (void) old_obj;
    return (*this);
}

Intern::~Intern()
{
    //std::cout << "Destructor called" << std::endl;
}

void Intern::makeForm(std::string formName, std::string target)
{
    std::cout << "Input: " << formName << std::endl;

    for (size_t j = 0; j < formName.length(); j++)
        formName[j] = (char) toupper(formName[j]);

    std::cout << "output: " << formName << std::endl;
    std::cout << "Target: " << target << std::endl;

    std::string	formArray[] = {
		"ROBOTOMY",
		"PRESIDENTIAL", 
		"SHRUBBERY",
	};

    int i = 0;
    while (i < 3)
    {
        if (formName == formArray[i])
            break;
        i++;
    }
    switch (i) {
		case 0:
    		std::cout << "RETURN FOR ROBOTOMY"<< std::endl;
            break;
  		case 1:
    		std::cout << "RETURN FOR PRESIDENTIAL"<< std::endl;
            break;
 		case 2:
    		std::cout << "RETURN FOR SHRUBBERY"<< std::endl;
			break ;
		default:
    		std::cout << "REQUEST ROBOTOMY | PRESIDENTIAL | SHRUBBERY" << std::endl;
	}
}