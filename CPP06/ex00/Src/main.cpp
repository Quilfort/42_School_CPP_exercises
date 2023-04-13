#include <iostream>
#include <string>

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong amount of Arguments" << std::endl;
		return EXIT_FAILURE;
	}
	std::string string = argv[1];
	//ScalarConverter type(input);
	//type.convert();

	
	ScalarConverter &type = ScalarConverter::GetInstance(string);
    type.convert();
	
	//type.convert();

	return EXIT_SUCCESS;
}
