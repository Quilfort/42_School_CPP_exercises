#include "PmergeMe.hpp"

// https://cdn.intra.42.fr/pdf/pdf/83098/en.subject.pdf
//vector
//deque

int main(int argc, char *argv[])
{
    if (argc == 1 || argc > 3001)
    {
        std::cout << "Give right amount of arguments" << std::endl;
        return EXIT_FAILURE;
    }

    PmergeMe merge;

    if (merge.checkInput(argv) == false)
    {
        std::cout << "INPUT False" << std::endl;
        return EXIT_FAILURE;
    }





    //std::vector<int> vec;







    //char **before = argv;
    //std::cout << "Before:\t ";
    //for (size_t i = 1; before[i] != '\0'; i++)
    //    std::cout << before[i] << " ";
    //std::cout << std::endl;

    return EXIT_SUCCESS;




}