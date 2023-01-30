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
		
		//Getters
		std::string getName() const;
		int getGrade() const;

		//Change Grade
		void IncrementGrade();
		void DecrementGrade();




		class GradeTooLowException : std::exception
		{
			public:
				const char *what() const throw ();
				//{
				//	return "Grade is to low";
				//}
		};

		class GradeTooHighException : std::exception
		{
			public:
				const char *what() const throw ();
				//{
				//	return "Grade is to high";
				//}
		};

    private:
		const std::string	name;
		int grade;
};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif