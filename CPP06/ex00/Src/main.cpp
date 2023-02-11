#include <iostream>
#include <string>

#include "DetectType.hpp"

int main(int argc, char const *argv[])
{
     
	if (argc != 2)
	{
		std::cout << "Wrong amount of Arguments" << std::endl;
		return EXIT_FAILURE;
	}
	std::string input = argv[1];
	DetectType type(input);
	type.startProgram();
	return EXIT_SUCCESS;
}
