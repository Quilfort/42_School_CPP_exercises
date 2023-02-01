#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &old_obj);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &old_obj);
		~RobotomyRequestForm();

		//Public Member Functions
		void execute(Bureaucrat const &executor);

	private:
    	const std::string &target; 
};

#endif