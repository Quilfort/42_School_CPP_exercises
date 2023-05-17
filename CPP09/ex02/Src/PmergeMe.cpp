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
    size_t j;
    //IS DIGIT EN NEGATIVE
    for (i = 1; _input[i] != NULL; i++)
    {
        for (j = 0; _input[i][j] != '\0'; j++)
        {
            if (!isdigit(_input[i][j]))
                return false;
        }
    }
    // IS DUPLICATE
    for (i = 1; _input[i + 1] != NULL; i++)
    {
        for (j = i + 1; _input[j] != '\0'; j++)
        {
            if (strcmp(_input[i], _input[j]) == 0)
                return (false);
        }
    }
    return true;
}

void PmergeMe::sortVector(std::vector<int> vec, int start, int end)
{
    std::vector<int> tempo;
	tempo = vec;
    std::sort(tempo.begin(), tempo.end());
    std::vector<int>::iterator iter;
    std::cout << "ORGINAL VEC:\t "; 
    for (iter = vec.begin(); iter < vec.end() - 1; iter++)
        std::cout << *iter << " ";
    std::cout << *iter << std::endl;
     std::vector<int>::iterator tempiter;
    std::cout << "Sort VEC: \t "; 
    for (tempiter = tempo.begin(); tempiter < tempo.end() - 1; tempiter++)
        std::cout << *tempiter << " ";
    std::cout << *tempiter << std::endl;
}

void PmergeMe::sortDeque(std::deque<int> deque)
{
    std::deque<int> tempo;
	tempo = deque;
    std::sort(tempo.begin(), tempo.end());
    std::deque<int>::iterator iter;
    std::cout << "ORGINAL DEQ:\t "; 
    for (iter = deque.begin(); iter < deque.end() - 1; iter++)
        std::cout << *iter << " ";
    std::cout << *iter << std::endl;
    std::deque<int>::iterator tempiter;
    std::cout << "Sort DEQ: \t "; 
    for (tempiter = tempo.begin(); tempiter < tempo.end() - 1; tempiter++)
        std::cout << *tempiter << " ";
    std::cout << *tempiter << std::endl;



}
