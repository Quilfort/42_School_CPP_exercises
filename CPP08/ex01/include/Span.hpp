#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class Span
{
    public:

    Span(unsigned int N);
    Span(const Span &old_obj);
    Span &operator=(const Span &old_obj);
    ~Span();

    void addNumber(int add);
    int shortestSpan();
    int longestSpan();


    private:

    unsigned int        _maxint;
    std::vector<int>    _numbers;
    unsigned int        _size;





};

#endif