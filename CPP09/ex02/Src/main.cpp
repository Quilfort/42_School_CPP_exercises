#include "PmergeMe.hpp"

int error_message(std::string string)
{
    std::cout << string << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    if (argc == 1 || argc > 3001)
        error_message("Give right amount of arguments");
    PmergeMe merge;
    unsigned long temp = 0;
    if (merge.checkInput(argv) == false)
        error_message("Input is incorrect");
    long time_diff;
    timeval start, end;
    gettimeofday(&start, NULL);
    std::vector<int> vec;
    std::deque<int> deq;
    for (size_t i = 1; argv[i] != NULL; i++)
    {
        temp = atol(argv[i]);
        if (temp > INT_MAX)
            error_message("Int is bigger than max int");
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