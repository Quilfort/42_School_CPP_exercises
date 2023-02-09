#include <iostream>
#include <vector>
#include <string>
#include "DetectType.hpp"

//ARGUMENT CONTROLEREN OF HET INT ETC IS
//DOORSTUREN NAAR DE JUISTE FUNCTIE
//STATIC CAST? PER CATEGORIE
// https://cdn.intra.42.fr/pdf/pdf/68807/en.subject.pdf

int main(int argc, char const *argv[])
{
     
	if (argc != 2)
	{
		std::cout << "Wrong amount of Arguments" << std::endl;
		return EXIT_FAILURE;
	}

	std::string input = argv[1];
	DetectType type(input);
	//type.parseType(input);


	if (input.length() == 1)
	{
		std::cout << "CHAR IS 1 " << std::endl;
		std::cout << "FUNCTION FOR CHAR " << std::endl;
		type.castChar();

		// Checken if ASCII
	}	
	else if (input.find_first_not_of("-0123456789") == std::string::npos)
	{
		for (size_t i = 1; i < input.length(); i++)
		{
			if (input[i] == '-')
			{
				std::cout << "INCORRECT ARGUMENGT" << std::endl;
				return (EXIT_FAILURE);
			}
		}
		std::cout << "FUNCTION FOR INT " << std::endl;
	}
	else if (input[input.length() - 1] == 'f')
	{
		for (size_t i = 0; i < input.length() - 1; i++)
		{
			if (input[i] == 'f')
			{
				std::cout << "INCORRECT ARGUMENGT" << std::endl;
				return (EXIT_FAILURE);
			}
		}
		std::cout << "FLOAT" << std::endl;
	}
	else
	{ 
		std::cout << "DOUBLE " << std::endl;
	}

	type.printConvert();


	return EXIT_SUCCESS;
}

     //else if (input.find_first_not_of("f") == std::string::npos)
     //     std::cout << "FUNCTION FOR FLOAT " << std::endl;
     //else
     //     std::cout << "DOUBLE" << std::endl;
     
     // How to f with char
     //if (input.find_first_not_of("-0123456789") == std::string::npos)
     //{
     //     int test = std::atoi(input.c_str());
     //     int n = static_cast<int>(test);

     //     if (n != 0)
     //     {
     //          printf("int\n");
     //     }
     //     else
     //          printf("no int\n");
     //     std::cout << test << std::endl;
     //     std::cout << n << std::endl;
     //}
     //else
     //     printf("no int\n");

     //int test = 123522;
     //float result = static_cast<float>(test);

     //std::cout << result << std::endl;