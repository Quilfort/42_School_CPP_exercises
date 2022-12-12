#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
    	std::cout << "---------------------------------------------------" << std::endl;
	    Weapon  club = Weapon("poison spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Club Solar");
        bob.attack();
	}

	{
        std::cout << "---------------------------------------------------" << std::endl;
		Weapon  club = Weapon("crude spiked club");

        HumanB  jim("Jim");
        jim.setWeapon(club);
		jim.attack();
        club.setType("The Mile High Club");
        jim.attack();
    }

	{
        std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "Human B Kim tries to attack without taking a weapon"<< std::endl << std::endl;
		
		Weapon  club = Weapon("flaming spiked club");

        HumanB  kim("kim");
		kim.attack();
        kim.setWeapon(club);
		kim.attack();
    }

    return (0);
}