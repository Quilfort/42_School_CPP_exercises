#include "Harl.hpp"

Harl::Harl()
{
	return	;
}

Harl::~Harl()
{
	return	;
}

void Harl::debug(void)
{
	std::cout << "DEBUG | I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO | I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING | I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR | This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	levelArray[] = {
		"DEBUG",
		"INFO", 
		"WARNING",
		"ERROR"
	};

	typedef void(Harl::*ptrToMem[])();
	ptrToMem function = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	int i = 0;

	while (i < 4)
	{
		if (level == levelArray[i])
			break ;
		i++;
	}

	switch (i) {
		case 0:
    		(this->*function[0])();
  		case 1:
    		(this->*function[1])();
 		case 2:
    		(this->*function[2])();
  		case 3:
    		(this->*function[3])();
			break ;
		default:
    		std::cout << "USE DEBUG | INFO | WARNING | ERROR" << std::endl;
	}
	return ;

}