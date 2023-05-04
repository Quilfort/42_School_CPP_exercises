#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(4);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    mstack.push(8);
    mstack.push(3);
    mstack.push(737);
    mstack.push(19);
    std::cout << mstack.size() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    MutantStack<int>::iterator iter = mstack.begin();
    MutantStack<int>::iterator end = mstack.end();
    //++iter;
    //--iter;
    while (iter != end)
    {
        std::cout << *iter << std::endl;
        ++iter;
    }

    std::cout << "---------------------------------------------------" << std::endl;
    MutantStack<int>::rev rev_iter = mstack.rbegin();
    MutantStack<int>::rev rev_end = mstack.rend();

    while (rev_iter != rev_end)
    {
        std::cout << *rev_iter << std::endl;
        ++rev_iter;
    }
    return 0;
}