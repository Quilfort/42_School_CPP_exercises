#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "../include/Intern.hpp"

#include <iostream>

int main(void)
{
    Intern random;
    Bureaucrat skin("Skindred", 1);

    Form* pres;

    pres = random.makeForm("PRESIDENTIAL", "Test");

    pres->execute(skin);
    
    return EXIT_SUCCESS;
}