#include "whatever.hpp"
#include <iostream>

int main()
{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Start" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    int a = 3;
    int b = 42;
    std::cout << "A = " << a << std::endl;
    std::cout << "B = " << b << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "After Swapping" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    ::swap(a,b);
    std::cout << "A = " << a << std::endl;
    std::cout << "B = " << b << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Min and Max" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "MIN: " << ::min(a,b) << std::endl;
    std::cout << "MAX: " << ::max(a,b) << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "NOW WITH STRING || START" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::string c = "Quilfort1";
    std::string d = "Quilfort2";
    std::cout << "C = " << c << std::endl;
    std::cout << "D = " << d << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "After Swapping" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    ::swap(c,d);
    std::cout << "C = " << c << std::endl;
    std::cout << "D = " << d << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Min and Max" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "MIN: " << ::min(c,d) << std::endl;
    std::cout << "MAX: " << ::max(c,d) << std::endl;
    return (EXIT_SUCCESS);
}