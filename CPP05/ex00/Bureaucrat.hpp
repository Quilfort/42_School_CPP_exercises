#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    public:
        Bureaucrat(const std::string &input_name, int grade);
		Bureaucrat(const Bureaucrat &old_obj);
		Bureaucrat &operator=(const Bureaucrat &old_obj);
		~Bureaucrat();

		void GradeTooLowException();
		void GradeTooHighException();

		std::string getName();
		int getGrade();

    private:
		const std::string	name;
		int grade;

};

#endif