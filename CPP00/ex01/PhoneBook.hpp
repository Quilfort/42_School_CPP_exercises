#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
public:

	Phonebook();
	~Phonebook();


	void add_contact();

private:

	static int		_count;

	Contact _contacts[8];
	int		_index;
};

#endif