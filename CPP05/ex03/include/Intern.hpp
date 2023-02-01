#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>

class Intern
{
	public:
		Intern();
		Intern(const Intern &old_obj);
		Intern &operator=(const Intern &old_obj);
		~Intern();

		void makeForm(std::string formName, std::string target);


	private:



};

#endif