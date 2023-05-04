#include "Span.hpp"

Span::Span(unsigned int N)
{
    //std::cout << "Default constructor called" << std::endl;
	_maxint = N;
	_size = 0;
}

Span::Span(const Span &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Span& Span::operator=(const Span &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->_maxint = old_obj._maxint;
    return (*this);
}

Span::~Span()
{
    //std::cout << "Destructor called" << std::endl;    
}

void Span::addNumber(int add)
{	
	if (_size < _maxint)
	{
		_numbers.push_back(add);
		_size = _numbers.size();
	}
	else
		std::cout << "ERROR" << std::endl;
}

int Span::shortestSpan(void)
{
	std::vector<int> temp;
	temp = _numbers;
	std::sort(temp.begin(), temp.end());

	std::cout << "Number: " << _numbers[0] << std::endl;
	std::cout << "Temp: " << temp[0] << std::endl;


	return (7);
}

int Span::longestSpan(void)
{
	int answer;
	answer = 0;
	if (_size > 2)
	{
		int small = *std::min_element(_numbers.begin(), _numbers.end());
		int big = *std::max_element(_numbers.begin(), _numbers.end());
		answer = big - small;
	}
	else
		std::cout << "SPAN TOO SMALL" << std::endl;

	return (answer);	
}