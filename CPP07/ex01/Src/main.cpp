#include "../include/iter.hpp"
#include <iostream>  
#include <array> 
int main (void)
{
	std::cout << "---------------------------------------------------" << std::endl;
    int numbers[5] = {0, 5, 10, 15, 20};
	::iter(numbers, 5, callElement);
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::string arnold[4] = {"GET", "TO" , "THE", "CHOPPA"};
	::iter(arnold, 4, callElement);
	std::cout << "---------------------------------------------------" << std::endl;
}