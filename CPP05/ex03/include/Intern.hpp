#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "../include/Form.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &old_obj);
		Intern &operator=(const Intern &old_obj);
		~Intern();

		Form *makeForm(std::string formName, std::string target);

		class InvalidArgument : std::exception
		{
			public:
				const char *what() const throw ();
		};

	private:

};

#endif