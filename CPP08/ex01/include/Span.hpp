#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits.h> 

class Span
{
    public:

    Span(unsigned int N);
    Span(const Span &old_obj);
    Span &operator=(const Span &old_obj);
    ~Span();

    void addNumber(int add);
    void addAmount(int amount);
    int shortestSpan();
    int longestSpan();

    class AddNumberError : public std::exception
    {
        public:
            const char *what() const throw ();
    };

      class VectorLengthError : public std::exception
    {
        public:
            const char *what() const throw ();
    };
    
    private:

    unsigned int        _maxint;
    std::vector<int>    _numbers;
    unsigned int        _size;
};

#endif