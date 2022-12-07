#include <iostream>
#include <iomanip>
#include <limits>
#include "PhoneBook.hpp"

int main()
{
	Phonebook	phonebook;
	int index = 0;


	bool active = true;
	std::string command;
	
	// ENTER nog working
	while (active == true)
	{
		
		std::cout << "Choose an option: ";
		std::getline(std::cin, command);
		
		if (command == "ADD")
		{
			if (index > 8)
				std::cout << "Phonebook is full" << std::endl;
			else
			{
				phonebook.add_contact();
				index++;
			}
		}
		else if (command == "SEARCH")
			std::cout << command << std::endl;
		else if (command == "EXIT" || std::cin.eof() == true)
		{
			std::cout << "Closing Phonebook" << std::endl;
			active = false;
		}
		else	
			std::cout << "WRONG INPUT" << std::endl;
	}


	return (EXIT_SUCCESS);
}