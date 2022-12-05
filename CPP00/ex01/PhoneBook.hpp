#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include "test.hpp"
# include <iostream>
# include <string>

class PhoneBook 
{     	
	public:
			PhoneBook();
			~PhoneBook(void);
			
			
			
			
			
			void add_contact(void);       

	private:
			Contact *_contact[8];
			int		_index;	    
			

};

#endif