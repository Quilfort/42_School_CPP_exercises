#include "RPN.hpp"

//https://cdn.intra.42.fr/pdf/pdf/83098/en.subject.pdf
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Use 1 argument" << std::endl;
        return EXIT_FAILURE;
    }
    int a,b;
    RPN prog(argv[1]);
    std::stack<int> stack;
    std::string::iterator iter;
    for (iter = prog._input.begin(); iter != prog._input.end(); iter++)
    {
        if (prog.isOperater(*iter))
        {
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(prog.calculation(a, b, *iter));
        }
        else if (prog.isNumber(*iter))
        {
            stack.push(prog.convertNum((*iter)));        
        }
    }
    std::cout << stack.top() << std::endl;
    return EXIT_SUCCESS;
}


