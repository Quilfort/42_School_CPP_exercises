#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

#include "Intern.hpp"

#include <iostream>

int main(void)
{
    {
        std::cout << "---------------------------------------------------" << std::endl;
        Intern random;
        Bureaucrat skin("Skindred", 1);
        Form* pres;
        pres = random.makeForm("PRESIDENTIAL", "Obama");
        skin.signForm(*pres);
        skin.executeForm(*pres);
        std::cout << "---------------------------------------------------" << std::endl;
    }

    {
        Intern ninja;
        Bureaucrat kim("Kim Petras", 1);
        Form *robot;
        robot = ninja.makeForm("robotomy", "Wall-E");
        kim.signForm(*robot);
        kim.executeForm(*robot);
        std::cout << "---------------------------------------------------" << std::endl;
    }

    {
        Intern number;
        Bureaucrat dorian("Dorian Electra", 1);
        Form* shrub;
        try
        {
            shrub = number.makeForm("shrubbery", "Willow");
            dorian.signForm(*shrub);
            dorian.executeForm(*shrub);
        }
        catch(Intern::InvalidArgument& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "---------------------------------------------------" << std::endl;
    }

    return EXIT_SUCCESS;
}