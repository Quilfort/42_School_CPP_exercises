#include "PhoneBook.hpp"

Phonebook::Phonebook()
: _index(0)
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

Contact Phonebook::bring_contact(int i)
{
	return (this->_contacts[i + 1]);
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
		bring_contact(i).display_contact();
	}

}

void Phonebook::search_contact(void)
{
	if (this->_index == 0)
	{
		std::cout << "Phonebook has no contact" << std::endl << std::endl;
		return ;
	}
	this->display_full_phonebook();

	




}

void Phonebook::add_contact(void)
{
	this->_index++;
	if (this->_index > 8)
		std::cout << "Phonebook is full" << std::endl << std::endl;
	else
	{
		_contacts[_index].set_contact();
	}
}
