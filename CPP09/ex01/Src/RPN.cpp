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

bool RPN::isOperater(char check)
{
    if (check == '+' || check == '-' || check == '/' || \
        check == '*')
        return (true);
    return (false);
}

bool RPN::isNumber(char check)
{
    if (check >= '0' && check <= '9')
        return (true);
    return (false);
}

int RPN::convertNum(char check)
{
    int value;
    value = check - '0';
    return value;
}

int RPN::calculation(int a, int b, char op)
{
    if(op == '+')
        return b + a;
    else if(op == '-')
        return b - a;
    else if(op == '*')
        return b * a;
    else if(op == '/')
        return b / a;
    else
        return INT_MIN;

    // Andere check voor vinden    
}