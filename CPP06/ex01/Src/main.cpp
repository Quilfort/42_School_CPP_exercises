#include "Data.hpp"
#include <iostream>
#include <string>

// https://cdn.intra.42.fr/pdf/pdf/68807/en.subject.pdf

uintptr_t serialize(Data* pointer)
{
    uintptr_t convert = reinterpret_cast<uintptr_t>(pointer);
    return (convert);
}

Data* deserialize(uintptr_t raw)
{
    Data *convert = reinterpret_cast<Data*>(raw);
    return (convert);
}

// Make Data || Data can not be empty
// Convert to pointer
// Use reinterpret_cast data_type *var_name = reinterpret_cast <data_type *>(pointer_variable) in serialize (In Main?)
// Deserialize in data
// Check output

int main(void)
{
    Data    		data;
    Data    		*pointer = &data;

    uintptr_t 		serial = serialize(pointer);
    Data    		*deserial = deserialize(serial);
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
	data.printSecret();
	pointer->printSecret();
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Deserialized Data" << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	deserial->printSecret();






}