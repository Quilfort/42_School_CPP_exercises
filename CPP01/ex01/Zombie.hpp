#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void	announce(void);
		void	nameZombie(std::string name, int i);

	private:
		std::string	name;
	};
#endif