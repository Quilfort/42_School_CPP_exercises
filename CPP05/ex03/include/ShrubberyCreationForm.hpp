#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include "../include/Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &old_obj);
		~ShrubberyCreationForm();

		//Public Member Functions
		void execute(Bureaucrat const &executor);

	private:
    	const std::string &target; 
};

#endif