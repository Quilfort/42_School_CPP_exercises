#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void	Contact::print_contact(void)
{
	std::cout << "First name is: " << _first_name << std::endl;
	std::cout << "Last name is: " << _last_name << std::endl;
	std::cout << "Nickname is: " << _nickname << std::endl;
	std::cout << "Phonenumber is: " << _phone_number << std::endl;
	std::cout << "Darkest Secret is: " << _darkest_secret << std::endl;
}


void    Contact::set_contact(void)
{
	
	std::cout << "What is your contact's First Name: ";
	std::getline(std::cin, _first_name);

	std::cout << "What is your contact's Last Name: ";
	std::getline(std::cin, _last_name);

	std::cout << "What is your contact's Nickame: ";
	std::getline(std::cin, _nickname);

    std::cout << "What is your contact's Nickame: ";
	std::getline(std::cin, _phone_number);

    std::cout << "What is your contact's Nickame: ";
	std::getline(std::cin, _darkest_secret);
	print_contact();
    
}