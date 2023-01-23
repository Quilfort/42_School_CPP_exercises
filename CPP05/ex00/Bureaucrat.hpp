#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    public:
        Bureaucrat();
		Bureaucrat(const Bureaucrat &old_obj);
		Bureaucrat &operator=(const Bureaucrat &old_obj);
		~Bureaucrat();

    private:
		const std::string	name;
		int grade;

};

#endif