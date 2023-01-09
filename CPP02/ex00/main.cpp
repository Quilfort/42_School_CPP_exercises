#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << std::endl << "EXAMPLE IN SUBJECT SHEET" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
    Fixed a;
    std::cout << "---------------------------------------------------" << std::endl;
    Fixed b(a);
    std::cout << "---------------------------------------------------" << std::endl;
    Fixed c;
    std::cout << "---------------------------------------------------" << std::endl;
    c = b;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}
