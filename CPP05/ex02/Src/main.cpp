#include "../include/Bureaucrat.hpp"
#include "AForm.hpp"

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>

int main (void)
{
    try 
    {
        Bureaucrat henk("Henk", 30);
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
    try 
    {
        Bureaucrat sandra("Sandra", 14);
        ShrubberyCreationForm shrub("Bomen_zijn_relaxed");
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
    std::cout << "---------------------------------------------------" << std::endl;
    try 
    {
        Bureaucrat term("Terminator", 120);
        RobotomyRequestForm robot("Inspector Gadget");
        std::cout << "---------------------------------------------------" << std::endl;
        term.signForm(robot);
        term.executeForm(robot);
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

    return EXIT_SUCCESS;
}