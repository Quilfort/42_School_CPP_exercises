#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <limits.h> 

class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &old_obj);
        PmergeMe& operator=(const PmergeMe &old_obj);
        ~PmergeMe();

        // Check Input
        bool checkInput(char *argv[]);
    
        // Sort Vector
        void sortVector(std::vector<int> &vec, int start, int end);
        void insertVector(std::vector<int> &vec, int start, int end);
        void combineVector(std::vector<int> &vec, int start, int end, int divide);

        // Sort Deque
        void sortDeque(std::deque<int> &deq, int start, int end);
        void insertDeque(std::deque<int> &deq, int start, int end);
        void combineDeque(std::deque<int> &deq, int start, int end, int divide);

        // Print Answer
        void printAnswer(std::vector<int> &vec, std::deque<int> &deq);
        
    private:
        char    **_input;
};

#endif