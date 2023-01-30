#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &old_obj);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &old_obj);
		~RobotomyRequestForm();

		//Public Member Functions

	private:
};

#endif;