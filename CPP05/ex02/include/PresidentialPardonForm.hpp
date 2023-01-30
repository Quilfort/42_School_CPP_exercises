#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &old_obj);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &old_obj);
		~PresidentialPardonForm();

		//Public Member Functions

	private:
    	const std::string &target; 
};

#endif