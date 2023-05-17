#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	_vec_time = 0;
	_deq_time = 0;
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
    for (i = 1; _input[i] != NULL; i++)
    {
        for (j = 0; _input[i][j] != '\0'; j++)
        {
            if (!isdigit(_input[i][j]))
                return false;
        }
    }
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

void PmergeMe::printTime(int elements, std::string cont, long time)
{
	std::cout << "Time to process a range of ";
	std::cout << elements;
	std::cout << " elements with std::";
	std::cout << cont << " : \t";
	std::cout << time << " us" << std::endl;
}

void PmergeMe::printAnswer(std::vector<int> &vec, std::deque<int> &deq)
{
	std::vector<int>::iterator iter;
	std::deque<int>::iterator iterDeq;
	std::cout << "Before:\t\t ";
	if (vec.size() < 6)
	{
		for (int i = 1; _input[i] != NULL; i++)
			std::cout << _input[i] << " ";
		std::cout << std::endl << "Vector After:\t ";
		for (iter = vec.begin(); iter != vec.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl << "Deque After:\t ";
		for (iterDeq = deq.begin(); iterDeq != deq.end(); iterDeq++)
			std::cout << *iterDeq << " ";
		std::cout << std::endl;
	}
	else
	{
		int count;
		for (count = 1; count < 5; count++)
			std::cout << _input[count] << " ";
		std::cout << "[...]";
		count = 0;
		std::cout << std::endl << "Vector After:\t ";
		for (iter = vec.begin(); count < 4; iter++, count++)
			std::cout << *iter << " ";
		std::cout << "[...]";
		count = 0;
		std::cout << std::endl << "Deque After:\t ";
		for (iterDeq = deq.begin(); count < 4; iterDeq++, count++)
			std::cout << *iterDeq << " ";
		std::cout << "[...]";
		std::cout << std::endl;
	}
	printTime(vec.size(), "vector", _vec_time);
	printTime(deq.size(), "deque", _deq_time);
}

void PmergeMe::sortVector(std::vector<int> &vec, int start, int end)
{
	timeval vec_start, vec_end;
    gettimeofday(&vec_start, NULL);
	if (end - start > 5)
	{
		int divide = (start + end) / 2;
		sortVector(vec, start, divide);
		sortVector(vec, divide + 1, end);
		combineVector(vec, start, end, divide);
	}
	else
		insertVector(vec, start, end);
	gettimeofday(&vec_end, NULL);
	_vec_time = vec_end.tv_usec - vec_start.tv_usec;
}

void PmergeMe::insertVector(std::vector<int> &vec, int start, int end)
{
	for (int i = start; i < end; i++)
	{
		int temp = vec[i + 1];
		int j = i + 1;
		for (; j > start && vec[j - 1] > temp; j--)
			vec[j] = vec[j - 1];
		vec[j] = temp;
	}
}

void PmergeMe::combineVector(std::vector<int> &vec, int start, int end, int divide)
{
	int len_left = divide - start + 1;
	int len_right = end - divide;
	int i = 0;
	std::vector<int> vec_left(len_left);
	std::vector<int> vec_right(len_right);
	for (i = 0; i < len_left; i++)
		vec_left[i] = vec[start + i];
	for (i = 0; i < len_right; i++)
		vec_right[i] = vec[divide + i + 1];
	int index_left = 0;
	int index_right = 0;
	for (i = start; i <= end; i++)
	{
		if (index_right == len_right)
		{
			vec[i] = vec_left[index_left];
			index_left++;
		}
		else if (index_left == len_left)
		{
			vec[i] = vec_right[index_right];
			index_right++;
		}
		else if (vec_right[index_right] > vec_left[index_left])
		{
			vec[i] = vec_left[index_left];
			index_left++;
		}
		else
		{
			vec[i] = vec_right[index_right];
			index_right++;
		}
	}
}

void PmergeMe::sortDeque(std::deque<int> &deq, int start, int end)
{
	timeval deq_start, deq_end;
	gettimeofday(&deq_start, NULL);
	if (end - start > 5)
	{
		int divide = (start + end) / 2;
		sortDeque(deq, start, divide);
		sortDeque(deq, divide + 1, end);
		combineDeque(deq, start, end, divide);
	}
	else
		insertDeque(deq, start, end);	
	gettimeofday(&deq_end, NULL);
	_deq_time = deq_end.tv_usec - deq_start.tv_usec;
}

void PmergeMe::insertDeque(std::deque<int> &deq, int start, int end)
{
	for (int i = start; i < end; i++)
	{
		int temp = deq[i + 1];
		int j = i + 1;
		for (; j > start && deq[j - 1] > temp; j--)
			deq[j] = deq[j - 1];
		deq[j] = temp;
	}
}

void PmergeMe::combineDeque(std::deque<int> &deq, int start, int end, int divide)
{
	int len_left = divide - start + 1;
	int len_right = end - divide;
	int i = 0;
	std::deque<int> deq_left(len_left);
	std::deque<int> deq_right(len_right);
	for (i = 0; i < len_left; i++)
		deq_left[i] = deq[start + i];
	for (i = 0; i < len_right; i++)
		deq_right[i] = deq[divide + i + 1];
	int index_left = 0;
	int index_right = 0;
	for (i = start; i <= end; i++)
	{
		if (index_right == len_right)
		{
			deq[i] = deq_left[index_left];
			index_left++;
		}
		else if (index_left == len_left)
		{
			deq[i] = deq_right[index_right];
			index_right++;
		}
		else if (deq_right[index_right] > deq_left[index_left])
		{
			deq[i] = deq_left[index_left];
			index_left++;
		}
		else
		{
			deq[i] = deq_right[index_right];
			index_right++;
		}
	}
}