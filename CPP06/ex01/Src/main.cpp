#include "Serializer.hpp"

int main(void)
{
    Data				data;
	data.number = 42;
	data.secret = "BOTW IS A OKE GAME";
   	Data			*pointer = &data;

    uintptr_t 		serial = Serializer::serialize(pointer);
    Data    		*deserial = Serializer::deserialize(serial);

	std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Before any cast" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Data: \t\t\t\t" << &data << std::endl;
	std::cout << "POINTER: \t\t\t" << pointer << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "After Serialization" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Unintptr Pointer Serialized: \t" << &serial << std::endl;
	std::cout << "Unintptr Serialized: \t\t" << serial << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "After Deserialization" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Data: \t\t\t\t" << &data << std::endl;
	std::cout << "Deserial Data: \t\t\t" << deserial << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Testcase for printing Secret" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Original Data" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Data of Number = " << data.number << std::endl;
	std::cout << "Secret is  = " << data.secret << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Number is Pointer is = " << pointer->number << std::endl;
	std::cout << "Secret of Pointer is  = " << pointer->secret << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Deserialized Data" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Number is Deserial is = " << deserial->number << std::endl;
	std::cout << "Secret of Deserial is  = " << deserial->secret << std::endl;
	return (EXIT_SUCCESS);
}