#include "RPN.hpp"

int error_message(std::string string)
{
    std::cout << string << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        error_message("Error: Wrong amount arguments");
    int a,b;
    RPN prog(argv[1]);
    std::stack<int> stack;
    std::string::iterator iter;
    for (iter = prog._input.begin(); iter != prog._input.end(); iter++)
    {
        if (*iter == ' ')
            continue;
        if (!prog.isOperater(*iter) && !prog.isNumber(*iter))
            error_message("Error: Character is not number of operation");
        if (prog.isOperater(*iter))
        {
            if (stack.size() < 2)
                error_message("Error: Need two numbers for operation");
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            int push = prog.calculation(a, b, *iter);
            if (push == INT_MAX)
                error_message("Can not divide by zero");
            stack.push(push);
        }
        else if (prog.isNumber(*iter))
            stack.push(prog.convertNum((*iter)));     
    }
    if (stack.size() != 1)
        error_message("Error: More than one element left on Stack");
    std::cout << stack.top() << std::endl;
    return EXIT_SUCCESS;
}


