#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
    public:
		Animal();
		Animal(const Animal &old_obj);
		Animal &operator=(const Animal &old_obj);
		virtual ~Animal() = 0;

		//Public Member Functions
		virtual void makeSound() const = 0;
		std::string getType(void) const;

	protected:
		std::string	type;

	private:
};

#endif