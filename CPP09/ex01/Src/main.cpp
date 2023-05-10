#include "RPN.hpp"

//https://cdn.intra.42.fr/pdf/pdf/83098/en.subject.pdf
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Use 1 argument" << std::endl;
        return EXIT_FAILURE;
    }
    
    RPN program(argv[1]);
    std::stack<int> stack;
    std::cout << program._input << std::endl;
    std::stringstream stream(program._input);
    //std::string var;
    int num;
    stream >> num;
    stack.push(num);
    stream >> num;
    stack.push(num);
    while (!stack.empty())
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;
    
















    return EXIT_SUCCESS;
}


