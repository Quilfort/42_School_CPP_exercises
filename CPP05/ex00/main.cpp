#include "Bureaucrat.hpp"
#include <exception>

int main ()
{
    Bureaucrat willem("Willem", 12);

    std::cout << willem.getName() << std::endl;
    std::cout << willem.getGrade() << std::endl;

    //try
    //{
    //    /* code */
    //}
    //catch(const std::exception& e)
    //{
    //    std::cerr << e.what() << '\n';
    //}
    







    return EXIT_SUCCESS;
}