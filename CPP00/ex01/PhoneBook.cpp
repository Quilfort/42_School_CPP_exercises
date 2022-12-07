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


void Phonebook::add_contact(void)
{
    _contacts[0].set_contact();
}
