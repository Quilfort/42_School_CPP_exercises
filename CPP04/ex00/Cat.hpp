#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public:
		Cat();
		Cat(const Cat &old_obj);
		Cat &operator=(const Cat &old_obj);
		~Cat();

		//Public Member Functions
		void makeSound() const;

	private:
};

#endif