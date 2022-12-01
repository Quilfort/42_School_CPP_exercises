#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string	string;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++){
		string = argv[i];
		for (size_t j = 0; j < string.length(); j++)
			std::cout << (char) toupper(string[j]);
	}
	std::cout << std::endl;
}
