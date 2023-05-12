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

        bool checkInput(char *argv[]);
        void sortVector(std::vector<int> vec);
        void sortDeque(std::deque<int> deq);
        
        char        **_input;





};

#endif