#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &old_obj);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &old_obj);
		~PresidentialPardonForm();

		//Public Member Functions

	private:
};

#endif;