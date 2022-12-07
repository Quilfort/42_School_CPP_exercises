#ifndef CONTACT_H
#define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{     
    public:           
		Contact(void);

		void	set_contact(void);
		void	print_contact(void);
		void	display_contact(void);

	private:	
      	std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

};

#endif