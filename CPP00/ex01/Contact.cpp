#include "Contact.hpp"

Contact::Contact()
{
	return;
}

static	std::string small_format(std::string string)
{
	if (string.size() > 10)
		return(string.substr(0,9) + ".");
	else
		return (string);
}


void	Contact::display_contact(void)
{
	std::cout << std::setw(10) << small_format(_first_name) << "|";
	std::cout << std::setw(10) << small_format(_last_name) << "|";
	std::cout << std::setw(10) << small_format(_nickname) << std::endl;
}

void	Contact::print_contact(void)
{
	std::cout << "First name is: " << _first_name << std::endl;
	std::cout << "Last name is: " << _last_name << std::endl;
	std::cout << _first_name << "'s Nickname is: " << _nickname << std::endl;
	std::cout << "Phone number is: " << _phone_number << std::endl;
	std::cout << _first_name <<"'s Darkest Secret is: "<< _darkest_secret << std::endl << std::endl;
}

static	bool empty_string(std::string string)
{
	int i = 0;

	if (string.empty())
	{
		std::cout << "Can not enter blank space, try again" << std::endl;
		return (true);
	}	
	else
	{
		while (string[i] != '\0')
		{
			if (isspace(string[i]))
				i++;
			else
				return (false);
		}
	}
	std::cout << "Can not enter blank space, try again" << std::endl;
	return (true);
}

void    Contact::set_contact(void)
{

	std::cout << "What is your contact's First Name: ";
	std::getline(std::cin, _first_name);
	while (empty_string(_first_name) == true)
	{
		std::cout << "What is your contact's First Name: ";
		std::getline(std::cin, _first_name);
	}

	std::cout << "What is your contact's Last Name: ";
	std::getline(std::cin, _last_name);
	while (empty_string(_last_name) == true)
	{
		std::cout << "What is your contact's Last Name: ";
		std::getline(std::cin, _last_name);
	}

	std::cout << "What is your contact's Nickame: ";
	std::getline(std::cin, _nickname);
	while (empty_string(_nickname) == true)
	{
		std::cout << "What is your contact's Nickame: ";
		std::getline(std::cin, _nickname);
	}
	
	std::cout << "What is your contact's Phone number: ";
	std::getline(std::cin, _phone_number);
	while (empty_string(_phone_number) == true)
	{
		std::cout << "What is your contact's Phone number: ";
		std::getline(std::cin, _phone_number);
	}

	std::cout << "What is your contact's Darkest Secret: ";
	std::getline(std::cin, _darkest_secret);
	while (empty_string(_darkest_secret) == true)
	{
		std::cout << "What is your contact's Darkest Secret: ";
		std::getline(std::cin, _darkest_secret);
	}
	std::cout << std::endl;
	print_contact();
}