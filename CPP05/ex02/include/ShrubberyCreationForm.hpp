#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &old_obj);
		~ShrubberyCreationForm();

		//Public Member Functions

	private:
    	const std::string &target; 
};

#endif