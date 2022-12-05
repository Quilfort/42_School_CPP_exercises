#include "PhoneBook.hpp"




int	add_contact()
{
	// Check if there is a free spot

	




}

int main(int argc, char const *argv[])
{
	
	bool active = true;
	std::string command;
	
	if (argc != 1)
	{
		std::cout << "Wrong number of input" << std::endl;
		return (1);
	}
	
	// ENTER nog working
	while (active == true)
	{
		
		std::cout << "Choose an option: ";
		std::cin >> command;
		
		if (command == "ADD")
		{
			std::cout << command << std::endl;
			add_contact;
		}
		else if (command == "SEARCH")
			std::cout << command << std::endl;
		else if (command == "EXIT")
		{
			std::cout << "Closing Phonebook" << std::endl;
			active = false;
		}
		else	
			std::cout << "WRONG INPUT" << std::endl;
	}
	return (0);
}
