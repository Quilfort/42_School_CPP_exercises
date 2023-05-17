#include "Span.hpp"

Span::Span(unsigned int N)
{
    //std::cout << "Default constructor called" << std::endl;
	_maxint = N;
	_size = 0;
}

Span::Span(const Span &old_obj) : _maxint(old_obj._maxint) , _size(old_obj._size)
{
    //std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->_maxint = old_obj._maxint;
	this->_size = old_obj._size;
    return (*this);
}

Span::~Span()
{
    //std::cout << "Destructor called" << std::endl;    
}

void Span::addNumber(int add)
{	
	if (_size == _maxint)
		throw Span::AddNumberError();
	else
	{
		_numbers.push_back(add);
		_size = _numbers.size();
	}
}

void Span::addAmount(int amount)
{
	std::srand((unsigned) std::time(NULL));
	for (int i = 0; i < amount; i++)
		addNumber(std::rand());
}

int Span::shortestSpan(void)
{
	if (_size < 2)
		throw Span::VectorLengthError();
	std::vector<int> temp;
	temp = _numbers;
	std::sort(temp.begin(), temp.end());
	int answer = INT_MAX;
	std::vector<int>::iterator iter;
	for (iter = temp.begin(); iter < temp.end() - 1; iter++)
	{
		if (*(iter + 1) - *iter < answer)
			answer = *(iter + 1) - *iter;
	}
	return (answer);
}

int Span::longestSpan(void)
{
	if (_size < 2)
		throw Span::VectorLengthError();
	int small = *std::min_element(_numbers.begin(), _numbers.end());
	int big = *std::max_element(_numbers.begin(), _numbers.end());
	return (big - small);	
}

const char *Span::AddNumberError::what(void) const throw()
{
	return ("Maximum Integers exceeded");
};

const char *Span::VectorLengthError::what(void) const throw()
{
	return ("Vector has less than 2 number");
};