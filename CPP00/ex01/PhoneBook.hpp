#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook();

		Contact	bring_contact(int i);


		void	add_contact(void);
		void	search_contact(void);
		void	display_full_phonebook(void);
		void	remove_oldest_contact(void);

	private:

		static int		_count;

		Contact _contacts[8];
		int		_index;
	};

#endif