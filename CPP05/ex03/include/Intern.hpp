#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "../include/Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &old_obj);
		Intern &operator=(const Intern &old_obj);
		~Intern();

		Form *makeForm(std::string formName, std::string target);


	private:



};

#endif