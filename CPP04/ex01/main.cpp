#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "---------------------------------------------------" << std::endl;
    Animal  *AnimalArray[10];
    std::cout << "---------------------------------------------------" << std::endl;

    for (int i = 0; i < 5; i++)
    {
    	AnimalArray[i] = new Dog();
		if (i != 4)
			std::cout << "------" << std::endl;
    }
	std::cout << "---------------------------------------------------" << std::endl;
	delete i;
	delete j;
	std::cout << "---------------------------------------------------" << std::endl;



    
    return EXIT_SUCCESS;
}