#include "RPN.hpp"

RPN::RPN(std::string input)
{
    _input = input;
}

RPN::RPN(const RPN &old_obj)
{
    *this = old_obj;
}
RPN& RPN::operator=(const RPN &old_obj)
{
    (void)old_obj;
    return (*this);
}

RPN::~RPN(){}