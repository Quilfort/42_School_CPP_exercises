#include "../include/Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "AForm.hpp"
#include <iostream>

int main (void)
{
    //RobotomyRequestForm robot("Inspector Gadget");
    
    try 
    {
        Bureaucrat henk("Henk", 3);
        PresidentialPardonForm pres("Prinses Amalia");
        std::cout << "---------------------------------------------------" << std::endl;
        henk.signForm(pres);
        henk.executeForm(pres);
    }
    catch (AForm::GradeTooLowException& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    try 
    {
        Bureaucrat sandra("Sandra", 12);
        ShrubberyCreationForm shrub("Bomen zijn relaxed");
        std::cout << "---------------------------------------------------" << std::endl;
        sandra.signForm(shrub);
        sandra.executeForm(shrub);
    }
    catch (AForm::GradeTooLowException& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    
    //robot.execute(henk);
    //std::cout << "---------------------------------------------------" << std::endl;

    std::cout << "---------------------------------------------------" << std::endl;
    
    
    
    
    return EXIT_SUCCESS;
}