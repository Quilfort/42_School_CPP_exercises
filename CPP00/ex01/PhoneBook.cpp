#include "PhoneBook.hpp"

Phonebook::Phonebook()
: _index(0)
{
	return;
}

Contact Phonebook::bring_contact(int i)
{
	return (_contacts[i]);
}

void Phonebook::display_full_phonebook(void)
{
	std::cout << std::endl << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	for (int i = 0; i < this->_index; ++i)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		bring_contact(i + 1).display_contact();
	}
	std::cout << std::endl;

}

void Phonebook::search_contact(void)
{
	if (_index == 0)
	{
		std::cout << "Phonebook has no contact" << std::endl << std::endl;
		return ;
	}

	std::cout << "This is your contact list"<< std::endl;
	display_full_phonebook();

	std::string index;
	bool	active = true;
	
	std::cout << "Which contact do you want to see the full information off?"<< std::endl;

	
	while (active == true)
	{

		std::cout << "Enter the index: ";
		std::getline(std::cin, index);
		int i = atoi(index.c_str());
		std::cout << i << std::endl;

		if (i < 0 || i > 8)
			std::cout << "Wrong Index"<< std::endl;
		else if (i > _index)
			std::cout << "No Contact in Phonebook | Choose between 1 and "<< _index << std::endl;
		else
		{
			std::cout << std::endl;
			bring_contact(i).print_contact();
			active = false;
		}
	}
	std::cout << std::endl;
}

void Phonebook::add_contact(void)
{
	_index++;
	if (_index > 8)
		std::cout << "Phonebook is full" << std::endl << std::endl;
	else
	{
		_contacts[_index].set_contact();
	}
}
