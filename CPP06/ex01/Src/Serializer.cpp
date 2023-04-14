#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
	//std::cout << "Default Constructor called of Serializer" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	//std::cout << "Copy Constructor called of Serializer" << std::endl;
	*this = copy;
}

// Operators
Serializer & Serializer::operator=(const Serializer &assign)
{
	(void)assign;
	return *this;
}

// Destructor
Serializer::~Serializer()
{
	//std::cout << "Destructor called of Serializer" << std::endl;
}

uintptr_t Serializer::serialize(Data* pointer)
{
    uintptr_t convert = reinterpret_cast<uintptr_t>(pointer);
    return (convert);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *convert = reinterpret_cast<Data*>(raw);
    return (convert);
}