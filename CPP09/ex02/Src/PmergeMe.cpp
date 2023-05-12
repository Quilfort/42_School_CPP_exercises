#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &old_obj)
{
    *this = old_obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &old_obj)
{
    (void)old_obj;
    return (*this);
}

PmergeMe::~PmergeMe(){}

bool PmergeMe::checkInput(char *argv[])
{
    _input = argv;
    size_t i;
    for (i = 1; _input[i + 1] != '\0'; i++)
    {
        if (_input[i][0] == '-')
            return (false);
        for (size_t j = i + 1; _input[j] != '\0'; j++)
        {
            std::cout << "I: " << _input[i] << std::endl;
            std::cout << "J: " << _input[j] << std::endl;
            if (_input[i] == _input[j])
                return (false);
        }
    }
    if (_input[i][0] == '-')
            return (false);

    // IS DIGIT             



    return true;
}
