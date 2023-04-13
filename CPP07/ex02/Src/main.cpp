// https://cdn.intra.42.fr/pdf/pdf/68804/en.subject.pdf
#include "../include/Array.hpp"

#include <iostream>

int main()
{

    {
        Array<int> first;
        Array<int> second(10);

        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
    }

    std::cout << "---------------------------------------------------" << std::endl;

    {
        Array<std::string> first;
	    Array<std::string> second(4);

        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;


    }

    std::cout << "---------------------------------------------------" << std::endl;

    {
        int * a = new int(5);
        Array<int> test(*a);
        std::cout << "Test: " << test << std::endl;

    }





    return (EXIT_SUCCESS);
}