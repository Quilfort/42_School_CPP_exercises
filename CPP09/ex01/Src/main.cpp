#include "RPN.hpp"

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
        if (*iter == ' ')
            continue;
        if (!prog.isOperater(*iter) && !prog.isNumber(*iter))
        {
            std::cout << "Error" << std::endl;
            return EXIT_FAILURE;
        }
        if (prog.isOperater(*iter))
        {
            if (stack.size() == 0)
            {
                std::cout << "Error" << std::endl;
                return EXIT_FAILURE;
            }
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            int push = prog.calculation(a, b, *iter);
            if (push == INT_MIN)
            {
                std::cout << "Calculation went wrong" << std::endl;
                return EXIT_FAILURE;
            }
            stack.push(push);
        }
        else if (prog.isNumber(*iter))
            stack.push(prog.convertNum((*iter)));     
    }
    if (stack.size() != 1)
    {
        std::cout << "Stack Size Wrong" << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << stack.top() << std::endl;
    return EXIT_SUCCESS;
}


