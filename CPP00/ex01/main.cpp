#include <iostream>
#include <iomanip>
#include <limits>
#include "PhoneBook.hpp"

int main()
{
	Phonebook	phonebook;
	int			index = 0;

	bool active = true;
	std::string command;
	

	std::cout << "Welcome to your secret Phonebook: " << std::endl;
	std::cout << "Choose one of the following options: " << std::endl;
	std::cout << " - ADD: add a contact to the phonebook" << std::endl;
	std::cout << " - SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " - EXIT: close and delete your phonebook" << std::endl << std::endl;

	while (active == true)
	{
		
		std::cout << "Enter your command: ";
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
			phonebook.search_contact();
		else if (command == "EXIT" || std::cin.eof() == true)
		{
			std::cout << "Closing Phonebook" << std::endl << std::endl;
			active = false;
		}
		else	
			std::cout << "Choose ADD | SEARCH | EXIT" << std::endl << std::endl;
	}

	std::cout << "Deleting your contacts, see you next time agent QQ7" << std::endl;

	return (EXIT_SUCCESS);
}