#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat willem("Willem", 12);

    std::cout << willem.getName() << std::endl;
    std::cout << willem.getGrade() << std::endl;



    return EXIT_SUCCESS;
}