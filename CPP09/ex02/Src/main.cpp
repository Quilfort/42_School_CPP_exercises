#include "PmergeMe.hpp"

// https://cdn.intra.42.fr/pdf/pdf/83098/en.subject.pdf
int main(int argc, char *argv[])
{
    if (argc == 1 || argc > 3001)
    {
        std::cout << "Give right amount of arguments" << std::endl;
        return EXIT_FAILURE;
    }
    PmergeMe merge;
    unsigned long temp = 0;
    if (merge.checkInput(argv) == false)
    {
        std::cout << "input false False" << std::endl;
        return EXIT_FAILURE;
    }
    long time_diff;
    timeval start, end;
    gettimeofday(&start, NULL);
    std::vector<int> vec;
    std::deque<int> deq;
    for (size_t i = 1; argv[i] != NULL; i++)
    {
        temp = atol(argv[i]);
        if (temp > INT_MAX)
        {
            std::cout << "Int is bigger than max int" << std::endl;
            return EXIT_FAILURE;
        }
        vec.push_back(temp);
        deq.push_back(temp);
	}
    gettimeofday(&end, NULL);
    time_diff = end.tv_usec - start.tv_usec;
    merge.sortVector(vec, 0, vec.size() - 1);
    merge.sortDeque(deq, 0, deq.size() - 1);
    merge._vec_time += time_diff;
    merge._deq_time += time_diff;
    merge.printAnswer(vec, deq);
    return EXIT_SUCCESS;
}