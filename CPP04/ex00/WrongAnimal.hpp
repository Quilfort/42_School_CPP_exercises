#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
    public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &old_obj);
		WrongAnimal &operator=(const WrongAnimal &old_obj);
		virtual ~WrongAnimal();

		//Public Member Functions
		virtual void makeSound() const;
		std::string getType(void) const;

	protected:
		std::string	type;

	private:
};

#endif