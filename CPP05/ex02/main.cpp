#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "AForm.hpp"
#include <iostream>

int main ()
{
    RobotomyRequestForm robot("Inspector Gadget");
    ShrubberyCreationForm shrub("Bomen zijn relaxed");
    PresidentialPardonForm pres("Prinses Amalia");
    Bureaucrat henk("Henk", 12);
    std::cout << "---------------------------------------------------" << std::endl;
    robot.execute(henk);
     std::cout << "---------------------------------------------------" << std::endl;
    shrub.execute(henk);
    std::cout << "---------------------------------------------------" << std::endl;
    pres.execute(henk);
    std::cout << "---------------------------------------------------" << std::endl;
    
    
    
    
    return EXIT_SUCCESS;
}