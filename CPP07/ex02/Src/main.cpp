// https://cdn.intra.42.fr/pdf/pdf/68804/en.subject.pdf
#include "../include/Array.hpp"

#include <iostream>

#define MAX_VAL 5

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

    std::cout << "---------------------------------------------------" << std::endl;

    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }

        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }

        try
        {
            numbers[2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;
    }

    return (EXIT_SUCCESS);
}