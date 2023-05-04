#include "Span.hpp"

int main(void)
{

    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(200);
        sp.addNumber(50);
        sp.addNumber(49);
        sp.addNumber(100);
        sp.addNumber(55);
    }
    catch(Span::AddNumberError& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest: " << sp.longestSpan() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    Span sp1 = Span(5);
    sp1.addNumber(5);
    try
    {
        std::cout << "Shortest: " << sp1.shortestSpan() << std::endl;
    }
    catch(Span::VectorLengthError& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        sp1.addNumber(200);
        std::cout << "Longest: " << sp1.longestSpan() << std::endl;
    }
    catch(Span::VectorLengthError& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---------------------------------------------------" << std::endl;
    Span sp2 = Span(50);
    try
    {
        sp2.addAmount(100000);
    }
    catch(Span::AddNumberError& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest: " << sp2.longestSpan() << std::endl;
    return (0);
}