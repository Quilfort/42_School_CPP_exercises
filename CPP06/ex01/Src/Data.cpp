#include "Data.hpp"

// Constructors
Data::Data() : secret("BOTWISAOKEGAME")
{
	//std::cout << "Default Constructor called of Data" << std::endl;
}

Data::Data(const Data &copy)
{
	//std::cout << "Copy Constructor called of Data" << std::endl;
	*this = copy;
}

// Operators
Data & Data::operator=(const Data &assign)
{
	this->secret = assign.secret;
	return *this;
}

// Destructor
Data::~Data()
{
	//std::cout << "Destructor called of Data" << std::endl;
}
