#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void	Contact::display_contact(void)
{
	std::cout << std::setw(10) << _first_name << "|";
	std::cout << std::setw(10) << _last_name << "|";
	std::cout << std::setw(10) << _nickname << std::endl;
}

void	Contact::print_contact(void)
{
	std::cout << "First name is: " << _first_name << std::endl;
	std::cout << "Last name is: " << _last_name << std::endl;
	std::cout << _first_name << "'s Nickname is: " << _nickname << std::endl;
	std::cout << "Phone number is: " << _phone_number << std::endl;
	std::cout << _first_name <<"'s Darkest Secret is: "<< _darkest_secret << std::endl << std::endl;
}

void    Contact::set_contact(void)
{
	
	std::cout << "What is your contact's First Name: ";
	std::getline(std::cin, _first_name);

	std::cout << "What is your contact's Last Name: ";
	std::getline(std::cin, _last_name);

	std::cout << "What is your contact's Nickame: ";
	std::getline(std::cin, _nickname);

    std::cout << "What is your contact's Phone number: ";
	std::getline(std::cin, _phone_number);

    std::cout << "What is your contact's Darkest Secret: ";
	std::getline(std::cin, _darkest_secret);
	std::cout << std::endl;
	print_contact();
    
}