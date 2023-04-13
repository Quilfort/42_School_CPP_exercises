#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>
# include <string>
# include "Data.hpp"

class Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);		
		static Data*		deserialize(uintptr_t raw);

	private: 
		Serializer();
		Serializer(const Serializer &copy);
		Serializer & operator=(const Serializer &assign);
		~Serializer();
};

#endif