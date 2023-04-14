#include "ScalarConverter.hpp"

int			ScalarConverter::InputType = 0;
char 		ScalarConverter::c = '\0';
long int	ScalarConverter::i = 0;
int			ScalarConverter::print_i = 0;
float		ScalarConverter::flo = 0.0f;
double		ScalarConverter::doub = 0.0;
std::string	ScalarConverter::input = "";

int main(int argc, char const *argv[])
{
	{
		if (argc != 2)
		{
			std::cout << "Wrong amount of Arguments" << std::endl;
			return EXIT_FAILURE;
		}
		ScalarConverter::convert(argv[1]);
	}	
	return EXIT_SUCCESS;
}
