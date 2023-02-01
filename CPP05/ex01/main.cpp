#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main ()
{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Bureaucrat Kees on the Pitch" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    try 
    {
		Bureaucrat kees("Kees", 0);
        std::cout << kees << std::endl;
        std::cout << "-----" << std::endl;
        try 
        {
            Form one("Form One", 1, 3);
            std::cout << one << std::endl;
            std::cout << "-----" << std::endl;
            std::cout << "||Form is correct, Sign Form?||" << std::endl;
            std::cout << "-----" << std::endl;
            kees.signForm(one);
        }
        catch (Form::GradeTooLowException& e) 
        {
            std::cerr << e.what() << std::endl;
        }
        catch (Form::GradeTooHighException& e) 
        {
            std::cerr << e.what() << std::endl;
        }
	}
	catch (Bureaucrat::GradeTooLowException& e) 
    {
        std::cerr << e.what() << std::endl;
	}
    catch (Bureaucrat::GradeTooHighException& e) 
    {
        std::cerr << e.what() << std::endl;
	}
    std::cout << "---------------------------------------------------" << std::endl;
    return EXIT_SUCCESS;
}