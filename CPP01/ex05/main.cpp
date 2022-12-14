#include "Harl.hpp"


int	main ()
{

	Harl	Naggy;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "MESSAGE FOR DEBUG" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	Naggy.complain("DEBUG");
	std::cout <<  std::endl;

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "MESSAGE FOR WARNING" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	Naggy.complain("WARNING");
	std::cout <<  std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "MESSAGE FOR WRONG STRING" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	Naggy.complain(" ");
	std::cout << "---------------------------------------------------" << std::endl;
	Naggy.complain("Life is good");
	std::cout <<  std::endl;

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "MESSAGE FOR INFO" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	Naggy.complain("INFO");
	std::cout <<  std::endl;

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "MESSAGE FOR ERROR" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	Naggy.complain("ERROR");
	std::cout << "---------------------------------------------------" << std::endl;
	return (EXIT_SUCCESS);
}