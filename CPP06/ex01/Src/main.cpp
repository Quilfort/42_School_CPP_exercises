#include "Data.hpp"
#include <iostream>
#include <string>

// https://cdn.intra.42.fr/pdf/pdf/68807/en.subject.pdf

uintptr_t serialize(Data* pointer)
{
    uintptr_t convert = reinterpret_cast<uintptr_t>(pointer);
    return (convert);
}

// Make Data || Data can not be empty
// Convert to pointer
// Use reinterpret_cast data_type *var_name = reinterpret_cast <data_type *>(pointer_variable) in serialize (In Main?)
// Deserialize in data
// Check output

int main(void)
{
    Data    data;
    Data    *pointer = &data;

    uintptr_t serial = serialize(pointer);

    std::cout << "Data: \t\t\t" << &data << std::endl;
	std::cout << "POINTER: \t\t" << pointer << std::endl;

    std::cout << "Unintptr Serialized: \t" << &serial << std::endl;







}