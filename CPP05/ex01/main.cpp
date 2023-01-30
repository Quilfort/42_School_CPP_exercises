#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main ()
{
    Bureaucrat kees("kees", 1);
    std::cout << kees << std::endl;

    Form one("one", 2, 2);
    one.beSigned(kees);






    return EXIT_SUCCESS;
}