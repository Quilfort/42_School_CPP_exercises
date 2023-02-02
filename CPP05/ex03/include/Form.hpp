#ifndef Form_HPP
# define Form_HPP

#include <iostream>

class Bureaucrat;

class Form
{
    public:
      	Form(const std::string &input_name, const int gradeSign, const int gradeExecute);
	    Form(const Form &old_obj);
	    Form &operator=(const Form &old_obj);
	    virtual ~Form();

      	//Getters
      	std::string getName() const;
      	int getGradeSign() const;
      	int getGradeExecute() const;
		bool isSigned() const;

		//Public Member Functions
   		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor);

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

std::ostream& operator<<(std::ostream& o, const Form& Form);

#endif