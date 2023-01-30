#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
    public:
      	AForm(const std::string &input_name, const int gradeSign, const int gradeExecute);
	    AForm(const AForm &old_obj);
	    AForm &operator=(const AForm &old_obj);
	    virtual ~AForm() = 0;

      	//Getters
      	std::string getName() const;
      	int getGradeSign() const;
      	int getGradeExecute() const;
		bool isSigned() const;

		//Public Member Functions
   		void beSigned(const Bureaucrat &bureaucrat);
		void signAForm(const Bureaucrat &bureaucrat) const;
		virtual void execute(Bureaucrat const &executor) = 0;

  	class GradeTooLowException : std::exception
	{
		public:
			const char *what() const throw ();
	};

	class GradeTooHighException : std::exception
	{
		public:
			const char *what() const throw ();
	};

		
    private:
        const std::string name;
        bool _signed;
        const int gradeSign;
        const int gradeExecute;
};

std::ostream& operator<<(std::ostream& o, const AForm& AForm);

#endif