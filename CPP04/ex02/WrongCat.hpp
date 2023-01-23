#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
		WrongCat();
		WrongCat(const WrongCat &old_obj);
		WrongCat &operator=(const WrongCat &old_obj);
		~WrongCat();

		//Public Member Functions
		void makeSound() const;

	private:
};

#endif