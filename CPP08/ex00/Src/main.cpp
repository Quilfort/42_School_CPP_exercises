#include "easyfind.hpp"

int main(void)
{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Vector Numbers" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl << std::endl;

    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(22);
    numbers.push_back(333);

    if (::easyfind(numbers, 15) == true)
        std::cout << "Yes, Parameter found in Var" << std::endl << std::endl;
    else
        std::cout << "Oh No, Parameter Not found in Var" << std::endl << std::endl;

    std::cout << "-------- Add number 15 to Vector -------" << std::endl << std::endl;      
    numbers.push_back(15);
    if (::easyfind(numbers, 15) == true)
        std::cout << "Yes, Parameter found in Var" << std::endl << std::endl;
    else
        std::cout << "Oh No, Parameter Not found in Var" << std::endl << std::endl;

    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "List Char" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl << std::endl;

    std::list<char> letters;
    letters.insert(letters.begin(), 'Q');
    letters.insert(letters.end(), 'F');

    if (::easyfind(numbers, 'z') == true)
        std::cout << "Yes, Parameter found in Var" << std::endl << std::endl;
    else
        std::cout << "Oh No, Parameter found in Var" << std::endl << std::endl;

    std::cout << "-------- Add char z to List -------" << std::endl << std::endl;      
    numbers.push_back('z');
    if (::easyfind(numbers, 'z') == true)
        std::cout << "Yes, Parameter found in Var" << std::endl << std::endl;
    else
        std::cout << "Oh No, Parameter Not found in Var" << std::endl << std::endl;
    return 0;
}