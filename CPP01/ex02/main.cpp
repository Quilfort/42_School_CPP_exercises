#include <iostream>
#include <string>

int main()
{
    std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "---------------------------------------------------";
	std::cout << std::endl << "This is memory address" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	std::cout << "Memory Addres String: " << &string << std::endl;
	std::cout << "Memory Addres Pointer: " << stringPTR << std::endl; 
	std::cout << "Memory Addres Reference: " << &stringREF << std::endl;  

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------------";

	std::cout << std::endl << "This is the value of string" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	std::cout << "Value String: " << string << std::endl;
	std::cout << "Value Pointer: " << *stringPTR << std::endl; 
	std::cout << "Value Reference: " << stringREF << std::endl;  

	return (0);
}