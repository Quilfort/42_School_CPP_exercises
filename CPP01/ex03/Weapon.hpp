#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <string>
# include <iostream>

class Weapon
{
	public:
        void    getType(std::string type);
        void    setType(std::string	newType);
        void    attack();


	private:
        std::string	type;
        
    };
#endif