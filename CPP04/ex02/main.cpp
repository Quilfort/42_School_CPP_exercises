#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
    std::cout << "---------------------------------------------------" << std::endl;
    Animal  *AnimalArray[10];
    std::cout << "---------------------------------------------------" << std::endl;

    //5 Dogs in Array
    for (int i = 0; i < 5; i++)
    {
    	std::cout << i + 1 << " ";
        AnimalArray[i] = new Dog();
		if (i != 4)
			std::cout << "------" << std::endl;
    }
    std::cout << "---------------------------------------------------" << std::endl;

    //5 Cats in Array
    for (int i = 5; i < 10; i++)
    {
    	std::cout << i + 1 << " ";
        AnimalArray[i] = new Cat();
		if (i != 9)
			std::cout << "------" << std::endl;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Dog will bark and Cat will miauw" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    
    AnimalArray[1]->makeSound();
    AnimalArray[7]->makeSound();
    std::cout << "---------------------------------------------------" << std::endl;

    //Delete full Array
    for (int i = 0; i < 10; i++)
    {
        std::cout << i + 1 << " ";
        delete AnimalArray[i];
        if (i != 9)
			std::cout << "------" << std::endl;
    }
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

    //Code below is not possible because Animal is absrtract virtual = 0
    // nobody can instantiate it
    
    //const Animal* meta = new Animal();

    return EXIT_SUCCESS;
}