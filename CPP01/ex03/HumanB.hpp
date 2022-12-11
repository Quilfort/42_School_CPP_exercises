#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <string>
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack(void);
		//void	setWeapon(std::string weapon);


	private:
        std::string	name;
        
    };
#endif