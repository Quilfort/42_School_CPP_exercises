#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>


int main()
{
    const Animal* animal = new Animal();
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    std::cout << "---------------------------------------------------" << std::endl;
    
    animal->makeSound();
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    std::cout << "---------------------------------------------------" << std::endl;
    
    delete animal;
    std::cout << "---------------------------------------------------" << std::endl;
    delete cat;
    std::cout << "---------------------------------------------------" << std::endl;
    delete dog;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "NOW ITS TIME FOR THE WRONG ANIMAL" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    const WrongAnimal* wronganimal = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();

    std::cout << "---------------------------------------------------" << std::endl;
    
    wronganimal->makeSound();
    
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    wrongcat->makeSound();
    std::cout << "---------------------------------------------------" << std::endl;

    delete wronganimal;
    std::cout << "---------------------------------------------------" << std::endl;
    delete wrongcat;
    std::cout << "---------------------------------------------------" << std::endl;

    
    return EXIT_SUCCESS;
}