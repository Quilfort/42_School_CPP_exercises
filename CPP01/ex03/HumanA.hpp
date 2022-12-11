#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <string>
# include <iostream>

class HumanA
{
	public:
		HumanA();
		~HumanA();

		void	attack(void);


	private:
		std::string	name;

	};
#endif